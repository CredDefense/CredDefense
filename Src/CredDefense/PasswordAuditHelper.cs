using DSInternals.Common.Cryptography;
using DSInternals.Common.Data;
using DSInternals.Replication;
using DSInternals.Replication.Model;
using System;
using System.Collections.Generic;
using System.DirectoryServices.ActiveDirectory;
using System.Management.Automation;
using System.Windows;
using DSInternals.Common;
using System.IO;
using System.Timers;
using System.Diagnostics;
using System.Linq;

namespace CredDefense
{
    class PasswordAuditHelper
    {
        private static string fileHeader =  "****************************************\n" +
                                            "*                                      *\n" +
                                            "*      CredDefense AD PW Audit         *\n" +
                                            "*                                      *\n" +
                                            "****************************************\n\n\n";
        private string nameContext;
        private string saveFile;
        private string passwordList;
        private DomainController currDc;
        private DirectoryReplicationClient dRep;
        private List<DSAccount> accs;
        private Dictionary<string, List<DSAccount>> accFindings;
        private Dictionary<string, List<DSAccount>> hashDict;
        private Dictionary<string, List<DSAccount>> cracked;
        Dictionary<string, int> passCount;
        private int nDAsCracked;
        private Stopwatch sw;
        private List<string> findingNames;
        private ProgressRecord progress;
        public ProgressRecord Progress
        {
            get
            {
                if( progress == null )
                {
                    progress = new ProgressRecord(1, "Replication", "Replicating AD Objects");
                }
                return progress;
            }
        }

        public PasswordAuditHelper(string saveFile, string passwordList, DomainController currDc)
        {
            this.saveFile = saveFile;
            this.passwordList = passwordList;
            this.currDc = currDc;
            this.dRep = null;
            this.nameContext = "";
            accs = null;

            findingNames = new List<string>();
            findingNames.Add("Password Never Expires");
            findingNames.Add("Only DES Kerberos Encryption Used");
            findingNames.Add("Admin Account can be Delegated");
            findingNames.Add("Password not Required");
            findingNames.Add("Pre-authentication not Required");
            findingNames.Add("Password Stored in Cleartext");
            findingNames.Add("Account is Missing AES Kerberos Keys");
            findingNames.Add("Account has LM Hash");
            findingNames.Add("Account has no Password");
            findingNames.Add("Account has an Empty Password");
        }

        public bool RunAudit()
        {
            passCount = new Dictionary<string, int>();
            nDAsCracked = 0;
            hashDict = new Dictionary<string, List<DSAccount>>();
            cracked = new Dictionary<string, List<DSAccount>>();
            createFindingsDict();
            // MessageBox.Show("Ran!");
            sw = Stopwatch.StartNew();
            if (createConnection())
            {
                if( getAccounts() )
                {
                    if(processRecords())
                    {
                        crackPasses();

                        sw.Stop();
                        writeResults();
                        
                    }
                }
            }
            return true;
        }

        private bool createConnection()
        {
            nameContext = "";
            dRep = null;
            string server = currDc.Name.Split('.')[0];
            string fullPath = currDc.GetDirectoryEntry().Path.ToString();
            foreach (string token in fullPath.Split(','))
            {
                if (token.ToLower().Contains("dc="))
                {
                    nameContext += token + ",";
                }
            }

            nameContext = nameContext.Remove(nameContext.Length - 1);
            MessageBox.Show(nameContext + " " + server);
            try
            {
                dRep = new DirectoryReplicationClient(server, RpcProtocol.TCP, null);
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error creating replication connection\n\n" + ex.ToString());
                return false;
            }
            MessageBox.Show("Created connection to : " + server + "\nwith NameContext : " + nameContext);
            return true;
        }

        private bool getAccounts()
        {
            accs = null;
            progress = new ProgressRecord(1, "Replication", "Replicating AD Objects");

            progress.PercentComplete = 0;
            ReplicationProgressHandler progressReport = (ReplicationCookie cookie, int processedObjectCount, int totalObjectCount) =>
            {
                int percentComplete = (int)(((double)processedObjectCount / (double)totalObjectCount) * 100);
                progress.PercentComplete = Math.Min(percentComplete, 100);
            };

            try
            {
                accs = new List<DSAccount>(dRep.GetAccounts(nameContext, progressReport));

                progress.RecordType = ProgressRecordType.Completed;
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error getting accounts\n\n" + ex.ToString());
                return false;
            }

            return true;
        }

        private bool processRecords()
        {
            foreach(DSAccount acc in accs)
            {
                if (acc.UserAccountControl.HasFlag(UserAccountControl.PasswordNeverExpires))
                {
                    accFindings["Password Never Expires"].Add(acc);
                }
                if(acc.UserAccountControl.HasFlag(UserAccountControl.UseDesKeyOnly))
                {
                    accFindings["Only DES Kerberos Encryption Used"].Add(acc);
                }
                if(acc.AdminCount && !acc.UserAccountControl.HasFlag(UserAccountControl.NotDelegated))
                {
                    accFindings["Admin Account can be Delegated"].Add(acc);
                }
                if(acc.UserAccountControl.HasFlag(UserAccountControl.PasswordNotRequired))
                {
                    accFindings["Password not Required"].Add(acc);
                }
                if(acc.UserAccountControl.HasFlag(UserAccountControl.PreAuthNotRequired))
                {
                    accFindings["Pre-authentication not Required"].Add(acc);
                }
                if(acc.SupplementalCredentials != null)
                {
                    if(acc.SupplementalCredentials.ClearText != null)
                    {
                        string cleartext = acc.SupplementalCredentials.ClearText;
                        accFindings["Password Stored in Cleartext"].Add(acc);
                    }
                    if(acc.SupplementalCredentials.KerberosNew == null)
                    {
                        accFindings["Account is Missing AES Kerberos Keys"].Add(acc);
                    }
                }
                if (acc.LMHash != null)
                {
                    accFindings["Account has LM Hash"].Add(acc);
                }

                if (acc.NTHash == null)
                {
                    accFindings["Account has no Password"].Add(acc);
                }

                if(HashEqualityComparer.GetInstance().Equals(acc.NTHash, NTHash.Empty))
                {
                    accFindings["Account has an Empty Password"].Add(acc);
                }

                if(acc.SamAccountType == SamAccountType.Computer)
                {
                    //check for default comp creds
                }

                string currHash = acc.NTHash.ToHex();
                if (currHash != null && currHash.Length > 0)
                {
                    if (!hashDict.ContainsKey(currHash))
                    {
                        hashDict.Add(currHash, new List<DSAccount>());
                    }

                    hashDict[currHash].Add(acc);
                }
            }

            return true;
        }

        private void crackPasses()
        {
            FileStream passList = new FileStream(passwordList, FileMode.Open);
            StreamReader passStream = new StreamReader(passList, System.Text.Encoding.ASCII, true, 128);
            string currPass;
            while((currPass = passStream.ReadLine()) != null)
            {
                currPass = currPass.TrimEnd();
                if(currPass.Length < 4)
                {
                    continue;
                }
                string currHash = NTHash.ComputeHash(currPass).ToHex();

                if (currHash != null && currHash.Length > 0 && hashDict.ContainsKey(currHash))
                {
                    cracked.Add(currPass, new List<DSAccount>(hashDict[currHash]));
                }
            }
            
        }

        private void writeResults()
        {
            FileStream saveFileObj = new FileStream(saveFile, FileMode.Append);
            StreamWriter saveStream = new StreamWriter(saveFileObj);

            saveStream.WriteLine(fileHeader);
            saveStream.WriteLine("\n" + DateTime.Now.ToLongDateString() + " " + DateTime.Now.ToLongTimeString() + "\n");
            foreach (string key in accFindings.Keys)
            {
                if(accFindings[key].Count > 0)
                {
                    int idx = 0;
                    saveStream.WriteLine("\n\n" + key + "\n----------------------------\n");
                    foreach(DSAccount acc in accFindings[key])
                    {
                        saveStream.Write(acc.SamAccountName);
                        if (acc.AdminCount)
                        {
                            saveStream.Write(" (AD)");
                        }
                        idx++;
                        if(idx < 3)
                        {
                            saveStream.Write("\t");
                        }
                        else
                        {
                            idx = 0;
                            saveStream.WriteLine("");
                        }
                    }

                    saveStream.WriteLine("");
                }
            }

            foreach(string key in hashDict.Keys)
            {

                if(hashDict[key].Count > 1)
                {
                    passCount.Add(key, hashDict[key].Count);
                    saveStream.WriteLine("\n\nUsers with  " + key + " for NTHash" + "\n----------------------------\n");
                    int idx = 0;
                    foreach (DSAccount acc in hashDict[key])
                    {
                        saveStream.Write(acc.SamAccountName);
                        if(acc.AdminCount)
                        {
                            saveStream.Write(" (AD)");
                        }
                        idx++;
                        if (idx < 3)
                        {
                            saveStream.Write("\t");
                        }
                        else
                        {
                            idx = 0;
                            saveStream.WriteLine("");
                        }
                    }

                    saveStream.WriteLine("");
                }
            }

            if (cracked.Count > 0)
            {

                int idx = 0;

                foreach (string key in cracked.Keys)
                {
                    saveStream.WriteLine("\n\nUsers with  " + key + " for Password" + "\n----------------------------\n");
                    foreach (DSAccount crackedAcc in cracked[key])
                    {
                        saveStream.Write(crackedAcc.SamAccountName);
                        if (crackedAcc.AdminCount)
                        {
                            nDAsCracked++;
                            saveStream.Write(" (AD)");
                        }
                        idx++;
                        if (idx < 3)
                        {
                            saveStream.Write("\t");
                        }
                        else
                        {
                            idx = 0;
                            saveStream.WriteLine("");
                        }
                    }

                    saveStream.WriteLine("");

                }

            }

            List<KeyValuePair<string, int>> sortedPass = passCount.ToList();
            sortedPass.Sort(
                delegate (KeyValuePair<string, int> pair1,
                KeyValuePair<string, int> pair2)
                {
                    return pair1.Value.CompareTo(pair2.Value);
                }
            );
            double totalSec = (double)sw.ElapsedMilliseconds / 1000.0;
            saveStream.WriteLine("\n\nPassword Stats" + "\n----------------------------\n");
            saveStream.WriteLine("Password File:\t\t" + passwordList);
            saveStream.WriteLine("Total Time:\t\t" + totalSec.ToString());
            saveStream.WriteLine("Total Unique:\t\t" + hashDict.Count);
            saveStream.WriteLine("Total Cracked:\t\t" + cracked.Count);
            saveStream.WriteLine("DA's Cracked:\t\t" + nDAsCracked);
            saveStream.WriteLine("Top Re-Used Passwords (NTHash : nUsers):");

            int currKvp = 0;
            foreach(KeyValuePair<string, int> kvp in sortedPass)
            {
                saveStream.WriteLine(kvp.Key + " : " + kvp.Value);
                currKvp++;
                if(currKvp > 20)
                {
                    break;
                }
            }

            saveStream.Close();
        }

        private void createFindingsDict()
        {
            accFindings = new Dictionary<string, List<DSAccount>>();
            
            foreach(string finding in findingNames)
            {
                accFindings.Add(finding, new List<DSAccount>());
            }
        }
    }
}
