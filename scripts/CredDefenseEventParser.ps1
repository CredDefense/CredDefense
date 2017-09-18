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


    ### Section for detecting Honey Token Usage


    ### Section for detecting Responder activity


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