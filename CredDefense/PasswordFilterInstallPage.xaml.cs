using Microsoft.Win32;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.DirectoryServices.ActiveDirectory;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

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
            this.pfHelper = new PasswordFilterHelper();
            this.pfHelper.updateDomainControllers();
            this.configuredDomainControllers = pfHelper.ConfiguredDomainControllersList;
            this.unconfiguredDomainControllers = pfHelper.UnconfiguredDomainControllersList;
        }

        private void reInit()
        {

        }

        private PasswordFilterHelper pfHelper;

        private List<String> configuredDomainControllers;
        public List<String> ConfiguredDomainControllersList
        {
            get
            {
                if (configuredDomainControllers == null)
                    configuredDomainControllers = new List<string>();
                return configuredDomainControllers;
            }
        }

        private List<String> unconfiguredDomainControllers;
        public List<String> UnconfiguredDomainControllersList
        {
            get
            {
                if (unconfiguredDomainControllers == null)
                    unconfiguredDomainControllers = new List<string>();
                return unconfiguredDomainControllers;
            }
        }

        //Install Button
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string selectedModule = this.installDomainControllers.SelectedValue.ToString().Split(':')[0].Trim();
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

            pfHelper.updateRegValue(dcIpAddress, false);
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
            string selectedModule = this.uninstallDomainControllers.SelectedValue.ToString().Split(':')[0].Trim();
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
    }
}
