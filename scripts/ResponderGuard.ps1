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
    
  .PARAMETER LoggingEnabled

    If the LoggingEnabled switch is set a Windows Event log will be created for each potential NBNS spoofer found. The default EventID is 54321.

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
 [switch]
 $LoggingEnabled = $false
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


     $count = $totaladdresses.count
     $currentnumber = 1
     foreach($ip in $totaladdresses)
     {
          $percentcomplete = ($currentnumber / $count) * 100
     Write-Progress -Activity "ResponderGuard Scan in Progress - Current IP: $ip" -Status "Scanned $currentnumber of $count hosts" -PercentComplete $percentcomplete
     $currentnumber++
     #Create UDP socket
     $port = 137
     $ipEP = new-object System.Net.IPEndPoint ([system.net.IPAddress]::parse($ip),$port)
     $udpconn = new-Object System.Net.Sockets.UdpClient

     #Generate random 10 character hostname
     $hostname = -join ((65..90) | Get-Random -Count 10 | % {[char]$_})
     #Convert hostname to hex bytes used in NBNS packet
     $hostarray = [char[]]$hostname
     $hostnamebytes = ""
     foreach ($letter in $hostarray)
     {
        if ($letter -eq 'A')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x42,"
        }
        elseif ($letter -eq 'B')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x43,"
        }
        elseif ($letter -eq 'C')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x44,"
        }
        elseif ($letter -eq 'D')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x45,"
        }
        elseif ($letter -eq 'E')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x46,"
        }
        elseif ($letter -eq 'F')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x47,"
        }
        elseif ($letter -eq 'G')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x48,"
        }
        elseif ($letter -eq 'H')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x49,"
        }
        elseif ($letter -eq 'I')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x4A,"
        }
        elseif ($letter -eq 'J')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x4B,"
        }
        elseif ($letter -eq 'K')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x4C,"
        }
        elseif ($letter -eq 'L')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x4D,"
        }
        elseif ($letter -eq 'M')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x4E,"
        }
        elseif ($letter -eq 'N')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x4F,"
        }
        elseif ($letter -eq 'O')
        {
        $hostnamebytes = $hostnamebytes + "0x45,0x50,"
        }
        elseif ($letter -eq 'P')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x41,"
        }
        elseif ($letter -eq 'Q')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x42,"
        }
        elseif ($letter -eq 'R')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x43,"
        }
        elseif ($letter -eq 'S')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x44,"
        }
        elseif ($letter -eq 'T')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x45,"
        }
        elseif ($letter -eq 'U')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x46,"
        }
        elseif ($letter -eq 'V')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x47,"
        }
        elseif ($letter -eq 'W')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x48,"
        }
        elseif ($letter -eq 'X')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x49,"
        }
        elseif ($letter -eq 'Y')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x4A,"
        }
        elseif ($letter -eq 'Z')
        {
        $hostnamebytes = $hostnamebytes + "0x46,0x4B,"
        }
     }


     #Building the UDP NBNS packet
     $NbnsPacketPre = '0x5f,0xbd,01,0x10,00,01,00,00,00,00,00,00,0x20,'
     $NbnsPacketPost = '0x43,0x41,0x43,0x41,0x43,0x41,0x43,0x41,0x43,0x41,0x41,0x41,00,00,0x20,00,01'
     $fullpacketbytes = $NbnsPacketPre+$hostnamebytes+$NbnsPacketPost
     [byte[]] $sendbytes = $fullpacketbytes.split(",")

     #[byte[]] $sendbytes = (0x5f,0xbd,01,0x10,00,01,00,00,00,00,00,00,0x20,0x46,0x40,0x46,0x41,0x46,0x42,0x46,0x43,0x46,0x44,0x46,0x45,0x46,0x46,0x45,0x42,0x45,0x4c,0x43,0x41,0x43,0x41,0x43,0x41,0x43,0x41,0x43,0x41,0x43,0x41,0x41,0x41,00,00,0x20,00,01)


     $udpconn.client.receivetimeout=500
     $bytesSent = $udpconn.Send($sendbytes,50,$ipEP)
     #Try to receive response, if there is no response move on to next host
     try{
        $rcvbytes = $udpconn.Receive([ref]$ipEP) 
     }
     catch
     {
        continue
     }

     #Extracting the hostname from the bytes
     $stringbytes = [BitConverter]::ToString($rcvbytes)
     $bytearray = @()
     $bytearray = $stringbytes -split "-"
     #Starting at byte 13 for the name
     $a = 13
     $b = 14
     $nbnamearray = @()
     $spoof
     
     for ($i=0; $i -lt 31; $i++)
     {
     $nbnamearray += $bytearray[$a] + $bytearray[$b]
     $a++
     $a++
     $b++
     $b++
     }
     #converting the hex value returned in UDP packet back to an ascii hostname
     $nbname = ""
     foreach ($pair in $nbnamearray)
     {
        if ($pair -eq '4542')
        {
        $nbname = $nbname + "A"
        }
        elseif ($pair -eq '4543')
        {
        $nbname = $nbname + "B"
        }
        elseif ($pair -eq '4544')
        {
        $nbname = $nbname + "C"
        }
        elseif ($pair -eq '4545')
        {
        $nbname = $nbname + "D"
        }
        elseif ($pair -eq '4546')
        {
        $nbname = $nbname + "E"
        }
        elseif ($pair -eq '4547')
        {
        $nbname = $nbname + "F"
        }
        elseif ($pair -eq '4548')
        {
        $nbname = $nbname + "G"
        }
        elseif ($pair -eq '4549')
        {
        $nbname = $nbname + "H"
        }
        elseif ($pair -eq '454A')
        {
        $nbname = $nbname + "I"
        }
        elseif ($pair -eq '454B')
        {
        $nbname = $nbname + "J"
        }
        elseif ($pair -eq '454C')
        {
        $nbname = $nbname + "K"
        }
        elseif ($pair -eq '454D')
        {
        $nbname = $nbname + "L"
        }
        elseif ($pair -eq '454E')
        {
        $nbname = $nbname + "M"
        }
        elseif ($pair -eq '454F')
        {
        $nbname = $nbname + "N"
        }
        elseif ($pair -eq '4550')
        {
        $nbname = $nbname + "O"
        }
        elseif ($pair -eq '4641')
        {
        $nbname = $nbname + "P"
        }
        elseif ($pair -eq '4642')
        {
        $nbname = $nbname + "Q"
        }
        elseif ($pair -eq '4643')
        {
        $nbname = $nbname + "R"
        }
        elseif ($pair -eq '4644')
        {
        $nbname = $nbname + "S"
        }
        elseif ($pair -eq '4645')
        {
        $nbname = $nbname + "T"
        }
        elseif ($pair -eq '4646')
        {
        $nbname = $nbname + "U"
        }
        elseif ($pair -eq '4647')
        {
        $nbname = $nbname + "V"
        }
        elseif ($pair -eq '4648')
        {
        $nbname = $nbname + "W"
        }
        elseif ($pair -eq '4649')
        {
        $nbname = $nbname + "X"
        }
        elseif ($pair -eq '464A')
        {
        $nbname = $nbname + "Y"
        }
        elseif ($pair -eq '464B')
        {
        $nbname = $nbname + "Z"
        }
     }
 
     Write-Output "[*] ResponderGuard received an NBNS response from the host at $ip for the hostname $nbname!"
     If ($LoggingEnabled)
     {
        Write-EventLog -LogName Application -Source "ResponderGuard" -EntryType Information -EventID 54321 -Message "An NBNS spoofer was discovered at $ip."
        Write-Output "An event was written to the event log."
     }

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
function New-IPRange ($start, $end) {
 # created by Dr. Tobias Weltner, MVP PowerShell
 $ip1 = ([System.Net.IPAddress]$start).GetAddressBytes()
 [Array]::Reverse($ip1)
 $ip1 = ([System.Net.IPAddress]($ip1 -join '.')).Address
 $ip2 = ([System.Net.IPAddress]$end).GetAddressBytes()
 [Array]::Reverse($ip2)
 $ip2 = ([System.Net.IPAddress]($ip2 -join '.')).Address
 for ($x=$ip1; $x -le $ip2; $x++) {
 $ip = ([System.Net.IPAddress]$x).GetAddressBytes()
 [Array]::Reverse($ip)
 $ip -join '.'
 }
}