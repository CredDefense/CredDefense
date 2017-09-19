function Invoke-CredDefenseEventParser{
    
    Param(

    [Parameter(Position = 0, Mandatory = $false)]
    [string]
    $EventLog = ""

    )

    #Start loop to ingest logs

    #If a single event log is set process it. Otherwise process the forwarded events.
    if ($EventLog -ne "")
    {
        $filter = @{
            Path = "$EventLog"
            #StartTime = (Get-Date)AddHours(-1)
            #EndTime = Get-Date
        }
    }
    else
    {
        $filter = @{
            Path = "$env:SystemRoot\System32\Winevt\Logs\ForwardedEvents.evtx"
            #StartTime = (Get-Date)AddHours(-1)
            #EndTime = Get-Date
        }
    }

    $events = Get-WinEvent -FilterHashtable $filter

    ####### Start various alert triggers #######
    ### Section for detecting Password Spraying
    Write-Output "[*] Now checking logs for password spraying activity`n"
    $failedloginevents = $events | Where-Object {$_.id -eq '4625'} 
    
    $FailedLoginIPAddresses = @()
    Foreach ($event in $failedloginevents)
    {
        $eventXml = [xml]$event.ToXml()  
        $FailedLoginIPAddresses += $eventXml.Event.EventData.Data[19].'#text'
    }
    $FailedLoginIPAddresses | group | % { $h = @{} } { $h[$_.Name] = $_.Count } { $h }


    ### Section for detecting Honey Token Usage


    ### Section for detecting Responder activity
    Write-Output "[*] Now checking logs for Responder activity`n"
    $responderevents = $events | Where-Object {$_.id -eq '8415'} | Select-Object Message -Unique
    $responderevents


    ####### Logging and Alerting ######
   
    #Write CredDefense log file if one doesn't exist
    $CDLogPath = 'C:\logs\'
    $CDLogFileName = 'cdlog.log'
    $CDLog = $CDLogPath+$CDLogFileName
    if (Test-Path $CDLog)
    {
        $loglastwrite = (Get-ChildItem $CDLog).LastWriteTime 
    }
    else
    {
        mkdir $CDLogPath
        echo $null > $CDLog
    }

    #checks CredDefense log file to see if an alert already existed

    #On screen alerting & email notification

}