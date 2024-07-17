Function Invoke-ResponderGuard {

    <#
      .SYNOPSIS
    
        This function attempts to locate NBNS spoofers on a network by sending NBNS requests using fake hostnames to specified hosts.
    
        ResponderGuard Function: Invoke-ResponderGuard
        Author: Beau Bullock (@dafthack)
        License: MIT License
        Required Dependencies: None
        Optional Dependencies: None
    
      .DESCRIPTION
    
        This function attempts to locate NBNS spoofers on a network by sending NBNS requests using fake hostnames to specified hosts.
        
      .PARAMETER SingleIP
    
        A single IP address to scan for NBNS spoofing
        
      .PARAMETER CidrRange
    
        A CIDR range such as 192.168.1.0/24
    
      .PARAMETER CidrList
    
        A list of CIDR ranges 1 per line to scan for NBNS spoofing
    
      .PARAMETER SearchHost
    
        This is the hostname that will be sent in discovery requests. This should be alpha characters only and no more than than 32 characters long. Default is "wpad".
        
      .PARAMETER LoggingEnabled
    
        If the LoggingEnabled option is set a Windows Event log will be created for each potential NBNS spoofer found. The default EventID is 8415.
    
      .PARAMETER HoneyTokenSeed
    
        If the HoneyTokenSeed option is set ResponderGuard will submit a set of honey token credentials to a detected NBNS spoofer over SMB. #### Be sure to set the user/pass combination in the "Honey Token Seed" section below. #####
    
      .PARAMETER Domain
    
        Sets the domain used for honey token credential submission when a spoofer is identified. Default is "HoneyDomain."
    
      .PARAMETER Username
    
        Sets the username used for honey token credential submission when a spoofer is identified. This can be a valid username to associate use of cracked credentials with multicast DNS poisoning attacks via logon failure events. The actual password assigned to the user account should be very strong.
        Default is "HoneyUser."
    
      .PARAMETER Password
    
        Sets the password used for honey token credential submission when a spoofer is identified. This should be an INVALID and easily cracked password so attacker activity can be identified via logon failure events.
        Default is "Summer2019"
    
      .EXAMPLE
    
        C:\PS> Invoke-ResponderGuard -CidrList C:\temp\cidr-list.txt
    
        Description
        -----------
        This command will import the list of CIDR network ranges from the file at C:\temp\cidr-list.txt and attempt to scan each host to determine if an NBNS spoofer is present.
    
      .EXAMPLE
    
        C:\PS> Invoke-ResponderGuard -CidrRange 10.0.0.0/16 -LoggingEnabled
    
        Description
        -----------
        This command will attempt to scan each host in the 10.0.0.0/16 subnet to determine if an NBNS spoofer is present and will log each event to the Windows Event Log.
        
    
      .EXAMPLE
    
        C:\PS> Invoke-ResponderGuard -CidrRange 10.0.0.0/16 -LoggingEnabled -HoneyTokenSeed
    
        Description
        -----------
        This command will attempt to scan each host in the 10.0.0.0/16 subnet to determine if an NBNS spoofer is present and will log each event to the Windows Event Log. Additionally, for each detected NBNS spoofer a set of honey credentials will be sent to the listener over SMB. #### Be sure to set the user/pass combination in the "Honey Token Seed" section below.####
        
    #>
    
     Param(
        [Parameter(Position = 0, Mandatory = $false)]
        [string]
        $SingleIP = "",
        
        [Parameter(Position = 1, Mandatory = $false)]
        [string]
        $CidrRange = "",
    
        [Parameter(Position = 2, Mandatory = $false)]
        [string]
        $CidrList = "",
    
        [Parameter(Position = 3, Mandatory = $false)]
        [string]
        $SearchHost = "wpad",
    
        [Parameter(Position = 4, Mandatory = $false)]
        [switch]
        $LoggingEnabled = $false,
    
        [Parameter(Position = 5, Mandatory = $false)]
        [switch]
        $HoneyTokenSeed = $false,
    
        [Parameter(Position = 6, Mandatory = $false)]
        [String]
        $Domain = "HoneyDomain",
    
        [Parameter(Position = 7, Mandatory = $false)]
        [String]
        $Username = "HoneyUser",
    
        [Parameter(Position = 8, Mandatory = $false)]
        [String]
        $Password = "Summer2019"
     )
    
        if (($SingleIP -eq "") -and ($CidrRange -eq "") -and ($CidrList -eq "")) {
            Write-Output "[*] Target addresses must be specified using either -SingleIP, -CidrRange, or -CidrList."
            break
        }
        
        # If logging is enabled we need Admin rights
        if ($LoggingEnabled) {
            if (-NOT ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] "Administrator")) {
                Write-Warning "You are not currently running as an Administrator and cannot create the EventLog!`nPlease re-run ResponderGuard as an Administrator!"
                Break
            } else {
                # Create the ResponderGuard EventLog Source    
                Write-Output "[*] Setting up event logging."
            
                New-EventLog -LogName Application -Source "ResponderGuard" -ErrorVariable ErrorMessage -ErrorAction SilentlyContinue
                If ($ErrorMessage -match "source is already registered") {
                    Write-Output "[*] EventLog source ResponderGuard already exists."
                } elseif ($ErrorMessage) {
                    Write-Output $ErrorMessage
                    Break
                }       
            }
        }
    
        # If a Cidr range or list is selected create a list of IP addresses to test
        $totaladdresses = @()
        if ($SingleIP -ne "") {
            $totaladdresses += $SingleIP
        } elseif ($CidrRange -ne "") {
            $rangestart = Get-IPV4NetworkStartIP $CidrRange
            $rangeend = Get-IPV4NetworkEndIP $CidrRange
            $rangeaddresses = @()
            Write-Output "[*] Now creating a list of IP addresses from the $CidrRange network range."
            $rangeaddresses = New-IPRange $rangestart $rangeend
            Write-Output ("[*] A list of " + $rangeaddresses.count + " addresses was created.")
            $totaladdresses += $rangeaddresses
        } elseif ($CidrList -ne "") {
            Write-Output "[*] Now creating a list of IP addresses from the $CidrList."
            $cidrarray = @()
            $cidrarray = Get-Content $CidrList
            
            foreach ($range in $cidrarray) {
                $rangestart = Get-IPV4NetworkStartIP $range
                $rangeend = Get-IPV4NetworkEndIP $range
                $rangeaddresses = @()
                $rangeaddresses = New-IPRange $rangestart $rangeend
                $totaladdresses += $rangeaddresses
            }
            Write-Output ("[*] A list of " + $totaladdresses.count + " addresses was created.")
        }
    
        $Protocol = "NBNS"
    
        # Use Start-Job to scan IP addresses in parallel
        $jobs = @()
        foreach ($ip in $totaladdresses) {
            Write-Output "[*] Starting job for IP: $ip"
            $job = Start-Job -ScriptBlock {
                param ($ip, $SearchHost, $Protocol, $LoggingEnabled, $HoneyTokenSeed, $Domain, $Username, $Password)
    
                Function GenerateQueryBytes($SearchHost, $Protocol) {
                    $TxID = ((0..255) | Get-Random -Count 1).ToString() + ',' + ((0..255) | Get-Random -Count 1).ToString() + ','
                    if ($Protocol -eq "NBNS") {
                        $Control = '0x01,0x10,'
                    } else {
                        $Control = '0x00,0x00,'
                    }
                    $QDCount = '0x00,0x01,'
                    $ANCount = '0x00,0x00,'
                    $NSCount = '0x00,0x00,'
                    $ARCount = '0x00,0x00,'
                    $PayloadHeader = $TxID + $Control + $QDCount + $ANCount + $NSCount + $ARCount
                    if ($Protocol -eq "NBNS") {
                        $LabelLength = '0x20,'
                        $LabelBytes = HostNameToNBNSByteArray -strHostname $SearchHost
                        $NameLength = $SearchHost.length * 2
                        $SpaceCount = ((32 - $NameLength) / 2) - 1
                        $Padding = ""
                        for ($i = 0; $i -lt $SpaceCount; $i++) {
                            $Padding += '0x43,0x41,'
                        }
                        $Padding += '0x41,0x41,'
                        $LabelBytes = $LabelLength + $LabelBytes + $Padding
                    } else {
                        $Padding = ""
                        $LabelBytes = ""
                        $Labels = $SearchHost.Split(".")
                        foreach ($Label in $Labels) {
                            $LabelBytes += $Label.length.ToString() + ','
                            for ($i = 0; $i -lt $Label.length; $i++) {
                                $LabelBytes += ([Int]$Label[$i]).ToString() + ','
                            }
                        }
                    }
                    $RootLabel = '0x00,'
                    if ($Protocol -eq "NBNS") {
                        $QuestionType = '0x00,0x20,'
                        $QuestionClass = '0x00,0x01'
                    } elseif ($Protocol -eq "LLMNR") {
                        $QuestionType = '0x00,0x01,'
                        $QuestionClass = '0x00,0x01'
                    } else {
                        $QuestionType = '0x00,0x01,'
                        $QuestionClass = '0x80,0x01'
                    }
                    $PayloadTrailer = $RootLabel + $QuestionType + $QuestionClass
                    return $PayloadHeader + $LabelBytes + $PayloadTrailer
                }
    
                Function ResponseBytesToHostname($packetBytes, $Protocol) {
                    $ANCount = [int]$packetBytes[7]
                    if ($ANCount -ne 1) {
                        Write-Output "[*] Something is amiss. We should only have one answer. Answer Count: $ANCount"
                    }
                    $Labels = [System.Collections.ArrayList]@()
                    $Index = 12
                    $LabelLength = [int]$packetBytes[$Index]
                    $Index++
                    while ($LabelLength -ne 0) {
                        $LabelBytes = @()
                        $LabelBytes = $packetBytes[($Index)..($Index + ($LabelLength - 1))]
                        $LabelString = ""
                        if ($Protocol -eq "NBNS") {
                            for ($i = 0; $i -lt 31; $i = $i + 2) {
                                $pair = [System.String]::Format('{0:X}', [int]$LabelBytes[$i]) + [System.String]::Format('{0:X}', [int]$LabelBytes[$i + 1])
                                switch ($pair) {
                                    '4441' { $LabelString += "0"; break }
                                    '4442' { $LabelString += "1"; break }
                                    '4443' { $LabelString += "2"; break }
                                    '4444' { $LabelString += "3"; break }
                                    '4445' { $LabelString += "4"; break }
                                    '4446' { $LabelString += "5"; break }
                                    '4447' { $LabelString += "6"; break }
                                    '4448' { $LabelString += "7"; break }
                                    '4449' { $LabelString += "8"; break }
                                    '444A' { $LabelString += "9"; break }
                                    '4542' { $LabelString += "A"; break }
                                    '4543' { $LabelString += "B"; break }
                                    '4544' { $LabelString += "C"; break }
                                    '4545' { $LabelString += "D"; break }
                                    '4546' { $LabelString += "E"; break }
                                    '4547' { $LabelString += "F"; break }
                                    '4548' { $LabelString += "G"; break }
                                    '4549' { $LabelString += "H"; break }
                                    '454A' { $LabelString += "I"; break }
                                    '454B' { $LabelString += "J"; break }
                                    '454C' { $LabelString += "K"; break }
                                    '454D' { $LabelString += "L"; break }
                                    '454E' { $LabelString += "M"; break }
                                    '454F' { $LabelString += "N"; break }
                                    '4550' { $LabelString += "O"; break }
                                    '4641' { $LabelString += "P"; break }
                                    '4642' { $LabelString += "Q"; break }
                                    '4643' { $LabelString += "R"; break }
                                    '4644' { $LabelString += "S"; break }
                                    '4645' { $LabelString += "T"; break }
                                    '4646' { $LabelString += "U"; break }
                                    '4647' { $LabelString += "V"; break }
                                    '4648' { $LabelString += "W"; break }
                                    '4649' { $LabelString += "X"; break }
                                    '464A' { $LabelString += "Y"; break }
                                    '464B' { $LabelString += "Z"; break }
                                    '4341' { continue }
                                }
                            }
                            $Labels.Add($LabelString)
                        } else {
                            foreach ($Char in $LabelBytes) {
                                $LabelString += [char]$Char
                            }
                            $Labels.Add($LabelString)
                        }
                        $Index = $Index + $LabelLength
                        $LabelLength = [int]$packetBytes[$Index]
                        $Index++
                    }
                    $HostName = ""
                    foreach ($Label in $Labels) {
                        $HostName += $Label + '.'
                    }
                    $HostName = $HostName.trimend('.')
                    return $HostName
                }
    
                Function HostNameToNBNSByteArray($strHostname) {
                    $LabelArray = [char[]]$strHostName.toUpper()
                    $LabelBytes = ""
                    foreach ($letter in $LabelArray) {
                        switch ($letter) {
                            '0' { $LabelBytes += "0x44,0x41,"; break }
                            '1' { $LabelBytes += "0x44,0x42,"; break }
                            '2' { $LabelBytes += "0x44,0x43,"; break }
                            '3' { $LabelBytes += "0x44,0x44,"; break }
                            '4' { $LabelBytes += "0x44,0x45,"; break }
                            '5' { $LabelBytes += "0x44,0x46,"; break }
                            '6' { $LabelBytes += "0x44,0x47,"; break }
                            '7' { $LabelBytes += "0x44,0x48,"; break }
                            '8' { $LabelBytes += "0x44,0x49,"; break }
                            '9' { $LabelBytes += "0x44,0x4A,"; break }
                            'A' { $LabelBytes += "0x45,0x42,"; break }
                            'B' { $LabelBytes += "0x45,0x43,"; break }
                            'C' { $LabelBytes += "0x45,0x44,"; break }
                            'D' { $LabelBytes += "0x45,0x45,"; break }
                            'E' { $LabelBytes += "0x45,0x46,"; break }
                            'F' { $LabelBytes += "0x45,0x47,"; break }
                            'G' { $LabelBytes += "0x45,0x48,"; break }
                            'H' { $LabelBytes += "0x45,0x49,"; break }
                            'I' { $LabelBytes += "0x45,0x4A,"; break }
                            'J' { $LabelBytes += "0x45,0x4B,"; break }
                            'K' { $LabelBytes += "0x45,0x4C,"; break }
                            'L' { $LabelBytes += "0x45,0x4D,"; break }
                            'M' { $LabelBytes += "0x45,0x4E,"; break }
                            'N' { $LabelBytes += "0x45,0x4F,"; break }
                            'O' { $LabelBytes += "0x45,0x50,"; break }
                            'P' { $LabelBytes += "0x46,0x41,"; break }
                            'Q' { $LabelBytes += "0x46,0x42,"; break }
                            'R' { $LabelBytes += "0x46,0x43,"; break }
                            'S' { $LabelBytes += "0x46,0x44,"; break }
                            'T' { $LabelBytes += "0x46,0x45,"; break }
                            'U' { $LabelBytes += "0x46,0x46,"; break }
                            'V' { $LabelBytes += "0x46,0x47,"; break }
                            'W' { $LabelBytes += "0x46,0x48,"; break }
                            'X' { $LabelBytes += "0x46,0x49,"; break }
                            'Y' { $LabelBytes += "0x46,0x4A,"; break }
                            'Z' { $LabelBytes += "0x46,0x4B,"; break }
                            '.' { $LabelBytes += "0x43,0x4F,"; break }
                        }
                    }
                    return $LabelBytes
                }
    
                try {
                    # Create UDP socket
                    $port = 137
                    $ipEP = [System.Net.IPEndPoint]::new([System.Net.IPAddress]::Parse($ip), $port)
                    $udpconn = [System.Net.Sockets.UdpClient]::new($port)
    
                    $fullpacketbytes = GenerateQueryBytes -SearchHost $SearchHost -Protocol $Protocol    
                    [byte[]] $sendbytes = $fullpacketbytes.split(",")
    
                    $udpconn.Client.ReceiveTimeout = 500
                    $bytesSent = $udpconn.Send($sendbytes, $sendbytes.Length, $ipEP)
    
                    # Try to receive response, if there is no response move on to next host
                    try {
                        $rcvbytes = $udpconn.Receive([ref]$ipEP)
                        $udpconn.Close()
                        $udpconn.Dispose()
                    } catch {
                        $udpconn.Close()
                        $udpconn.Dispose()
                        Write-Output "[*] No response from $ip."
                        return
                    }
    
                    $nbname = ResponseBytesToHostname -packetBytes $rcvbytes -Protocol $Protocol
    
                    Write-Output "[*] ResponderGuard received an NBNS response from the host at $ip for the hostname $nbname!"
                    
                    # Writing Windows Event log if enabled
                    if ($LoggingEnabled) {
                        Write-EventLog -LogName Application -Source "ResponderGuard" -EntryType Information -EventID 8415 -Message "An NBNS spoofer was discovered at $ip."
                        Write-Output "[*] An event was written to the Windows Event log."
                    }
                    
                    # Submitting a honey token user credential to the listening Responder if enabled
                    if ($HoneyTokenSeed) {
                        $ResponderShare = "\\$ip\c$"
                        Write-Output "[*] Submitting Honey Token Creds $Domain\$Username : $Password to $ResponderShare!"
                        $sharecmd = "net use r: $ResponderShare /User:$Domain\$Username $Password 2>&1"
                        $cmdout = Invoke-Expression -Command $sharecmd -ErrorAction SilentlyContinue
                    }
                } catch {
                    Write-Output "[*] Error scanning $ip: $_"
                }
            } -ArgumentList $ip, $SearchHost, $Protocol, $LoggingEnabled, $HoneyTokenSeed, $Domain, $Username, $Password
            $jobs += $job
        }
    
        # Wait for all jobs to complete
        $jobs | ForEach-Object { 
            while ($_.State -eq 'Running') {
                Start-Sleep -Seconds 1
            }
        }
    
        # Collect results
        $results = $jobs | ForEach-Object {
            Receive-Job -Job $_
            Remove-Job -Job $_
        }
    
        Write-Output $results
    }
    
    # Functions for IP address generation and conversion
    
    Function Get-IPV4NetworkStartIP ($strNetwork) {
        $StrNetworkAddress = ($strNetwork.split("/"))[0]
        $NetworkIP = ([System.Net.IPAddress]$StrNetworkAddress).GetAddressBytes()
        [Array]::Reverse($NetworkIP)
        $NetworkIP = ([System.Net.IPAddress]($NetworkIP -join ".")).Address
        $StartIP = $NetworkIP + 1
        if (($StartIP.Gettype()).Name -ine "double") {
            $StartIP = [Convert]::ToDouble($StartIP)
        }
        $StartIP = [System.Net.IPAddress]$StartIP
        Return $StartIP
    }
    
    Function Get-IPV4NetworkEndIP ($strNetwork) {
        $StrNetworkAddress = ($strNetwork.split("/"))[0]
        [int]$NetworkLength = ($strNetwork.split("/"))[1]
        $IPLength = 32 - $NetworkLength
        $NumberOfIPs = ([System.Math]::Pow(2, $IPLength)) - 1
        $NetworkIP = ([System.Net.IPAddress]$StrNetworkAddress).GetAddressBytes()
        [Array]::Reverse($NetworkIP)
        $NetworkIP = ([System.Net.IPAddress]($NetworkIP -join ".")).Address
        $EndIP = $NetworkIP + $NumberOfIPs
        if (($EndIP.Gettype()).Name -ine "double") {
            $EndIP = [Convert]::ToDouble($EndIP)
        }
        $EndIP = [System.Net.IPAddress]$EndIP
        Return $EndIP
    }
    
    Function New-IPRange ($start, $end) {
        $ip1 = ([System.Net.IPAddress]$start).GetAddressBytes()
        [Array]::Reverse($ip1)
        $ip1 = ([System.Net.IPAddress]($ip1 -join '.')).Address
        $ip2 = ([System.Net.IPAddress]$end).GetAddressBytes()
        [Array]::Reverse($ip2)
        $ip2 = ([System.Net.IPAddress]($ip2 -join '.')).Address
        for ($x = $ip1; $x -le $ip2; $x++) {
            $ip = ([System.Net.IPAddress]$x).GetAddressBytes()
            [Array]::Reverse($ip)
            $ip -join '.'
        }
    }
    
    # Functions for NBNS byte array generation and response parsing
    
    function HostNameToNBNSByteArray($strHostname) {
        $LabelArray = [char[]]$strHostName.toUpper()
        $LabelBytes = ""
        foreach ($letter in $LabelArray) {
            switch ($letter) {
                '0' { $LabelBytes += "0x44,0x41,"; break }
                '1' { $LabelBytes += "0x44,0x42,"; break }
                '2' { $LabelBytes += "0x44,0x43,"; break }
                '3' { $LabelBytes += "0x44,0x44,"; break }
                '4' { $LabelBytes += "0x44,0x45,"; break }
                '5' { $LabelBytes += "0x44,0x46,"; break }
                '6' { $LabelBytes += "0x44,0x47,"; break }
                '7' { $LabelBytes += "0x44,0x48,"; break }
                '8' { $LabelBytes += "0x44,0x49,"; break }
                '9' { $LabelBytes += "0x44,0x4A,"; break }
                'A' { $LabelBytes += "0x45,0x42,"; break }
                'B' { $LabelBytes += "0x45,0x43,"; break }
                'C' { $LabelBytes += "0x45,0x44,"; break }
                'D' { $LabelBytes += "0x45,0x45,"; break }
                'E' { $LabelBytes += "0x45,0x46,"; break }
                'F' { $LabelBytes += "0x45,0x47,"; break }
                'G' { $LabelBytes += "0x45,0x48,"; break }
                'H' { $LabelBytes += "0x45,0x49,"; break }
                'I' { $LabelBytes += "0x45,0x4A,"; break }
                'J' { $LabelBytes += "0x45,0x4B,"; break }
                'K' { $LabelBytes += "0x45,0x4C,"; break }
                'L' { $LabelBytes += "0x45,0x4D,"; break }
                'M' { $LabelBytes += "0x45,0x4E,"; break }
                'N' { $LabelBytes += "0x45,0x4F,"; break }
                'O' { $LabelBytes += "0x45,0x50,"; break }
                'P' { $LabelBytes += "0x46,0x41,"; break }
                'Q' { $LabelBytes += "0x46,0x42,"; break }
                'R' { $LabelBytes += "0x46,0x43,"; break }
                'S' { $LabelBytes += "0x46,0x44,"; break }
                'T' { $LabelBytes += "0x46,0x45,"; break }
                'U' { $LabelBytes += "0x46,0x46,"; break }
                'V' { $LabelBytes += "0x46,0x47,"; break }
                'W' { $LabelBytes += "0x46,0x48,"; break }
                'X' { $LabelBytes += "0x46,0x49,"; break }
                'Y' { $LabelBytes += "0x46,0x4A,"; break }
                'Z' { $LabelBytes += "0x46,0x4B,"; break }
                '.' { $LabelBytes += "0x43,0x4F,"; break }
            }
        }
        return $LabelBytes
    }
    
    function ResponseBytesToHostname($packetBytes, $Protocol) {
        $ANCount = [int]$packetBytes[7]
        if ($ANCount -ne 1) {
            Write-Output "[*] Something is amiss. We should only have one answer. Answer Count: $ANCount"
        }
        $Labels = [System.Collections.ArrayList]@()
        $Index = 12
        $LabelLength = [int]$packetBytes[$Index]
        $Index++
        while ($LabelLength -ne 0) {
            $LabelBytes = @()
            $LabelBytes = $packetBytes[($Index)..($Index + ($LabelLength - 1))]
            $LabelString = ""
            if ($Protocol -eq "NBNS") {
                for ($i = 0; $i -lt 31; $i = $i + 2) {
                    $pair = [System.String]::Format('{0:X}', [int]$LabelBytes[$i]) + [System.String]::Format('{0:X}', [int]$LabelBytes[$i + 1])
                    switch ($pair) {
                        '4441' { $LabelString += "0"; break }
                        '4442' { $LabelString += "1"; break }
                        '4443' { $LabelString += "2"; break }
                        '4444' { $LabelString += "3"; break }
                        '4445' { $LabelString += "4"; break }
                        '4446' { $LabelString += "5"; break }
                        '4447' { $LabelString += "6"; break }
                        '4448' { $LabelString += "7"; break }
                        '4449' { $LabelString += "8"; break }
                        '444A' { $LabelString += "9"; break }
                        '4542' { $LabelString += "A"; break }
                        '4543' { $LabelString += "B"; break }
                        '4544' { $LabelString += "C"; break }
                        '4545' { $LabelString += "D"; break }
                        '4546' { $LabelString += "E"; break }
                        '4547' { $LabelString += "F"; break }
                        '4548' { $LabelString += "G"; break }
                        '4549' { $LabelString += "H"; break }
                        '454A' { $LabelString += "I"; break }
                        '454B' { $LabelString += "J"; break }
                        '454C' { $LabelString += "K"; break }
                        '454D' { $LabelString += "L"; break }
                        '454E' { $LabelString += "M"; break }
                        '454F' { $LabelString += "N"; break }
                        '4550' { $LabelString += "O"; break }
                        '4641' { $LabelString += "P"; break }
                        '4642' { $LabelString += "Q"; break }
                        '4643' { $LabelString += "R"; break }
                        '4644' { $LabelString += "S"; break }
                        '4645' { $LabelString += "T"; break }
                        '4646' { $LabelString += "U"; break }
                        '4647' { $LabelString += "V"; break }
                        '4648' { $LabelString += "W"; break }
                        '4649' { $LabelString += "X"; break }
                        '464A' { $LabelString += "Y"; break }
                        '464B' { $LabelString += "Z"; break }
                        '4341' { continue }
                    }
                }
                $Labels.Add($LabelString)
            } else {
                foreach ($Char in $LabelBytes) {
                    $LabelString += [char]$Char
                }
                $Labels.Add($LabelString)
            }
            $Index = $Index + $LabelLength
            $LabelLength = [int]$packetBytes[$Index]
            $Index++
        }
        $HostName = ""
        foreach ($Label in $Labels) {
            $HostName += $Label + '.'
        }
        $HostName = $HostName.trimend('.')
        return $HostName
    }
    
    function GenerateQueryBytes($SearchHost, $Protocol) {
        $TxID = ((0..255) | Get-Random -Count 1).ToString() + ',' + ((0..255) | Get-Random -Count 1).ToString() + ','
        if ($Protocol -eq "NBNS") {
            $Control = '0x01,0x10,'
        } else {
            $Control = '0x00,0x00,'
        }
        $QDCount = '0x00,0x01,'
        $ANCount = '0x00,0x00,'
        $NSCount = '0x00,0x00,'
        $ARCount = '0x00,0x00,'
        $PayloadHeader = $TxID + $Control + $QDCount + $ANCount + $NSCount + $ARCount
        if ($Protocol -eq "NBNS") {
            $LabelLength = '0x20,'
            $LabelBytes = HostNameToNBNSByteArray -strHostname $SearchHost
            $NameLength = $SearchHost.length * 2
            $SpaceCount = ((32 - $NameLength) / 2) - 1
            $Padding = ""
            for ($i = 0; $i -lt $SpaceCount; $i++) {
                $Padding += '0x43,0x41,'
            }
            $Padding += '0x41,0x41,'
            $LabelBytes = $LabelLength + $LabelBytes + $Padding
        } else {
            $Padding = ""
            $LabelBytes = ""
            $Labels = $SearchHost.Split(".")
            foreach ($Label in $Labels) {
                $LabelBytes += $Label.length.ToString() + ','
                for ($i = 0; $i -lt $Label.length; $i++) {
                    $LabelBytes += ([Int]$Label[$i]).ToString() + ','
                }
            }
        }
        $RootLabel = '0x00,'
        if ($Protocol -eq "NBNS") {
            $QuestionType = '0x00,0x20,'
            $QuestionClass = '0x00,0x01'
        } elseif ($Protocol -eq "LLMNR") {
            $QuestionType = '0x00,0x01,'
            $QuestionClass = '0x00,0x01'
        } else {
            $QuestionType = '0x00,0x01,'
            $QuestionClass = '0x80,0x01'
        }
        $PayloadTrailer = $RootLabel + $QuestionType + $QuestionClass
        return $PayloadHeader + $LabelBytes + $PayloadTrailer
    }
    