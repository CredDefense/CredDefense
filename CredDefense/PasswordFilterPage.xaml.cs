using System;
using System.Collections.Generic;
using System.DirectoryServices.ActiveDirectory;
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
    /// Interaction logic for PasswordFilterPage.xaml
    /// </summary>
    public partial class PasswordFilterPage : Page
    {
        public PasswordFilterPage()
        {
            InitializeComponent();
            this.DataContext = this;

            try
            {
                Domain domain = Domain.GetCurrentDomain();

                foreach (DomainController dc in domain.DomainControllers)
                {
                    DomainControllers.Add(dc.Name);
                }
            }
            catch (Exception ex)
            {
                DomainControllers.Add("Could not retrieve DCs");
            }
        }
        
        private List<String> domainControllers;
        public List<String> DomainControllers
        {
            get
            {
                if (domainControllers == null)
                    domainControllers = new List<string>();
                return domainControllers;
            }
        }
    }
}
