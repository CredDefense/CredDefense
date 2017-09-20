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
    public partial class PasswordAuditDCSelPage : Page
    {
        private PasswordFilterHelper pfHelper;
        private string currDomain;

        private ObservableCollection<String> dcList;
        public ObservableCollection<String> DCList
        {
            get
            {
                if (dcList == null)
                    dcList = new ObservableCollection<string>();
                return dcList;
            }
            set
            {
                dcList = null;
                dcList = value;
            }
        }

        public PasswordAuditDCSelPage(string domain)
        {
            InitializeComponent();
            this.currDomain = domain;
            this.DataContext = this;
            reInit();
        }

        private void reInit()
        {
            this.pfHelper = new PasswordFilterHelper();
            this.DCList.Clear();
            if (this.pfHelper.updateDomainData())
            {
                foreach(DomainController dom in pfHelper.AllDomainControllers)
                {
                    this.DCList.Add(dom.Name);
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
                selectedModule = this.dcListBox.SelectedValue.ToString().Split(':')[0].Trim();
            }
            catch
            {
                MessageBox.Show("Invalid Selection");
                return;
            }

            DomainController currDC = null;

            try
            {
                foreach (DomainController dc in pfHelper.AllDomainControllers)
                {
                    if (dc.Name.Contains(selectedModule))
                    {
                        currDC = dc;
                        break;
                    }
                }
            }
            catch
            {
                MessageBox.Show("Error retrieiving information for selected DC");
                return;
            }

            PasswordAuditRunPage passwordAuditRunPage = new PasswordAuditRunPage(currDC);

            this.NavigationService.Navigate(passwordAuditRunPage);
        }

        private void dcListBox_MouseDoubleClick(object sender, MouseButtonEventArgs e)
        {
            Button_Click(sender, null);
        }
    }
}
