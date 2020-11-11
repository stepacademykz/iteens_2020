namespace Hackaton
{
    partial class ChooseFolder
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
            this.chooseFolderButton = new System.Windows.Forms.Button();
            this.choosenFolder = new System.Windows.Forms.Label();
            this.continueButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // chooseFolderButton
            // 
            this.chooseFolderButton.Location = new System.Drawing.Point(12, 12);
            this.chooseFolderButton.Name = "chooseFolderButton";
            this.chooseFolderButton.Size = new System.Drawing.Size(125, 29);
            this.chooseFolderButton.TabIndex = 0;
            this.chooseFolderButton.Text = "Выбрать папку";
            this.chooseFolderButton.UseVisualStyleBackColor = true;
            this.chooseFolderButton.Click += new System.EventHandler(this.chooseFolderButton_Click);
            // 
            // choosenFolder
            // 
            this.choosenFolder.AutoSize = true;
            this.choosenFolder.Location = new System.Drawing.Point(143, 21);
            this.choosenFolder.Name = "choosenFolder";
            this.choosenFolder.Size = new System.Drawing.Size(0, 20);
            this.choosenFolder.TabIndex = 1;
            // 
            // continueButton
            // 
            this.continueButton.Location = new System.Drawing.Point(235, 116);
            this.continueButton.Name = "continueButton";
            this.continueButton.Size = new System.Drawing.Size(111, 29);
            this.continueButton.TabIndex = 2;
            this.continueButton.Text = "Продолжить";
            this.continueButton.UseVisualStyleBackColor = true;
            this.continueButton.Click += new System.EventHandler(this.continueButton_Click);
            // 
            // ChooseFolder
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(589, 157);
            this.Controls.Add(this.continueButton);
            this.Controls.Add(this.choosenFolder);
            this.Controls.Add(this.chooseFolderButton);
            this.Name = "ChooseFolder";
            this.Text = "ChooseFolder";
            this.Load += new System.EventHandler(this.ChooseFolder_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button chooseFolderButton;
        private System.Windows.Forms.Label choosenFolder;
        private System.Windows.Forms.Button continueButton;
    }
}