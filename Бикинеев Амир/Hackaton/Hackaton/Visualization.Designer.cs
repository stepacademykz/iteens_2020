namespace Hackaton
{
    partial class Visualization
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Region = new System.Windows.Forms.ComboBox();
            this.Type = new System.Windows.Forms.ComboBox();
            this.Time = new System.Windows.Forms.ComboBox();
            this.confirmButton = new System.Windows.Forms.Button();
            this.PerPerson = new System.Windows.Forms.CheckBox();
            this.RatePlace = new System.Windows.Forms.CheckBox();
            this.Month = new System.Windows.Forms.ComboBox();
            this.RegionLabel = new System.Windows.Forms.Label();
            this.TypeLabel = new System.Windows.Forms.Label();
            this.TimeLabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // Region
            // 
            this.Region.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Region.FormattingEnabled = true;
            this.Region.Location = new System.Drawing.Point(12, 22);
            this.Region.Name = "Region";
            this.Region.Size = new System.Drawing.Size(151, 28);
            this.Region.TabIndex = 0;
            // 
            // Type
            // 
            this.Type.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Type.FormattingEnabled = true;
            this.Type.Location = new System.Drawing.Point(169, 22);
            this.Type.Name = "Type";
            this.Type.Size = new System.Drawing.Size(175, 28);
            this.Type.TabIndex = 1;
            // 
            // Time
            // 
            this.Time.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Time.FormattingEnabled = true;
            this.Time.Location = new System.Drawing.Point(350, 22);
            this.Time.Name = "Time";
            this.Time.Size = new System.Drawing.Size(103, 28);
            this.Time.TabIndex = 2;
            this.Time.SelectedIndexChanged += new System.EventHandler(this.Time_SelectedIndexChanged);
            // 
            // confirmButton
            // 
            this.confirmButton.Location = new System.Drawing.Point(654, 16);
            this.confirmButton.Name = "confirmButton";
            this.confirmButton.Size = new System.Drawing.Size(116, 34);
            this.confirmButton.TabIndex = 3;
            this.confirmButton.Text = "Подтвердить";
            this.confirmButton.UseVisualStyleBackColor = true;
            this.confirmButton.Click += new System.EventHandler(this.confirmButton_Click);
            // 
            // PerPerson
            // 
            this.PerPerson.AutoSize = true;
            this.PerPerson.Location = new System.Drawing.Point(12, 56);
            this.PerPerson.Name = "PerPerson";
            this.PerPerson.Size = new System.Drawing.Size(187, 24);
            this.PerPerson.TabIndex = 5;
            this.PerPerson.Text = "Для каждого человека";
            this.PerPerson.UseVisualStyleBackColor = true;
            this.PerPerson.CheckedChanged += new System.EventHandler(this.PerPerson_CheckedChanged);
            // 
            // RatePlace
            // 
            this.RatePlace.AutoSize = true;
            this.RatePlace.Location = new System.Drawing.Point(205, 56);
            this.RatePlace.Name = "RatePlace";
            this.RatePlace.Size = new System.Drawing.Size(316, 24);
            this.RatePlace.TabIndex = 6;
            this.RatePlace.Text = "области по порядку уровня загрязнения";
            this.RatePlace.UseVisualStyleBackColor = true;
            this.RatePlace.CheckedChanged += new System.EventHandler(this.RatePlace_CheckedChanged);
            // 
            // Month
            // 
            this.Month.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Month.FormattingEnabled = true;
            this.Month.Location = new System.Drawing.Point(459, 22);
            this.Month.Name = "Month";
            this.Month.Size = new System.Drawing.Size(151, 28);
            this.Month.TabIndex = 7;
            this.Month.Visible = false;
            // 
            // RegionLabel
            // 
            this.RegionLabel.AutoSize = true;
            this.RegionLabel.Location = new System.Drawing.Point(52, -1);
            this.RegionLabel.Name = "RegionLabel";
            this.RegionLabel.Size = new System.Drawing.Size(58, 20);
            this.RegionLabel.TabIndex = 8;
            this.RegionLabel.Text = "Регион";
            // 
            // TypeLabel
            // 
            this.TypeLabel.AutoSize = true;
            this.TypeLabel.Location = new System.Drawing.Point(185, -1);
            this.TypeLabel.Name = "TypeLabel";
            this.TypeLabel.Size = new System.Drawing.Size(119, 20);
            this.TypeLabel.TabIndex = 9;
            this.TypeLabel.Text = "Тип транспорта";
            // 
            // TimeLabel
            // 
            this.TimeLabel.AutoSize = true;
            this.TimeLabel.Location = new System.Drawing.Point(345, -1);
            this.TimeLabel.Name = "TimeLabel";
            this.TimeLabel.Size = new System.Drawing.Size(63, 20);
            this.TimeLabel.TabIndex = 10;
            this.TimeLabel.Text = "Период";
            // 
            // Visualization
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 100);
            this.Controls.Add(this.TimeLabel);
            this.Controls.Add(this.TypeLabel);
            this.Controls.Add(this.RegionLabel);
            this.Controls.Add(this.Month);
            this.Controls.Add(this.RatePlace);
            this.Controls.Add(this.PerPerson);
            this.Controls.Add(this.confirmButton);
            this.Controls.Add(this.Time);
            this.Controls.Add(this.Type);
            this.Controls.Add(this.Region);
            this.Name = "Visualization";
            this.Text = "Visualization";
            this.Load += new System.EventHandler(this.Visualization_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox Region;
        private System.Windows.Forms.ComboBox Type;
        private System.Windows.Forms.ComboBox Time;
        private System.Windows.Forms.Button confirmButton;
        private System.Windows.Forms.CheckBox PerPerson;
        private System.Windows.Forms.CheckBox RatePlace;
        private System.Windows.Forms.ComboBox Month;
        private System.Windows.Forms.Label RegionLabel;
        private System.Windows.Forms.Label TypeLabel;
        private System.Windows.Forms.Label TimeLabel;
    }
}