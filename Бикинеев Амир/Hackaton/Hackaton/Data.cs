using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using Hackaton.files;
namespace Hackaton
{
    public partial class Data : Form
    {
        public Visualization formVis;
        DataDictionaries data;
        Manager manager;
        public Data()
        {
            InitializeComponent();
            InputTXT input = new InputTXT();
            data = new DataDictionaries(input.Read("к_авто/"), input.Read("ср_пробег/"));
        }

        private void Data_Load(object sender, EventArgs e)
        {
            manager = new Manager(data);
            if (formVis.perPerson)
            {
                TableResult.DataSource = manager.Time(manager.AveragePerPerson(), formVis.TimeText, bool.Parse(formVis.OneDayText));
            }
            else if (formVis.rate)
            {
                TableResult.DataSource = manager.Rate(formVis.TimeText, bool.Parse(formVis.OneDayText));
            }
            else
            {
                TableResult.DataSource = manager.Time(manager.Type(formVis.TypeText,manager.Region(formVis.RegionText)), formVis.TimeText, bool.Parse(formVis.OneDayText));
            }
        }

        private void ReturnButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
