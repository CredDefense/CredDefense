using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
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
    /// Interaction logic for PasswordFilterUpdatePage.xaml
    /// </summary>
    public partial class PasswordFilterUpdatePage : Page
    {
        public PasswordFilterUpdatePage()
        {
            InitializeComponent();
            this.DataContext = this;
            reInit();

        }

        private void reInit()
        {
            this.pfHelper = new PasswordFilterHelper();
            this.pfHelper.updateDomainControllers();
            this.ConfiguredDomainControllersList = pfHelper.ConfiguredDomainControllersList;
            FrameworkElement dataContext = (FrameworkElement)this.DataContext;
            this.DataContext = null;
            this.DataContext = dataContext;
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

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            Process.Start(System.IO.Path.Combine(Environment.CurrentDirectory, Properties.Settings.Default.EpfFilesPath, "epfdict.txt"));
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            foreach (DomainController dc in pfHelper.AllDomainControllers)
            {
                foreach (string dcActive in ConfiguredDomainControllersList)
                {
                    if(dcActive == dc.Name)
                    {
                        string dcIpAddress = dc.IPAddress;
                        try
                        {
                            string sysPath = pfHelper.getSysPath(dcIpAddress);
                            string sysDrive = sysPath.Split(':')[0];
                            string remoteRootFolder = @"\\" + dcIpAddress + @"\" + sysDrive + @"$\";
                            string remoteEpfFolder = remoteRootFolder + @"epf";

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
                        catch
                        {
                            MessageBox.Show("Error copying password files to " + dc.Name);
                        }
                    }
                }
            }

            MessageBox.Show("Done copying password files!");
        }
    }
}
