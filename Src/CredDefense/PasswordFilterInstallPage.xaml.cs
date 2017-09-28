using System;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.DirectoryServices.ActiveDirectory;
using System.IO;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
//using DSInternals.PowerShell.Commands;
using DSInternals.Replication;
using System.Linq;
using DSInternals.Common;
using System.Collections.Generic;
using DSInternals.Common.Cryptography;
using DSInternals.Common.Data;
//using DSInternals.Common.Data;

namespace CredDefense
{
    /// <summary>
    /// Interaction logic for PasswordFilterInstallPage.xaml
    /// </summary>
    public partial class PasswordFilterInstallPage : Page
    {
        public PasswordFilterInstallPage()
        {
            InitializeComponent();
            this.DataContext = this;

            if (!reInit())
            {
                return;
            }
        }

        private bool reInit()
        {
            this.pfHelper = new PasswordFilterHelper();
            if (this.pfHelper.updateDomainData())
            {
                this.ConfiguredDomainControllersList = pfHelper.ConfiguredDomainControllersList;
                this.UnconfiguredDomainControllersList = pfHelper.UnconfiguredDomainControllersList;
                FrameworkElement dataContext = (FrameworkElement)this.DataContext;
                this.DataContext = null;
                this.DataContext = dataContext;
                return true;
            }
            else
            {
                return false;
            }
        }

        private PasswordFilterHelper pfHelper;

        private ObservableCollection<String> configuredDomainControllers;
        public ObservableCollection<String> ConfiguredDomainControllersList
        {
            get
            {
                if (configuredDomainControllers == null)
                    configuredDomainControllers = new ObservableCollection<string>();
                return configuredDomainControllers;
            }
            set
            {
                configuredDomainControllers = null;
                configuredDomainControllers = value;
            }
        }

        private ObservableCollection<string> unconfiguredDomainControllers;
        public ObservableCollection<string> UnconfiguredDomainControllersList
        {
            get
            {
                if (unconfiguredDomainControllers == null)
                    unconfiguredDomainControllers = new ObservableCollection<string>();
                return unconfiguredDomainControllers;
            }
            set
            {
                unconfiguredDomainControllers = null;
                unconfiguredDomainControllers = value;
            }
        }

        //Install Button
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string selectedModule = "";

            try
            {
                selectedModule = this.installDomainControllers.SelectedValue.ToString().Split(':')[0].Trim();
            }
            catch
            {
                MessageBox.Show("Invalid Selection");
                return;
            }

            string dcIpAddress = "";
            bool is64bit = false;
            string sysPath = "";
            string dcName = "";

            foreach (DomainController dc in pfHelper.AllDomainControllers)
            {
                if (dc.Name == selectedModule)
                {
                    dcName = dc.Name;

                    dcIpAddress = dc.IPAddress;

                    is64bit = pfHelper.checkArch(dcIpAddress).Contains("64");

                    sysPath = pfHelper.getSysPath(dcIpAddress);
                }
            }

            if( pfHelper.updateRegValue(dcIpAddress, false) )
            {
                reInit();
            }

            string sysDrive = sysPath.Split(':')[0];
            string sysFolder = sysPath.Split(':')[1].Split('\\')[1] + @"\system32";
            string remoteRootFolder = @"\\" + dcIpAddress + @"\" + sysDrive + @"$\";
            string remoteEpfFolder = remoteRootFolder + @"epf";
            string remoteSysFolder = remoteRootFolder + sysFolder + @"\EasyPasswordFilter.dll";

            try
            {

                if (!Directory.Exists(remoteEpfFolder))
                {
                    Directory.CreateDirectory(remoteEpfFolder);
                }

                foreach (string dirPath in Directory.GetDirectories(Properties.Settings.Default.EpfFilesPath, "*", SearchOption.AllDirectories))
                {
                    Directory.CreateDirectory(dirPath.Replace(Properties.Settings.Default.EpfFilesPath, remoteEpfFolder));
                }

                foreach (string newPath in Directory.GetFiles(Properties.Settings.Default.EpfFilesPath, "*.*", SearchOption.AllDirectories))
                {
                    File.Copy(newPath, newPath.Replace(Properties.Settings.Default.EpfFilesPath, remoteEpfFolder), true);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error copying password list");
                MessageBox.Show(ex.ToString());
            }

            if (File.Exists(remoteSysFolder))
            {
                try
                {
                    File.Delete(remoteSysFolder);
                }
                catch
                {
                    MessageBox.Show("Could not delete EasyPasswordFilter.dll, try restarting the Domain Controller");
                }
            }

            if (is64bit)
            {
                try
                {

                    File.Copy(Properties.Settings.Default.EasyPasswordFilterDllLocationx64, remoteSysFolder);
                }
                catch
                {
                    MessageBox.Show("Error deploying EasyPasswordFilter.dll...possibly already exists");
                }
            }
            else
            {
                try
                {
                    File.Copy(Properties.Settings.Default.EasyPasswordFilterDllLocationx86, remoteSysFolder);
                }
                catch
                {
                    MessageBox.Show("Error deploying EasyPasswordFilter.dll...possibly already exists");
                }
            }

            MessageBoxResult msgBoxRes = MessageBox.Show("System Updated, Restart " + dcName + "?", "Confirm DC Restart", MessageBoxButton.YesNo);

            if(msgBoxRes == MessageBoxResult.Yes)
            {
                try
                {
                    Process rstProc = new Process();
                    rstProc.EnableRaisingEvents = false;
                    rstProc.StartInfo.FileName = "cmd.exe";
                    rstProc.StartInfo.Arguments = @"/c shutdown -r -t 0 -f -m \\" + dcIpAddress;
                    rstProc.Start();
                    MessageBox.Show(dcName + " Restarted");
                }
                catch
                {
                    MessageBox.Show("Error restarting " + dcName);
                }
            }
        }

        //Uninstall button
        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            string selectedModule = "";

            try
            {
                selectedModule = this.uninstallDomainControllers.SelectedValue.ToString().Split(':')[0].Trim();
            }
            catch
            {
                MessageBox.Show("Invalid Selection");
                return;
            }

            string dcIpAddress = "";
            string dcName = "";
            bool updated = false;

            foreach (DomainController dc in pfHelper.AllDomainControllers)
            {
                if (dc.Name == selectedModule)
                {
                    dcIpAddress = dc.IPAddress;
                    dcName = dc.Name;
                }
            }

            try
            {
                updated = pfHelper.updateRegValue(dcIpAddress, true);
            }
            catch
            {

            }


            if (updated)
            {
                reInit();

                MessageBoxResult msgBoxRes = MessageBox.Show("System Updated, Restart " + dcName + "?", "Confirm DC Restart", MessageBoxButton.YesNo);

                if (msgBoxRes == MessageBoxResult.Yes)
                {
                    try
                    {
                        Process rstProc = new Process();
                        rstProc.EnableRaisingEvents = false;
                        rstProc.StartInfo.FileName = "cmd.exe";
                        rstProc.StartInfo.Arguments = @"/c shutdown -r -t 0 -f -m \\" + dcIpAddress;
                        rstProc.Start();
                        MessageBox.Show(dcName + " Restarted");
                    }
                    catch
                    {
                        MessageBox.Show("Error restarting " + dcName);
                    }
                }
            }


        }

        private void installDomainControllers_MouseDoubleClick(object sender, MouseButtonEventArgs e)
        {
            Button_Click(sender, null);
        }

        private void uninstallDomainControllers_MouseDoubleClick(object sender, MouseButtonEventArgs e)
        {
            Button_Click_1(sender, null);
        }
    }
}
