using System;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.DirectoryServices.ActiveDirectory;
using System.IO;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
//using DSInternals.PowerShell.Commands;
//using DSInternals.Replication;
//using System.Linq;
//using DSInternals.Common;
//using System.Collections.Generic;

namespace CredDefense
{
    /// <summary>
    /// Interaction logic for PasswordAuditPage.xaml
    /// </summary>
    public partial class PasswordAuditPage : Page
    {
        private PasswordFilterHelper pfHelper;

        private ObservableCollection<String> domainsList;
        public ObservableCollection<String> DomainsList
        {
            get
            {
                if (domainsList == null)
                    domainsList = new ObservableCollection<string>();
                return domainsList;
            }
            set
            {
                domainsList = null;
                domainsList = value;
            }
        }

        public PasswordAuditPage()
        {
            InitializeComponent();
            this.DataContext = this;
            reInit();
        }

        private void reInit()
        {
            this.pfHelper = new PasswordFilterHelper();
            this.DomainsList.Clear();
            if (this.pfHelper.updateDomainData())
            {
                foreach(Domain dom in pfHelper.CurrDomains)
                {
                    this.DomainsList.Add(dom.Name);
                }
                FrameworkElement dataContext = (FrameworkElement)this.DataContext;
                this.DataContext = null;
                this.DataContext = dataContext;
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string selectedModule = "";

            try
            {
                selectedModule = this.domainsListBox.SelectedValue.ToString().Split(':')[0].Trim();
            }
            catch
            {
                MessageBox.Show("Invalid Selection");
                return;
            }

            
            PasswordAuditDCSelPage passwordAuditDCSelPage = new PasswordAuditDCSelPage(selectedModule);

            this.NavigationService.Navigate(passwordAuditDCSelPage);
        }

        private void domainsListBox_MouseDoubleClick(object sender, MouseButtonEventArgs e)
        {
            Button_Click(sender, null);
        }
    }
}
