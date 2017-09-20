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
    public partial class ResponderGuardPage : Page
    {
        private Task RSTask;
        private string loggingArg;
        private string honeySeedArg;
        private static string stopResp = "Stop ResponderGuard";
        private static string startResp = "Start ResponderGuard";
        private static string loggingArgConst = " -LoggingEnabled ";
        private static string honeySeedArgConst = " -HoneySeedToken ";
        private static string responderGuardPath = "";
        public string IsRunning
        {
            get
            {
                if (taskExists())
                {
                    return stopResp;
                }
                else
                {
                    return startResp;
                }
            }
        }

        private string cidrFile;
        public string CidrFile
        {
            get;
            private set;
        }

        public ResponderGuardPage()
        {

            responderGuardPath = Directory.GetCurrentDirectory() + @"\scripts\ResponderGuard.ps1";
            loggingArg = "";
            honeySeedArg = "";
            RSTask = null;
            CidrFile = "";

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
            foreach (Task tsk in TaskService.Instance.AllTasks)
            {
                if (tsk.Name.Contains(Properties.Settings.Default.ResponderGuardTask))
                {
                    RSTask = tsk;
                    return true;
                }
            }
            RSTask = null;
            return false;
        }

        private void CheckBox_Checked(object sender, RoutedEventArgs e)
        {
            loggingArg = loggingArgConst;
        }

        private void CheckBox_Unchecked(object sender, RoutedEventArgs e)
        {
            loggingArg = "";
        }

        private void CheckBox_Unchecked_1(object sender, RoutedEventArgs e)
        {
            honeySeedArg = "";
        }

        private void CheckBox_Checked_1(object sender, RoutedEventArgs e)
        {
            honeySeedArg = honeySeedArgConst;
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            TaskService ts = new TaskService();

            if (taskExists())
            {
                try
                {
                    RSTask.Stop();
                    ts.RootFolder.DeleteTask(Properties.Settings.Default.ResponderGuardTask);
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
                    string taskString = " -Exec bypass -command \"& { . "  +responderGuardPath + "; Invoke-ResponderGuard -CidrList " + CidrFile + loggingArg + honeySeedArg + " } \"";
                    TaskDefinition td = ts.NewTask();
                    td.RegistrationInfo.Description = "ResponderGuard Task";

                    // Create a trigger that will fire the task at this time every other day
                    var dt = new TimeTrigger();
 
                    dt.Repetition.Interval = TimeSpan.FromMinutes(1);
   
                    td.Triggers.Add(dt);
                    td.Settings.MultipleInstances = TaskInstancesPolicy.IgnoreNew;
                    td.Settings.Hidden = false;
                    td.Actions.Add(new ExecAction("Powershell.exe", taskString, @"C:\"));

                    ts.RootFolder.RegisterTaskDefinition(Properties.Settings.Default.ResponderGuardTask, td);
                    taskExists();
                    RSTask.Run();
                    reInit();
                }
                catch
                {
                    MessageBox.Show("Error creating task");
                    return;
                }
            }
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            OpenFileDialog openFileDialog1 = new OpenFileDialog();

            try
            {
                openFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();
                openFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
                openFileDialog1.FilterIndex = 2;
                openFileDialog1.RestoreDirectory = true;

                if (openFileDialog1.ShowDialog() == true)
                {
                    this.CidrFile = openFileDialog1.FileName;
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
