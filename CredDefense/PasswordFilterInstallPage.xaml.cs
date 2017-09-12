using Microsoft.Win32;
using System;
using System.Collections;
using System.Collections.Generic;
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

            reInit();
        }

        private void reInit()
        {
            InitializeComponent();
            this.DataContext = this;
            this.pfHelper = new PasswordFilterHelper();
            this.pfHelper.updateDomainControllers();
            this.configuredDomainControllers = pfHelper.ConfiguredDomainControllersList;
            this.unconfiguredDomainControllers = pfHelper.UnconfiguredDomainControllersList;
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
            string ipAddress = "";
            bool is64bit = false;
            string sysPath = "";
            foreach (DomainController dc in pfHelper.AllDomainControllers)
            {
                if (dc.Name == selectedModule)
                {
                    ipAddress = dc.IPAddress;

                    is64bit = pfHelper.checkArch(ipAddress).Contains("64");

                    sysPath = pfHelper.getSysPath(ipAddress);
                }
            }

            pfHelper.updateRegValue(ipAddress, false);
            string sysDrive = sysPath.Split(':')[0];
            string sysFolder = sysPath.Split(':')[1].Split('\\')[1] + @"\system32";
            string remoteRootFolder = @"\\" + ipAddress + @"\" + sysDrive + @"$\";
            string remoteEpfFolder = remoteRootFolder + @"epf";
            string remoteSysFolder = remoteRootFolder + sysFolder + @"\EasyPasswordFilter.dll";

            try
            {
                foreach (string dirPath in Directory.GetDirectories(Properties.Settings.Default.EpfFilesPath, "*", SearchOption.AllDirectories))
                {
                    Directory.CreateDirectory(dirPath.Replace(Properties.Settings.Default.EpfFilesPath, remoteEpfFolder));
                }

                foreach (string newPath in Directory.GetFiles(Properties.Settings.Default.EpfFilesPath, "*.*", SearchOption.AllDirectories))
                {
                    File.Copy(newPath, newPath.Replace(Properties.Settings.Default.EpfFilesPath, remoteEpfFolder), true);
                }
            }
            catch
            {
                MessageBox.Show("Error copying password list");
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

            MessageBox.Show("Updated!");

            reInit();
        }

        //Uninstall button
        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            string selectedModule = this.uninstallDomainControllers.SelectedValue.ToString().Split(':')[0].Trim();
            string ipAddress = "";

            foreach (DomainController dc in pfHelper.AllDomainControllers)
            {
                if (dc.Name == selectedModule)
                {
                    ipAddress = dc.IPAddress;
                }
            }

            pfHelper.updateRegValue(ipAddress, true);

            reInit();
        }
    }
}
