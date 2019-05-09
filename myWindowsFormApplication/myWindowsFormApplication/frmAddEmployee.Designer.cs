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
    partial class frmAddEmployee
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
            lblName = new Label();
            lblSelectedCountry = new Label();
            lblSurname = new Label();
            lblDayCount = new Label();
            lblTotalPrice = new Label();
            txbName = new TextBox();
            txbSurname = new TextBox();
            txbSelectedCountry = new TextBox();
            txbDayCount = new TextBox();
            txbTotalPrice = new TextBox();
            btnOK = new Button();
            btnCancel = new Button();
           // this.SuspendLayout();
            //
            // lblName
            //
            this.lblName.Location = new System.Drawing.Point(15, 15);
            this.lblName.Name = "lblName";
            this.lblName.Size = new System.Drawing.Size(100, 23);
            this.lblName.TabIndex = 2;
            this.lblName.Text = "Name:";
            //
            // lblSelectedCountry
            //
            this.lblSelectedCountry.Location = new System.Drawing.Point(15, 70);
            this.lblSelectedCountry.Name = "lblSelectedCountry";
            this.lblSelectedCountry.Size = new System.Drawing.Size(100, 23);
            this.lblSelectedCountry.TabIndex = 3;
            this.lblSelectedCountry.Text = "Selected Country:";
            //
            // lblSurname
            //
            this.lblSurname.Location = new System.Drawing.Point(15, 40);
            this.lblSurname.Name = "lblSurname";
            this.lblSurname.Size = new System.Drawing.Size(100, 23);
            this.lblSurname.TabIndex = 4;
            this.lblSurname.Text = "Surname:";
            //
            // lblDayCount
            //
            this.lblDayCount.Location = new System.Drawing.Point(15, 100);
            this.lblDayCount.Name = "lblDayCount";
            this.lblDayCount.Size = new System.Drawing.Size(100, 23);
            this.lblDayCount.TabIndex = 4;
            this.lblDayCount.Text = "Day Count:";
            //
            // lblTotalPrice
            //
            this.lblTotalPrice.Location = new System.Drawing.Point(15, 135);
            this.lblTotalPrice.Name = "lblTotalPrice";
            this.lblTotalPrice.Size = new System.Drawing.Size(100, 23);
            this.lblTotalPrice.TabIndex = 4;
            this.lblTotalPrice.Text = "Total Price:";
            //
            // txbName
            //
            this.txbName.Location = new System.Drawing.Point(120, 15);
            this.txbName.Name = "txbName";
            this.txbName.Size = new System.Drawing.Size(100, 20);
            this.txbName.TabIndex = 5;
            //
            // txbSurname
            //
            this.txbSurname.Location = new System.Drawing.Point(120, 40);
            this.txbSurname.Name = "txbSurname";
            this.txbSurname.Size = new System.Drawing.Size(100, 20);
            this.txbSurname.TabIndex = 7;
            //
            // txbSelectedCountry
            //
            this.txbSelectedCountry.Location = new System.Drawing.Point(120, 70);
            this.txbSelectedCountry.Name = "txbSelectedCountry";
            this.txbSelectedCountry.Size = new System.Drawing.Size(100, 20);
            this.txbSelectedCountry.TabIndex = 6;
            //
            // txbDayCount
            //
            this.txbDayCount.Location = new System.Drawing.Point(120, 100);
            this.txbDayCount.Name = "txbDayCount";
            this.txbDayCount.Size = new System.Drawing.Size(100, 20);
            this.txbDayCount.TabIndex = 6;
            //
            // txbTotalPrice
            //
            this.txbTotalPrice.Location = new System.Drawing.Point(120, 130);
            this.txbTotalPrice.Name = "txbTotalPrice";
            this.txbTotalPrice.Size = new System.Drawing.Size(100, 20);
            this.txbTotalPrice.TabIndex = 6;
            //
            // btnOK
            //
            this.btnOK.Location = new System.Drawing.Point(100, 200);
            this.btnOK.Name = "btnOK";
            this.btnOK.Size = new System.Drawing.Size(75, 23);
            this.btnOK.TabIndex = 0;
            this.btnOK.Text = "OK";
            this.btnOK.Click += new System.EventHandler(this.btnOK_Click);
            //
            // btnCancel
            //
            this.btnCancel.Location = new System.Drawing.Point(200, 200);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(75, 23);
            this.btnCancel.TabIndex = 1;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            //
            // frmAddEmployee
            //
            this.Controls.Add(this.btnOK);
            this.Controls.Add(this.btnCancel);

            this.Controls.Add(this.lblName);
            this.Controls.Add(this.lblSelectedCountry);
            this.Controls.Add(this.lblDayCount);
            this.Controls.Add(this.lblTotalPrice);
            this.Controls.Add(this.lblSurname);

            this.Controls.Add(this.txbName);
            this.Controls.Add(this.txbSelectedCountry);
            this.Controls.Add(this.txbSurname);
            this.Controls.Add(this.txbDayCount);
            this.Controls.Add(this.txbTotalPrice);

            Icon icon = Icon.ExtractAssociatedIcon("..\\..\\resources\\icon.ico");
            this.Icon = icon;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Text = "AddEmployee";
            this.FormBorderStyle = FormBorderStyle.FixedDialog;

        }
        private System.Windows.Forms.Button btnOK;
        private System.Windows.Forms.Button btnCancel;
        private System.Windows.Forms.Label lblName;
        private System.Windows.Forms.Label lblSurname;
        private System.Windows.Forms.Label lblSelectedCountry;
        private System.Windows.Forms.Label lblDayCount;
        private System.Windows.Forms.Label lblTotalPrice;
        private System.Windows.Forms.TextBox txbName;
        private System.Windows.Forms.TextBox txbSurname;
        private System.Windows.Forms.TextBox txbSelectedCountry;
        private System.Windows.Forms.TextBox txbDayCount;
        private System.Windows.Forms.TextBox txbTotalPrice;

        #endregion
    }
}