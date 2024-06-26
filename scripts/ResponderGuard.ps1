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

    if(($SingleIP -eq "") -and ($CidrRange -eq "") -and ($CidrList -eq ""))
    {
        Write-Output "[*] Target addresses must be specified using either -SingleIP, -CidrRange, or -CidrList."
        break
    }
    
    #If logging is enabled we need Admin rights
    if ($LoggingEnabled)
    {
        if (-NOT ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] "Administrator"))
        {
            Write-Warning "You are not currently running as an Administrator and cannot create the EventLog!`nPlease re-run ResponderGuard as an Administrator!"
            Break
        }
        else
        {
        #Create the ResponderGuard EventLog Source    
            Write-Output "[*] Setting up event logging."
        
            New-EventLog -LogName Application -Source "ResponderGuard" -ErrorVariable ErrorMessage -ErrorAction SilentlyContinue
            If ($ErrorMessage -match "source is already registered")
            {
                Write-Output "[*] EventLog source ResponderGuard already exists."
            }
            elseif ($ErrorMessage)
            {
                Write-Output $ErrorMessage
                Break
            }       
        }
    }

    #if a Cidr range or list is selected create a list of IP addresses to test
    $totaladdresses = @()
    if ($SingleIP -ne "")
    {
        $totaladdresses += $SingleIP
    }
    elseif($CidrRange -ne "")
    {
        $rangestart = Get-IPV4NetworkStartIP $CidrRange
        $rangeend = Get-IPV4NetworkEndIP $CidrRange
        $rangeaddresses = @()
        Write-Output "[*] Now creating a list of IP addresses from the $CidrRange network range."
        $rangeaddresses = New-IPRange $rangestart $rangeend
        Write-Output ("[*] A list of " + $rangeaddresses.count + " addresses was created.")
        $totaladdresses += $rangeaddresses
    }
    elseif($CidrList -ne "")
    {
        Write-Output "[*] Now creating a list of IP addresses from the $CidrList."
        $cidrarray = @()
        $cidrarray = Get-Content $CidrList
        
        foreach ($range in $cidrarray)
        {
            $rangestart = Get-IPV4NetworkStartIP $range
            $rangeend = Get-IPV4NetworkEndIP $range
            $rangeaddresses = @()
            $rangeaddresses = New-IPRange $rangestart $rangeend
            $totaladdresses += $rangeaddresses
        }
        Write-Output ("[*] A list of " + $totaladdresses.count + " addresses was created.")
    }

    $Protocol = "NBNS"

    while($true)
    {
        $count = $totaladdresses.count
        $currentnumber = 1
         
        foreach($ip in $totaladdresses)
        {
            #Quit the loop when the 'q' key is pressed
            $keyOption = 'q', 'Q'

            if($Host.UI.RawUI.KeyAvailable)
            {
                $keyPress = $host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown,IncludeKeyUp")
                if($keyOption -contains $keyPress.Character )
                {
                    return
                }
            }

            #Progress Bar
            $percentcomplete = ($currentnumber / $count) * 100
            Write-Progress -Activity "ResponderGuard Scan in Progress - Current IP: $ip. (Press 'q' to quit)" -Status "Scanned $currentnumber of $count hosts" -PercentComplete $percentcomplete
            $currentnumber++

            #Create UDP socket
            $port = 137
            $ipEP = new-object System.Net.IPEndPoint ([system.net.IPAddress]::parse($ip),$port)
            $udpconn = new-Object System.Net.Sockets.UdpClient $port

            #Generate random 10 character hostname
            #$hostname = -join ((65..90) | Get-Random -Count 10 | % {[char]$_})
            $fullpacketbytes = GenerateQueryBytes $SearchHost $Protocol    
            [byte[]] $sendbytes = $fullpacketbytes.split(",")
     
            $udpconn.client.receivetimeout=500
            $bytesSent = $udpconn.Send($sendbytes,$sendbytes.length,$ipEP)
            #Try to receive response, if there is no response move on to next host
            try
            {
                $rcvbytes = $udpconn.Receive([ref]$ipEP)
                $udpconn.Close()
                $udpconn.Dispose()
            }
            catch
            {
                $udpconn.Close()
                $udpconn.Dispose()
                continue
            }

            $nbname = ResponseBytesToHostname $rcvbytes $Protocol
 
            Write-Output "[*] ResponderGuard received an NBNS response from the host at $ip for the hostname $nbname!"
            
            #Writing Windows Event log if enabled
            If ($LoggingEnabled)
            {
                Write-EventLog -LogName Application -Source "ResponderGuard" -EntryType Information -EventID 8415 -Message "An NBNS spoofer was discovered at $ip."
                Write-Output "[*] An event was written to the Windows Event log."
            }
            
            #### Honey Token Seed Section ####
            #### Set $Username and $Password to your own Honeytoken domain/user you want to alert on ####

            #Submitting a honey token user credential to the listening Responder if enabled
            If ($HoneyTokenSeed)
            {
                $ResponderShare = "\\$ip\c$"
                Write-Output "[*] Submitting Honey Token Creds $Domain\$Username : $Password to $ResponderShare!"
                $sharecmd = "net use r: $ResponderShare /User:$Domain\$Username $Password 2>&1"
                $cmdout = Invoke-Expression -Command $sharecmd -ErrorAction SilentlyContinue
            }
        }
    }
}

Function Invoke-ResponderGuardAgent {

<#
  .SYNOPSIS

    This function runs as a background agent to detect multicast DNS spoofers.  The executing host can send name resolution requests using any
    combination of mDNS, LLMNR, or NBNS. The agent listens for responses to each generated request.  If a response is observed, then multicast 
    name resolution poisoning is likely underway.
    
    To learn how and why you should disable these protocols, read the following blog post.
    
    ResponderGuard Function: Invoke-ResponderGuardAgent
    Author: David Fletcher
    License: MIT License
    Required Dependencies: None
    Optional Dependencies: None

  .DESCRIPTION

    This function is run via GPO to detect multicast DNS spoofers on the network.

  .PARAMETER SearchHost

    This is the hostname that will be sent in discovery requests. This should be alpha characters only and no more than than 32 characters long.
           
  .PARAMETER LoggingDisabled
   
    If the LoggingDisabled option is set a no log output will be generated. Otherwise, a Windows Event log will be created for each potential spoofer found. The default EventID is 8415. These events should be forwarded to a central analysis console where activity can be correlated to attacker behavior.
    
  .PARAMETER NBNS
  
    Provides fine-grained control of protocols supported by the host. This switch enables/disabled NBNS.
  
  .PARAMETER LLMNR
  
    Provides fine-grained control of protocols supported by the host. This switch enables/disabled LLMNR.
  
  .PARAMETER mDNS
  
    Provides fine-grained control of protocols supported by the host. This switch enables/disabled mDNS.

  .PARAMETER HoneyTokenSeed

    If the HoneyTokenSeed option is set ResponderGuard will submit a set of honey token credentials to a detected spoofer over SMB. #### Be sure to set the user/pass combination in the "Honey Token Seed" section below. #####

  .PARAMETER Domain

    Sets the domain used for honey token credential submission when a spoofer is identified.

  .PARAMETER Username

    Sets the username used for honey token credential submission when a spoofer is identified. This can be a valid username to associate use of cracked credentials with multicast DNS poisoning attacks via logon failure events. The actual password assigned to the user account should be very strong.

  .PARAMETER Password

    Sets the password used for honey token credential submission when a spoofer is identified. This should be an INVALID and easily cracked password so attacker activity can be identified via logon failure events.

  .PARAMETER ConsoleOutput

    Enables console output for interactive analysis. By default, all console output is suppressed in favor of log output.


  .EXAMPLE

    C:\PS> Invoke-ResponderGuardGPO -LoggingEnabled

    Description
    -----------
    This command will execute ResponderGuardGPO with all protocols enabled and output logging to the Windows Application Event Log.

  .EXAMPLE

    C:\PS> Invoke-ResponderGuard -NBNS -LLMNR -LoggingEnabled -HoneyTokenSeed

    Description
    -----------
    This command will execute ResponderGuardGPO with NBNS and LLMNR enabled, sending honey credentials when a response is observed, and log any interaction to the Windows Application event log.
  #>



 Param(
 [Parameter(Position = 1, Mandatory = $false)]
 [String]
 $SearchHost = "wpad",

 [Parameter(Position = 2, Mandatory = $false)]
 [switch]
 $LoggingDisabled = $false,

 [Parameter(Position = 3, Mandatory = $false)]
 [switch]
 $NBNSEnabled = $false,

 [Parameter(Position = 4, Mandatory = $false)]
 [switch]
 $LLMNREnabled = $false,

 [Parameter(Position = 5, Mandatory = $false)]
 [switch]
 $mDNSEnabled = $false,

 [Parameter(Position = 6, Mandatory = $false)]
 [switch]
 $HoneyTokenSeed = $false,

 [Parameter(Position = 7, Mandatory = $false)]
 [String]
 $Domain = "HoneyDomain",

 [Parameter(Position = 8, Mandatory = $false)]
 [String]
 $Username = "HoneyUser",

 [Parameter(Position = 9, Mandatory = $false)]
 [String]
 $Password = "Summer2019!",

 [Parameter(Position = 10, Mandatory = $false)]
 [switch]
 $ConsoleOutput = $false
 )

    $Protocols = [System.Collections.ArrayList]@()

    if(($NBNSEnabled -eq $false) -and ($LLMNREnabled -eq "") -and ($mDNSEnabled -eq ""))
    {
        Write-Warning "No protocols are enabled. Please specify a protocol switch"
        break
    }
    else
    {
 
        if ($NBNSEnabled)
        {
            $Index = $Protocols.Add("NBNS")
        }
 
        if ($LLMNREnabled)
        {
            $Index = $Protocols.Add("LLMNR")
        }
    
        if ($mDNSEnabled)
        {
            $Index = $Protocols.Add("mDNS")
        }
 
    }
 
    #If logging is enabled we need Admin rights
    if ($LoggingDisabled -eq $false)
    {
        if (-NOT ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] "Administrator"))
        {
            Write-Warning "You are not currently running as an Administrator and cannot create the EventLog!`nPlease re-run ResponderGuard as an Administrator!"
            Break
        }
        else
        {
            #Create the ResponderGuard EventLog Source
            if($ConsoleOutput)
            {    
                Write-Output "[*] Setting up event logging."
            }
        
            New-EventLog -LogName Application -Source "ResponderGuard" -ErrorVariable ErrorMessage -ErrorAction SilentlyContinue
            If ($ErrorMessage -match "source is already registered")
            {
                if($ConsoleOutput)
                {
                    Write-Output "[*] EventLog source ResponderGuard already exists."
                }
            }
            elseif ($ErrorMessage)
            {
                Write-Output $ErrorMessage
                Break
            }       
        }
    }
 
    if ($SearchHost.length -gt 32)
    {
        Write-Warning "[*] Search host must be 32 characters or less in length."
        Break
    }

    if($ConsoleOutput)
    {
        Write-Output "[*] Entering processing loop. To gracefully stop processing, press the Q key."
    }


    While($true)
    {

        #Quit the loop when the 'q' key is pressed
        $keyOption = 'q', 'Q'
    
        if($Host.UI.RawUI.KeyAvailable)
        {
            $keyPress = $host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown,IncludeKeyUp")
            if($keyOption -contains $keyPress.Character )
            {
                return
            }
        }

        Start-Sleep -s ((1..2) | Get-Random -Count 1)    
        foreach($Protocol in $Protocols)
        {
            if($Protocol -eq "NBNS")
            {
                #Create UDP socket
                $port = 137
                $ipEP = new-object System.Net.IPEndPoint([System.Net.IPAddress]::Broadcast,$port)
                $rcvEP = new-object System.Net.IPEndPoint([System.Net.IPAddress]::Any, $port)
                $udpconn = new-Object System.Net.Sockets.UdpClient $port

                $fullpacketbytes = GenerateQueryBytes $SearchHost $Protocol
                [byte[]] $sendbytes = $fullpacketbytes.split(",")

                $bytesSent = $udpconn.Send($sendbytes,$sendbytes.length,$ipEP)
                $udpconn.Close()
                $udpconn.Dispose()

                $udpRcv = new-Object System.Net.Sockets.UdpClient $port          
                $udpRcv.Client.ReceiveTimeout = 1000
            
                #Try to receive response, if there is no response move on to next host
                try
                {
                    $rcvbytes = $udpRcv.Receive([ref]$rcvEP)  
                    $udpRcv.Close()
                    $udpRcv.Dispose()
                }
                catch
                {
                    $udpRcv.Close()
                    $udpRcv.Dispose()
                    continue
                }             
            }
            else
            {
                if($Protocol -eq "LLMNR")
                {
                    #Create UDP socket
                    $port = 5355
                    $ipEP = new-object System.Net.IPEndPoint([System.Net.IPAddress]::parse("224.0.0.252"),$port)
                    $udpconn = new-Object System.Net.Sockets.UdpClient
                }
                elseif($Protocol -eq "mDNS")
                {
                    #Create UDP socket
                    $port = 5353
                    $ipEP = new-object System.Net.IPEndPoint([System.Net.IPAddress]::parse("224.0.0.251"),$port)
                    $udpconn = new-Object System.Net.Sockets.UdpClient $port              
                }

                $rcvEP = new-object System.Net.IPEndPoint([System.Net.IPAddress]::Any, $port)
        
                $fullpacketbytes = GenerateQueryBytes $SearchHost $Protocol
                [byte[]] $sendbytes = $fullpacketbytes.split(",")

                $bytesSent = $udpconn.Send($sendbytes,$sendbytes.length,$ipEP)
                $udpconn.Client.ReceiveTimeout = 1000
            
                #Try to receive response, if there is no response move on to next host
                try
                {
                    $rcvbytes = $udpconn.Receive([ref]$rcvEP)  
                    $udpconn.Close()
                    $udpconn.Dispose()
                }
                catch
                {
                    $udpconn.Close()
                    $udpconn.Dispose()
                    continue
                }
            }                       

            $srcIP = $rcvEP.Address.ToString()
            $hostname = ResponseBytesToHostname $rcvbytes $Protocol
            
            If($ConsoleOutput)
            {
                Write-Output "[*] ResponderGuard received an $Protocol response from the host at $srcIP for the hostname $hostname!"
            }
            #Writing Windows Event log if enabled
            If ($LoggingDisabled -eq $false)
            {
                Write-EventLog -LogName Application -Source "ResponderGuard" -EntryType Information -EventID 8415 -Message "An $Protocol spoofer was discovered at $srcIP."
                If($ConsoleOutput)
                {
                    Write-Output "[*] An event was written to the Windows Event log."
                }
            }
    
            #Submitting a honey token user credential to the listening Responder if enabled
            If ($HoneyTokenSeed)
            {
                $ResponderShare = "\\" + $srcIP + "\c$"
                If($ConsoleOutput)
                {
                    Write-Output "[*] Submitting Honey Token Creds $Domain\$Username : $Password to $ResponderShare!"
                }
                $sharecmd = "net use r: $ResponderShare /User:$Domain\$Username $Password 2>&1"
                $output = Invoke-Expression -Command $sharecmd -ErrorAction SilentlyContinue
            }         
        }
        Start-Sleep -s ((10..20) | Get-Random -Count 1)
    }
}

#Get-IPV4NetworkStartIP credit goes to https://blog.tyang.org/2011/05/01/powershell-functions-get-ipv4-network-start-and-end-address/
Function Get-IPV4NetworkStartIP ($strNetwork)
{
    $StrNetworkAddress = ($strNetwork.split("/"))[0]
    $NetworkIP = ([System.Net.IPAddress]$StrNetworkAddress).GetAddressBytes()
    [Array]::Reverse($NetworkIP)
    $NetworkIP = ([System.Net.IPAddress]($NetworkIP -join ".")).Address
    $StartIP = $NetworkIP +1
    #Convert To Double
    If (($StartIP.Gettype()).Name -ine "double")
    {
        $StartIP = [Convert]::ToDouble($StartIP)
    }
    $StartIP = [System.Net.IPAddress]$StartIP
    Return $StartIP
}

#Get-IPV4NetworkEndIP credit goes to https://blog.tyang.org/2011/05/01/powershell-functions-get-ipv4-network-start-and-end-address/
Function Get-IPV4NetworkEndIP ($strNetwork)
{
    $StrNetworkAddress = ($strNetwork.split("/"))[0]
    [int]$NetworkLength = ($strNetwork.split("/"))[1]
    $IPLength = 32-$NetworkLength
    $NumberOfIPs = ([System.Math]::Pow(2, $IPLength)) -1
    $NetworkIP = ([System.Net.IPAddress]$StrNetworkAddress).GetAddressBytes()
    [Array]::Reverse($NetworkIP)
    $NetworkIP = ([System.Net.IPAddress]($NetworkIP -join ".")).Address
    $EndIP = $NetworkIP + $NumberOfIPs
    If (($EndIP.Gettype()).Name -ine "double")
    {
        $EndIP = [Convert]::ToDouble($EndIP)
    }
    $EndIP = [System.Net.IPAddress]$EndIP
    Return $EndIP
}

#credit for New-IPRange function goes to https://ficility.net/tag/powershell-convert-cidr/
function New-IPRange ($start, $end) 
{
    # created by Dr. Tobias Weltner, MVP PowerShell
    $ip1 = ([System.Net.IPAddress]$start).GetAddressBytes()
    [Array]::Reverse($ip1)
    $ip1 = ([System.Net.IPAddress]($ip1 -join '.')).Address
    $ip2 = ([System.Net.IPAddress]$end).GetAddressBytes()
    [Array]::Reverse($ip2)
    $ip2 = ([System.Net.IPAddress]($ip2 -join '.')).Address
    for ($x=$ip1; $x -le $ip2; $x++) 
    {
        $ip = ([System.Net.IPAddress]$x).GetAddressBytes()
        [Array]::Reverse($ip)
        $ip -join '.'
    }
}

function HostNameToNBNSByteArray($strHostname)
{
    $LabelArray = [char[]]$strHostName.toUpper()
    $LabelBytes = ""
    foreach ($letter in $LabelArray)
    {
        switch($letter)
        {
            '0' { $LabelBytes = $LabelBytes + "0x44,0x41,"; break }
            '1' { $LabelBytes = $LabelBytes + "0x44,0x42,"; break }
            '2' { $LabelBytes = $LabelBytes + "0x44,0x43,"; break }
            '3' { $LabelBytes = $LabelBytes + "0x44,0x44,"; break }
            '4' { $LabelBytes = $LabelBytes + "0x44,0x45,"; break }
            '5' { $LabelBytes = $LabelBytes + "0x44,0x46,"; break }
            '6' { $LabelBytes = $LabelBytes + "0x44,0x47,"; break }
            '7' { $LabelBytes = $LabelBytes + "0x44,0x48,"; break }
            '8' { $LabelBytes = $LabelBytes + "0x44,0x49,"; break }
            '9' { $LabelBytes = $LabelBytes + "0x44,0x4A,"; break }
            'A' { $LabelBytes = $LabelBytes + "0x45,0x42,"; break }
            'B' { $LabelBytes = $LabelBytes + "0x45,0x43,"; break }
            'C' { $LabelBytes = $LabelBytes + "0x45,0x44,"; break }
            'D' { $LabelBytes = $LabelBytes + "0x45,0x45,"; break }
            'E' { $LabelBytes = $LabelBytes + "0x45,0x46,"; break }
            'F' { $LabelBytes = $LabelBytes + "0x45,0x47,"; break }
            'G' { $LabelBytes = $LabelBytes + "0x45,0x48,"; break }
            'H' { $LabelBytes = $LabelBytes + "0x45,0x49,"; break }
            'I' { $LabelBytes = $LabelBytes + "0x45,0x4A,"; break }
            'J' { $LabelBytes = $LabelBytes + "0x45,0x4B,"; break }
            'K' { $LabelBytes = $LabelBytes + "0x45,0x4C,"; break }
            'L' { $LabelBytes = $LabelBytes + "0x45,0x4D,"; break }
            'M' { $LabelBytes = $LabelBytes + "0x45,0x4E,"; break }
            'N' { $LabelBytes = $LabelBytes + "0x45,0x4F,"; break }
            'O' { $LabelBytes = $LabelBytes + "0x45,0x50,"; break }
            'P' { $LabelBytes = $LabelBytes + "0x46,0x41,"; break }
            'Q' { $LabelBytes = $LabelBytes + "0x46,0x42,"; break }
            'R' { $LabelBytes = $LabelBytes + "0x46,0x43,"; break }
            'S' { $LabelBytes = $LabelBytes + "0x46,0x44,"; break }
            'T' { $LabelBytes = $LabelBytes + "0x46,0x45,"; break }
            'U' { $LabelBytes = $LabelBytes + "0x46,0x46,"; break }
            'V' { $LabelBytes = $LabelBytes + "0x46,0x47,"; break }
            'W' { $LabelBytes = $LabelBytes + "0x46,0x48,"; break }
            'X' { $LabelBytes = $LabelBytes + "0x46,0x49,"; break }
            'Y' { $LabelBytes = $LabelBytes + "0x46,0x4A,"; break }
            'Z' { $LabelBytes = $LabelBytes + "0x46,0x4B,"; break }
            '.' { $LabelBytes = $LabelBytes + "0x43,0x4F,"; break }
        }
    }
    
    Return $LabelBytes
}
    
function ResponseBytesToHostname($packetBytes, $Protocol)
{
    #$TxID = $packetBytes[0..1]
    #$Control = $packetBytes[2..3]
    #$QDCount = $packetBytes[4..5]
    $ANCount = [int]$packetBytes[7]
    #$NSCount = $packetBytes[8..9]
    #$ARCount = $packetBytes[10..11]
    #Write-Output "Packet Bytes Value $packetBytes"
    
    if($ANCount -ne 1)
    {
        Write-Output "[*] Something is amiss. We should only have one answer. Answer Count: $ANCount"
    }
    
    $Labels = [System.Collections.ArrayList]@()    
        
    $Index = 12
    $LabelLength = [int]$packetBytes[$Index]
    $Index++
    
    while ($LabelLength -ne 0)
    {
        $LabelBytes = @()
        $LabelBytes = $packetBytes[($Index)..($Index+($LabelLength-1))]
        $LabelString = ""
        
        if($Protocol -eq "NBNS")
        {
            for ($i = 0; $i -lt 31; $i = $i+2)
            {
                $pair = [System.String]::Format('{0:X}', [int]$LabelBytes[$i]) + [System.String]::Format('{0:X}', [int]$LabelBytes[$i+1])
                
                switch($pair)
                {
                    '4441' { $LabelString = $LabelString + "0"; break }
                    '4442' { $LabelString = $LabelString + "1"; break }
                    '4443' { $LabelString = $LabelString + "2"; break }
                    '4444' { $LabelString = $LabelString + "3"; break }
                    '4445' { $LabelString = $LabelString + "4"; break }
                    '4446' { $LabelString = $LabelString + "5"; break }
                    '4447' { $LabelString = $LabelString + "6"; break }
                    '4448' { $LabelString = $LabelString + "7"; break }
                    '4449' { $LabelString = $LabelString + "8"; break }
                    '444A' { $LabelString = $LabelString + "9"; break }
                    '4542' { $LabelString = $LabelString + "A"; break }
                    '4543' { $LabelString = $LabelString + "B"; break }
                    '4544' { $LabelString = $LabelString + "C"; break }
                    '4545' { $LabelString = $LabelString + "D"; break }
                    '4546' { $LabelString = $LabelString + "E"; break }
                    '4547' { $LabelString = $LabelString + "F"; break }
                    '4548' { $LabelString = $LabelString + "G"; break }
                    '4549' { $LabelString = $LabelString + "H"; break }
                    '454A' { $LabelString = $LabelString + "I"; break }
                    '454B' { $LabelString = $LabelString + "J"; break }
                    '454C' { $LabelString = $LabelString + "K"; break }
                    '454D' { $LabelString = $LabelString + "L"; break }
                    '454E' { $LabelString = $LabelString + "M"; break }
                    '454F' { $LabelString = $LabelString + "N"; break }
                    '4550' { $LabelString = $LabelString + "O"; break }
                    '4641' { $LabelString = $LabelString + "P"; break }
                    '4642' { $LabelString = $LabelString + "Q"; break }
                    '4643' { $LabelString = $LabelString + "R"; break }
                    '4644' { $LabelString = $LabelString + "S"; break }
                    '4645' { $LabelString = $LabelString + "T"; break }
                    '4646' { $LabelString = $LabelString + "U"; break }
                    '4647' { $LabelString = $LabelString + "V"; break }
                    '4648' { $LabelString = $LabelString + "W"; break }
                    '4649' { $LabelString = $LabelString + "X"; break }
                    '464A' { $LabelString = $LabelString + "Y"; break }
                    '464B' { $LabelString = $LabelString + "Z"; break }
                    '4341' { continue } # If we hit a padding byte, break out of the loop
                }               
            }
            
            $IndexOut = $Labels.Add($LabelString)
        }
        else
        {
            foreach($Char in $LabelBytes)
            {
                $LabelString = $LabelString + [char]$Char
            }
            $IndexOut = $Labels.Add($LabelString)
        }        

        $Index = $Index + $LabelLength
        $LabelLength = [int]$packetBytes[$Index]
        $Index++
    }

    $HostName = ""
    
    foreach($Label in $Labels)
    {
        $HostName = $HostName + $Label + '.'
    }
    
    $HostName = $HostName.trimend('.')

    Return $HostName
}

function GenerateQueryBytes($SearchHost, $Protocol)
{
    $TxID = ((0..255) | Get-Random -Count 1).ToString() + ',' + ((0..255) | Get-Random -Count 1).ToString() + ','
       
    if($Protocol -eq "NBNS")
    {
        $Control = '0x01,0x10,'
    }
    else
    {
        $Control = '0x00,0x00,'
    }
       
    $QDCount = '0x00,0x01,'
    $ANCount = '0x00,0x00,'
    $NSCount = '0x00,0x00,'
    $ARCount = '0x00,0x00,'
       
    $PayloadHeader = $TxID+$Control+$QDCount+$ANCount+$NSCount+$ARCount
       
    if ($Protocol -eq "NBNS")
    {
        $LabelLength = '0x20,'
        $LabelBytes = HostNameToNBNSByteArray($SearchHost)
       
        $NameLength = $SearchHost.length * 2
    
        #Pad Out the Constructed Label
        $SpaceCount = ((32 - $NameLength) / 2) - 1
        $Padding = ""
    
        for ($i = 0; $i -lt $SpaceCount; $i++)
        {
            $Padding = $Padding + '0x43,0x41,'
        }
    
        $Padding = $Padding + '0x41,0x41,' 
            
        $LabelBytes = $LabelLength+$LabelBytes+$Padding           
    }
    else
    {
        $Padding = ""
        $LabelBytes = ""
        $Labels = $SearchHost.Split(".")
        foreach($Label in $Labels)
        {
            $LabelBytes = $LabelBytes + $Label.length.ToString() + ','
                
            for ($i=0; $i -lt $Label.length; $i++)
            {
                $LabelBytes = $LabelBytes + ([Int]$Label[$i]).ToString() + ','
            }
                
        }       
    }
                
    $RootLabel = '0x00,'
       
    if($Protocol -eq "NBNS")
    {
        $QuestionType = '0x00,0x20,'
        $QuestionClass = '0x00,0x01'                   
    }
    elseif($Protocol -eq "LLMNR")
    {
        $QuestionType = '0x00,0x01,'
        $QuestionClass = '0x00,0x01'       
    }
    else
    {
        $QuestionType = '0x00,0x01,'
        $QuestionClass = '0x80,0x01'            
    }
    
    $PayloadTrailer = $RootLabel+$QuestionType+$QuestionClass
       
    Return $PayloadHeader+$LabelBytes+$PayloadTrailer
}
