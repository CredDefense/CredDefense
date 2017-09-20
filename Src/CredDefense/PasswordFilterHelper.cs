using Microsoft.Win32;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.DirectoryServices.ActiveDirectory;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CredDefense
{
    class PasswordFilterHelper
    {
        private Forest currForest;
        private DomainCollection currDomains;

        public DomainCollection CurrDomains
        {
            get;
            private set;
        }

        public Forest CurrForest
        {
            get;
            private set;
        }

        private List<DomainController> allDomainControllers;
        public List<DomainController> AllDomainControllers
        {
            get
            {
                if (allDomainControllers == null)
                    allDomainControllers = new List<DomainController>();
                return allDomainControllers;
            }
        }

        private ObservableCollection<String> configuredDomainControllers;
        public ObservableCollection<String> ConfiguredDomainControllersList
        {
            get
            {
                if (configuredDomainControllers == null)
                    configuredDomainControllers = new ObservableCollection<String>();
                return configuredDomainControllers;
            }
        }

        private ObservableCollection<String> unconfiguredDomainControllers;
        public ObservableCollection<String> UnconfiguredDomainControllersList
        {
            get
            {
                if (unconfiguredDomainControllers == null)
                    unconfiguredDomainControllers = new ObservableCollection<String>();
                return unconfiguredDomainControllers;
            }
        }

        private ObservableCollection<String> unreachabledDomainControllers;
        public ObservableCollection<String> UnreachableDomainControllersList
        {
            get
            {
                if (unreachabledDomainControllers == null)
                    unreachabledDomainControllers = new ObservableCollection<String>();
                return unreachabledDomainControllers;
            }
        }

        public string checkArch(string dcName)
        {
            try
            {
                RegistryKey rKey = RegistryKey.OpenRemoteBaseKey(RegistryHive.LocalMachine, @"\\" + dcName);

                RegistryKey sKey = rKey.OpenSubKey(@"System\CurrentControlSet\Control\Session Manager\Environment", false);

                return (sKey.GetValue("PROCESSOR_ARCHITECTURE").ToString());
            }
            catch
            {
                return "";
            }
        }

        public bool checkRegKey(string dcName)
        {
            try
            {
                RegistryKey rKey = RegistryKey.OpenRemoteBaseKey(RegistryHive.LocalMachine, @"\\" + dcName);

                RegistryKey sKey = rKey.OpenSubKey(@"System\CurrentControlSet\Control\Lsa\", false);

                string[] vals = (sKey.GetValue("Notification Packages") as IEnumerable).Cast<object>().Select(x => x.ToString()).ToArray();

                foreach (string val in vals)
                {
                    if (val.ToLower().Contains("easypasswordfilter"))
                    {
                        return true;
                    }
                }
            }
            catch
            {
                return false;
            }

            return false;
        }

        public string getSysPath(string dcName)
        {
            try
            {
                RegistryKey rKey = RegistryKey.OpenRemoteBaseKey(RegistryHive.LocalMachine, @"\\" + dcName);

                RegistryKey sKey = rKey.OpenSubKey(@"SOFTWARE\Microsoft\WIndows NT\CurrentVersion\", false);

                return (sKey.GetValue("PathName").ToString());
            }
            catch
            {
                return "";
            }
        }

        public bool updateRegValue(string dcName, bool delete)
        {
            try
            {
                RegistryKey rKey = RegistryKey.OpenRemoteBaseKey(RegistryHive.LocalMachine, @"\\" + dcName);

                RegistryKey sKey = rKey.OpenSubKey(@"System\CurrentControlSet\Control\Lsa\", true);

                string[] vals = (sKey.GetValue("Notification Packages") as IEnumerable).Cast<object>().Select(x => x.ToString()).ToArray();

                sKey.DeleteValue("Notification Packages");

                List<string> newVals = new List<string>();

                if (!delete)
                {
                    newVals.Add("EasyPasswordFilter");
                }

                foreach (string val in vals)
                {
                    if (!val.ToLower().Contains("easypasswordfilter"))
                    {
                        newVals.Add(val);
                    }
                }

                sKey.SetValue("Notification Packages", newVals.ToArray());
            }

            catch
            {
                return false;
            }

            return true;
        }

        public bool checkSystemReachable(string dcName)
        {
            try
            {
                return (Directory.Exists(@"\\" + dcName + @"\C$"));
            }
            catch
            {
                return false;
            }
        }

        public bool updateDomainData()
        {
            bool retVal = true;
            if (updateForest())
            {
                if( updateDomains(this.CurrForest) )
                {
                    retVal = updateDomainControllers(this.CurrDomains);
                }
            }
            else
            {
                retVal = false;
            }

            return retVal;
        }

        private bool updateForest()
        {
            try
            {
                this.CurrForest = Forest.GetCurrentForest();
                return true;
            }
            catch
            {
                return false;
            }
        }

        private bool updateDomains(Forest forest)
        {
            try
            {
                this.CurrDomains = forest.Domains;
                return true;
            }
            catch
            {
                return false;
            }
        }

        public bool updateDomainControllers(DomainCollection domains)
        {
            ConfiguredDomainControllersList.Clear();
            UnconfiguredDomainControllersList.Clear();
            UnreachableDomainControllersList.Clear();
            AllDomainControllers.Clear();
            bool retVal = true;
            try
            {
                foreach (Domain domain in domains)
                {
                    DomainControllerCollection dcCollection = domain.FindAllDiscoverableDomainControllers();

                    foreach (DomainController dc in dcCollection)
                    {
                        try
                        {
                            AllDomainControllers.Add(dc);

                            if (checkSystemReachable(dc.IPAddress))
                            {
                                if (checkRegKey(dc.IPAddress))
                                {
                                    ConfiguredDomainControllersList.Add(dc.Name);
                                }
                                else
                                {
                                    UnconfiguredDomainControllersList.Add(dc.Name);
                                }
                            }
                            else
                            {
                                UnreachableDomainControllersList.Add(dc.Name);
                            }
                        }
                        catch (Exception e)
                        {
                            UnconfiguredDomainControllersList.Add(e.ToString());
                        }
                    }
                }
            }

            catch (Exception ex)
            {
                UnconfiguredDomainControllersList.Add("Error Retrieving Domain Controllers");
                ConfiguredDomainControllersList.Add("Error Retrieving Domain Controllers");
                retVal = false;
            }

            return retVal;
        }
    }
}
