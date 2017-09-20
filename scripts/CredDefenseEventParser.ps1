function Invoke-CredDefenseEventParser{
    
    Param(

    [Parameter(Position = 0, Mandatory = $false)]
    [string]
    $EventLog = ""

    )

    #Start loop to ingest logs
    While($true)
    {
        $starttime = Get-Date    
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

        $allevents = @()
        #If a single event log is set process it. Otherwise process the forwarded events.
        if ($EventLog -ne "")
        {
            $filter = @{
                Path = "$EventLog"
                #StartTime = (Get-Date).AddHours(-1)
                #EndTime = Get-Date
            }
        }
        else
        {
            $filter = @{
                #Path = "$env:SystemRoot\System32\Winevt\Logs\ForwardedEvents.evtx"
                Path = "$env:SystemRoot\System32\Winevt\Logs\Application.evtx"
                StartTime = (Get-Date).AddHours(-1)
                EndTime = Get-Date
            }
        }

        #First see if there are any new events in the file. If not break.
        try 
        {
            $events = Get-WinEvent -FilterHashtable $filter -ErrorAction Stop
        }
        catch
        {
            $GetEventsError = $_.Exception.Message
            if ($GetEventsError -match "No events were found")
            {
            Write-host -nonewline "`r[*] No new events were found in the logs as of $($starttime)."
            }
            #Set to wait until a certain time after the time this round of log searching started
            $nexttime = $starttime.AddSeconds(20)
            do {
            $timenow = Get-Date
            Start-Sleep 1
            } until ($timenow -ge $nexttime)
            continue
        }

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
    
        $passwordsprayinghosts = @()
        $FailedLoginIPAddresses = $FailedLoginIPAddresses | group
    
        foreach($ip in $FailedLoginIPAddresses)
        {
            if ($ip.count -ge 10)
            {
            Write-host -ForegroundColor yellow "[***] $($ip.Name) appears to be performing a password spraying attack. A total of $($ip.count) failed login attempts were detected."
            $passwordsprayinghosts += $ip.Name
            }
        }
            Foreach ($phost in $passwordsprayinghosts)
        {
            $psprayevents = $failedloginevents | Where-Object {$_.Message -match $phost}
            $pstime = $psprayevents[0].TimeCreated
            $passwordsprayevent = $psprayevents[0]
            $pstimemod = $pstime.ToString("yyyyMMddHHmmssfffffff")
            $psuniqueid = "PasswordSprayDetection:$($passwordsprayevent.ID)-$($pstimemod)"
            $combinedevent = New-Object PSObject
            $combinedevent | Add-Member -type NoteProperty -Name 'UniqueID' -Value "$psuniqueid"
            $combinedevent | Add-Member -type NoteProperty -Name 'Message' -Value "$($psprayevents.Message)"
            $allevents += $combinedevent
        }


        ### Section for detecting Honey Token Usage


        ### Section for detecting Responder activity
        Write-Output "`n[*] Now checking logs for Responder activity`n"
        $responderevents = $events | Where-Object {$_.id -eq '8415'} | Select-Object TimeCreated,ID,Message
        if ($responderevents -ne $null)
        {
        Write-host -foregroundcolor yellow "[***] Some possible Responder activity was detected.`n"
        }
        Foreach ($revent in $responderevents)
        {
            $time = $revent.TimeCreated
            $timemod = $time.ToString("yyyyMMddHHmmssfffffff")
            $uniqueid = "ResponderDetection:$($revent.ID)-$($timemod)"
            $combinedevent = New-Object PSObject
            $combinedevent | Add-Member -type NoteProperty -Name 'UniqueID' -Value "$uniqueid"
            $combinedevent | Add-Member -type NoteProperty -Name 'Message' -Value "$($revent.Message)"
            $allevents += $combinedevent
        }

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
            if (Test-Path $CDLogPath)
            {
              #directory already exists  
            }
            else
            {
                mkdir $CDLogPath
            }
            echo $null > $CDLog
        }

        #checks CredDefense log file to see if an alert already existed
        $currentlog = Get-Content $CDLog
        $oldevents = @()
        $newevents = @()
        foreach ($eventline in $allevents)
        {
            if ($currentlog -notcontains $eventline.UniqueID)
            {
                $newevents += $eventline
            }
            elseif($currentlog -contains $eventline.UniqueID)
            {
                $oldevents += $eventline
            }
        }
    
        #On screen alerting & email notification
    
        If ($newevents.count -eq 0)
        {
        Write-Output "[*] No new events were detected in the last hour.`n"
        }
        else
        {
        Write-Output "[*] A total of $($newevents.count) new events were detected in the last hour. They are listed below:`n"
        Write-Output $newevents "`n"
        $newevents.UniqueID | sort-object -Descending | Add-Content $CDLog
        Write-Output "[*] New events have been written to $CDLog.`n"
        }
    
        Write-Output "[*] $($oldevents.count) old events from the last hour were not written to the log file." 
    #If one event log was specified only run once
    If ($EventLog -ne "")
    {
    break
    }
            #Set to wait until a certain time after the time this round of log searching started
            $nexttime = $starttime.AddSeconds(20)
            do {
            $timenow = Get-Date
            Start-Sleep 1
            } until ($timenow -ge $nexttime)
    }
}