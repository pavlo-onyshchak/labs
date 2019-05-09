using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;


namespace myWindowsFormApplication
{
    partial class MainForm
    {
        private System.ComponentModel.IContainer components = null;
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code
        private void InitializeComponent()
        {
            btnAdd = new Button();
            btnDelete = new Button();
            btnShow = new Button();
            btnSearch = new Button();

            //btnAdd
            btnAdd.Size = new Size(110, 25);
            btnAdd.Location = new Point(100, 50);
            btnAdd.BackColor = Color.White;
            btnAdd.Text = "Add Tourist";
            btnAdd.Click += new System.EventHandler(btnAdd_Click);


            //btnDelete
            btnDelete.Size = new Size(110, 25);
            btnDelete.Location = new Point(100, 75);
            btnDelete.BackColor = Color.White;
            btnDelete.Text = "Remove Tourist";
            btnDelete.Click += new System.EventHandler(btnDelete_Click);

            //btnShow
            btnShow.Size = new Size(110, 25);
            btnShow.Location = new Point(100, 100);
            btnShow.BackColor = Color.White;
            btnShow.AutoSize = true;
            btnShow.Text = "Show All Information";
            btnShow.Click += new System.EventHandler(btnShow_Click);

            //btnSearch
            btnSearch.Size = new Size(110, 25);
            btnSearch.Location = new Point(100, 125);
            btnSearch.BackColor = Color.White;
            btnSearch.Text = "Tourists search";
            btnSearch.Click += new System.EventHandler(btnSearch_Click);


            this.Controls.Add(btnAdd);
            this.Controls.Add(btnDelete);
            this.Controls.Add(btnShow);
            this.Controls.Add(btnSearch);

            Icon icon = Icon.ExtractAssociatedIcon("..\\..\\resources\\icon.ico");
            this.Icon = icon;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.FormBorderStyle = FormBorderStyle.FixedDialog;
            this.components = new System.ComponentModel.Container();
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Text = "TL";

        }

        #endregion
        private System.Windows.Forms.Button btnAdd;
        private System.Windows.Forms.Button btnDelete;
        private System.Windows.Forms.Button btnShow;
        private System.Windows.Forms.Button btnSearch;
    }
}


