using Microsoft.Win32.TaskScheduler;
using System.IO;
using System.Windows;
using System.Windows.Controls;
//using DSInternals.PowerShell.Commands;
using Microsoft.Win32;
using System;
//using DSInternals.Common.Data;

namespace CredDefense
{
    /// <summary>
    /// Interaction logic for PasswordFilterInstallPage.xaml
    /// </summary>
    public partial class CredDefenseEventParserPage : Page
    {
        private Task schTask;
        private static string stopStr = "Stop EventParser";
        private static string startStr = "Start EventParser";
        private static string targetScriptPath = "";
        private static string taskName = Properties.Settings.Default.CDEventParseTask;
        private static string taskDesc = "CredDefense Event Parser Task";
        private static string funcName = "Invoke-CredDefenseEventParser";
        OpenFileDialog openFileDialog1;

        public string IsRunning
        {
            get
            {
                if (taskExists())
                {
                    return stopStr;
                }
                else
                {
                    return startStr;
                }
            }
        }

        private string evtxFile;
        public string EvtxFile
        {
            get;
            private set;
        }

        public CredDefenseEventParserPage()
        {
            openFileDialog1 = new OpenFileDialog();
            openFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();
            targetScriptPath = Directory.GetCurrentDirectory() + @"\scripts\CredDefenseEventParser.ps1";
            EvtxFile = "";
            schTask = null;

            InitializeComponent();
            this.DataContext = this;

            if (!reInit())
            {
                return;
            }
        }

        private bool reInit()
        {

                FrameworkElement dataContext = (FrameworkElement)this.DataContext;
                this.DataContext = null;
                this.DataContext = dataContext;
                return true;
        }

        private bool taskExists()
        {
            return getTask();
        }

        private bool getTask()
        {
            foreach (Task tsk in TaskService.Instance.AllTasks)
            {
                if (tsk.Name.Contains(taskName))
                {
                    schTask = tsk;
                    return true;
                }
            }

            return false;
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            TaskService ts = new TaskService();

            if (taskExists())
            {
                try
                {
                    getTask();
                    schTask.Stop();
                    ts.RootFolder.DeleteTask(taskName);
                    reInit();
                }
                catch
                {
                    MessageBox.Show("Error stopping or deleting task");
                    return;
                }
            }
            else
            {
                try
                {
                    string args = "";
                    if(EvtxFile != "")
                    {
                        args += " -EventLog " + EvtxFile;
                    }

                    string taskString = " -Exec bypass -command \"& { . "  + targetScriptPath + "; " + funcName  + args + " } \"";

                    TaskDefinition td = ts.NewTask();

                    var dt = new TimeTrigger();
 
                    dt.Repetition.Interval = TimeSpan.FromMinutes(1);
   
                    td.Triggers.Add(dt);
                    td.Settings.MultipleInstances = TaskInstancesPolicy.IgnoreNew;
                    td.Settings.Hidden = false;
                    td.Actions.Add(new ExecAction("Powershell.exe", taskString, @"C:\"));
                    td.RegistrationInfo.Description = taskDesc;
                    ts.RootFolder.RegisterTaskDefinition(taskName, td);

                    reInit();
                }
                catch (Exception exc)
                {
                    MessageBox.Show("Error creating task : "  + exc.ToString());

                    return;
                }
            }
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            try
            {
                
                openFileDialog1.Filter = "evtx files (*.evtx)|*.evtx|txt files (*.txt)|*.txt|All files (*.*)|*.*";
                openFileDialog1.FilterIndex = 0;
                openFileDialog1.RestoreDirectory = true;

                if (openFileDialog1.ShowDialog() == true)
                {
                    EvtxFile = openFileDialog1.FileName;
                    reInit();
                }
            }
            catch
            {
                MessageBox.Show("FileDialog Error");
                return;
            }
        }
    }
}
