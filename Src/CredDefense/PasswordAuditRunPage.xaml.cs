using Microsoft.Win32;
using System;
using System.ComponentModel;
using System.DirectoryServices.ActiveDirectory;
using System.IO;
using System.Threading;
using System.Windows;
using System.Windows.Controls;

namespace CredDefense
{
    /// <summary>
    /// Interaction logic for PasswordFilterUpdatePage.xaml
    /// </summary>
    public partial class PasswordAuditRunPage : Page
    {
        private DomainController currDC;
        private PasswordAuditHelper paHelper;
        private Thread pwAuditThread;

        private string dcName;
        public string DcName
        {
            get
            {
                try
                {
                    return currDC.Name;
                }
                catch
                {
                    MessageBox.Show("Error getting DC Name");
                    return "";
                }
            }
        }

        private string passwordFile;
        public string PasswordFile
        {
            get;
            private set;
        }

        private string saveFile;
        public string SaveFile
        {
            get;
            private set;
        }

        public PasswordAuditRunPage(DomainController dc)
        {
            this.pwAuditThread = null;
            this.currDC = dc;
            this.PasswordFile = "";
            this.SaveFile = "";
            InitializeComponent();
            this.DataContext = this;
            reInit();

        }

        private void reInit()
        {
            this.pfHelper = new PasswordFilterHelper();

            if (this.pfHelper.updateDomainData())
            {
                FrameworkElement dataContext = (FrameworkElement)this.DataContext;
                this.DataContext = null;
                this.DataContext = dataContext;
            }
        }

        private PasswordFilterHelper pfHelper;

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            //https://msdn.microsoft.com/en-us/library/system.windows.forms.openfiledialog(v=vs.110).aspx
            Stream myStream = null;
            OpenFileDialog openFileDialog1 = new OpenFileDialog();

            try
            {
                openFileDialog1.InitialDirectory = "c:\\";
                openFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
                openFileDialog1.FilterIndex = 2;
                openFileDialog1.RestoreDirectory = true;

                if (openFileDialog1.ShowDialog() == true)
                {
                    this.PasswordFile = openFileDialog1.FileName;
                    reInit();
                    //try
                    //{
                    //    if ((myStream = openFileDialog1.OpenFile()) != null)
                    //    {
                    //        using (myStream)
                    //        {
                    //            // Insert code to read the stream here.
                    //        }
                    //    }
                    //}
                    //catch (Exception ex)
                    //{
                    //    MessageBox.Show("Error: Could not read file from disk. Original error: " + ex.Message);
                    //}
                }
            }
            catch
            {
                MessageBox.Show("FileDialog Error");
                return;
            }
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            Stream myStream = null;
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();

            try
            {
                saveFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();
                saveFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
                saveFileDialog1.FilterIndex = 2;
                saveFileDialog1.RestoreDirectory = true;

                if (saveFileDialog1.ShowDialog() == true)
                {
                    this.SaveFile = saveFileDialog1.FileName;
                    reInit();
                }
            }
            catch
            {
                MessageBox.Show("FileDialog Error");
                return;
            }
        }
        private void Button_Click_2(object sender, RoutedEventArgs e)
        {

            if (SaveFile != "" && PasswordFile != "" && currDC != null)
            {
                auditThread();
            }
            //ProgressDialogResult
            //BackgroundWorker worker = new BackgroundWorker();
            //worker.WorkerReportsProgress = true;
            //worker.DoWork += auditThread;
            //worker.DoWork += audit_GetProgress;
            //worker.ProgressChanged += audit_ProgressChanged;
            //worker.RunWorkerAsync();
                
           // }
        }

        private void auditThread()
        {
            try
            {
                paHelper = new PasswordAuditHelper(SaveFile, PasswordFile, currDC);
                paHelper.RunAudit();
            }
            catch(Exception exc)
            {
                MessageBox.Show(exc.ToString());
            }
        }
    }
}

