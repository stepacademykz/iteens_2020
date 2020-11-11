using Hackaton.files;

using Microsoft.VisualBasic.CompilerServices;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
namespace Hackaton
{
    

    public partial class Visualization : Form
    {
        public ChooseFolder chooseFolder;
        public string RegionText;
        public string TypeText;
        public string TimeText;
        public string OneDayText;
        public bool perPerson;
        public bool rate;
        DataDictionaries data;
        public Visualization()
        {
            InitializeComponent();
            InputTXT input=new InputTXT();
            data = new DataDictionaries(input.Read("к_авто/"), input.Read("ср_пробег/"));
        }

        private void Visualization_Load(object sender, EventArgs e)
        {
            Region.Items.Add("Все");
            Region.Text = "Все";
            foreach(string key in data.midMileage.Keys)
            {
                Region.Items.Add(key);
            }
            Type.Items.Add("Все");
            Type.Text = "Все";
            foreach(string key in data.kAuto.Keys)
            {
                Type.Items.Add(key);
            }
            Time.Items.Add("Год");
            Time.Items.Add("Месяц");
            Time.Items.Add("День");
            Time.Text = "Год";
            for(int i = 0; i < 12; i++)
            {
                Month.Items.Add(Enum.GetName(typeof(year), (year)i));
            }
            Month.Text = "Декабрь";
            chooseFolder.Hide();
        }

        private void Time_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (Time.Text == "Месяц" || Time.Text == "День")
            {
                Month.Visible = true;
            }
            else
            {
                Month.Visible = false;
            }
        }

        private void PerPerson_CheckedChanged(object sender, EventArgs e)
        {
            if (PerPerson.Checked)
            {
                Region.Enabled = false;
                Type.Enabled = false;
                RatePlace.Enabled = false;
            }
            else
            {
                Region.Enabled = true;
                Type.Enabled = true;
                RatePlace.Enabled = true;
            }
        }

        private void RatePlace_CheckedChanged(object sender, EventArgs e)
        {
            if (RatePlace.Checked)
            {
                Region.Enabled = false;
                Type.Enabled = false;
                PerPerson.Enabled = false;
            }
            else
            {
                Region.Enabled = true;
                Type.Enabled = true;
                PerPerson.Enabled = true;
            }
        }

        private void confirmButton_Click(object sender, EventArgs e)
        {
            
            string time = Time.Text;
            bool oneDay = false;
            if (time == "Месяц")
                time = Month.Text;
            else if (time == "День")
            {
                time = Month.Text;
                oneDay = true;
            }
            if (PerPerson.Checked)
            {
                rate = false;
                perPerson = true;
                TimeText = time;
                OneDayText = oneDay.ToString();
                Data data = new Data();
                data.formVis = this;
                data.ShowDialog();
            }
            else if (RatePlace.Checked)
            {
                perPerson = false;
                rate = true;
                TimeText = time;
                OneDayText = oneDay.ToString();
                Data data = new Data();
                data.formVis = this;
                data.ShowDialog();
            }
            else
            {
                perPerson = false;
                rate = false;
                RegionText = Region.Text;
                TypeText = Type.Text;
                TimeText = time;
                OneDayText = oneDay.ToString();
                Data data = new Data();
                data.formVis = this;
                data.ShowDialog();
            }
            
            
        }
    }
}
