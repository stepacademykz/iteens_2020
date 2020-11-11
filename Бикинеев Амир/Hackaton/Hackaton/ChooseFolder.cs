using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.IO;
using Hackaton.files;


namespace Hackaton
{
    
    public partial class ChooseFolder : Form
    {
        
        public ChooseFolder()
        {
            InitializeComponent();
            choosenFolder.Text = "../../../";
        }

        private void chooseFolderButton_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog fbd = new FolderBrowserDialog();
            if (fbd.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                choosenFolder.Text = fbd.SelectedPath;
            }
        }

       
        private void continueButton_Click(object sender, EventArgs e)
        {
            Input input = new Input();
            InputTXT inputtxt = new InputTXT();
            try
            {
                inputtxt.SetDefaultPath(choosenFolder.Text);
                input.Find("к_авто/");
                input.Find("ср_пробег/");
                Visualization vis = new Visualization();
                vis.chooseFolder = this;
                vis.ShowDialog();
                this.Close();
                
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void ChooseFolder_Load(object sender, EventArgs e)
        {

        }
    }
}
