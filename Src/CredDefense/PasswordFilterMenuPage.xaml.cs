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

namespace CredDefense
{
    /// <summary>
    /// Interaction logic for PasswordFilterMenuPage.xaml
    /// </summary>
    public partial class PasswordFilterMenuPage : Page
    {
        public PasswordFilterMenuPage()
        {
            InitializeComponent();

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

            if (selectedModule.Contains("Install"))
            {
                PasswordFilterInstallPage passwordFilterInstallPage = new PasswordFilterInstallPage();
              
                this.NavigationService.Navigate(passwordFilterInstallPage);
            }
            else if (selectedModule.Contains("Update"))
            {
                PasswordFilterUpdatePage passwordFilterUpdatePage = new PasswordFilterUpdatePage();

                this.NavigationService.Navigate(passwordFilterUpdatePage);
            }

        }

        private void moduleListBox_MouseDoubleClick(object sender, MouseButtonEventArgs e)
        {
            Button_Click(sender, null);
        }
    }

}
