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
            lblSalary = new Label();
            lblSurname = new Label();
            txbName = new TextBox();
            txbSurname = new TextBox();
            txbSalary = new TextBox();
            btnOK = new Button();
            btnCancel = new Button();
           // this.SuspendLayout();
            //
            // lblName
            //
            this.lblName.Location = new System.Drawing.Point(15, 30);
            this.lblName.Name = "lblName";
            this.lblName.Size = new System.Drawing.Size(100, 23);
            this.lblName.TabIndex = 2;
            this.lblName.Text = "Name:";
            //
            // lblSalary
            //
            this.lblSalary.Location = new System.Drawing.Point(15, 100);
            this.lblSalary.Name = "lblSalary";
            this.lblSalary.Size = new System.Drawing.Size(100, 23);
            this.lblSalary.TabIndex = 3;
            this.lblSalary.Text = "Salary:";
            //
            // lblSurname
            //
            this.lblSurname.Location = new System.Drawing.Point(15, 70);
            this.lblSurname.Name = "lblSurname";
            this.lblSurname.Size = new System.Drawing.Size(100, 23);
            this.lblSurname.TabIndex = 4;
            this.lblSurname.Text = "Surname:";
            //
            // txbName
            //
            this.txbName.Location = new System.Drawing.Point(120, 30);
            this.txbName.Name = "txbName";
            this.txbName.Size = new System.Drawing.Size(100, 20);
            this.txbName.TabIndex = 5;
            //
            // txbSurname
            //
            this.txbSurname.Location = new System.Drawing.Point(120, 70);
            this.txbSurname.Name = "txbSurname";
            this.txbSurname.Size = new System.Drawing.Size(100, 20);
            this.txbSurname.TabIndex = 7;
            //
            // txbSalary
            //
            this.txbSalary.Location = new System.Drawing.Point(120, 100);
            this.txbSalary.Name = "txbSalary";
            this.txbSalary.Size = new System.Drawing.Size(100, 20);
            this.txbSalary.TabIndex = 6;
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
            this.Controls.Add(this.lblSalary);
            this.Controls.Add(this.lblSurname);
            this.Controls.Add(this.txbName);
            this.Controls.Add(this.txbSalary);
            this.Controls.Add(this.txbSurname);

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
        private System.Windows.Forms.Label lblSalary;
        private System.Windows.Forms.TextBox txbName;
        private System.Windows.Forms.TextBox txbSurname;
        private System.Windows.Forms.TextBox txbSalary;

        #endregion
    }
}