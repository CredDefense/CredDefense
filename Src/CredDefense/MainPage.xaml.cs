using System;
using System.Collections.Generic;
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
//using DSInternals.PowerShell.Commands;
using System.Management.Automation;
using System.Net;

namespace CredDefense
{
    /// <summary>
    /// Interaction logic for MainPage.xaml
    /// </summary>
    public partial class MainPage : Page
    {
        public MainPage()
        {
            InitializeComponent();
           // GetADReplAccountCommand getADReplAccount = new GetADReplAccountCommand();
           // getADReplAccount.All = true;
           // NetworkCredential cred = CredentialCache.DefaultNetworkCredentials;
            //getADReplAccount.Credential = new PSCredential(cred.UserName, cred.SecurePassword);
            //getADReplAccount.Domain = cred.Domain;
           // getADReplAccount.Invoke();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string selectedModule = "";

            try
            {
                selectedModule = this.moduleListBox.SelectedValue.ToString();
            }
            catch
            {
                MessageBox.Show("Invalid Selection");
                return;
            }

            if (selectedModule.Contains("Event Monitoring"))
            {
                EventMonitoringPage eventMonitoringPage = new EventMonitoringPage();
                this.NavigationService.Navigate(eventMonitoringPage);
            }
            else if (selectedModule.Contains("ResponderGuard"))
            {
                ResponderGuardPage responderGuardPage = new ResponderGuardPage();
                this.NavigationService.Navigate(responderGuardPage);
            }
            else if (selectedModule.Contains("Password Auditing"))
            {
                PasswordAuditPage passwordAuditPage = new PasswordAuditPage();
                this.NavigationService.Navigate(passwordAuditPage);
            }
            else if (selectedModule.Contains("Password Filtering"))
            {
                PasswordFilterMenuPage passwordFilterMenuPage = new PasswordFilterMenuPage();
                this.NavigationService.Navigate(passwordFilterMenuPage);
            }
        }

        private void moduleListBox_MouseDoubleClick(object sender, MouseButtonEventArgs e)
        {
            Button_Click(sender, null);
        }
    }
}
