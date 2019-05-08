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
    partial class frmSearch
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
            btnOK = new Button();
            lblName = new Label();
            lblSurname = new Label();
            txbName = new TextBox();
            txbSurname = new TextBox();
            grdSearch = new DataGridView();
            //
            //btnOK
            //
            btnOK.Location = new System.Drawing.Point(120, 220);
            btnOK.Name = "btnOK";
            btnOK.Size = new System.Drawing.Size(75, 23);
            btnOK.Text = "OK";
            btnOK.Click += new System.EventHandler(this.btnOK_Click);
            //
            // lblName
            //
            this.lblName.Location = new System.Drawing.Point(15, 30);
            this.lblName.Name = "lblName";
            this.lblName.Size = new System.Drawing.Size(100, 23);
            this.lblName.TabIndex = 2;
            this.lblName.Text = "Name:";
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
            //grdSearch
            //
            grdSearch.Size = new Size(375, 100);
            grdSearch.Location = new Point(5, 115);
            grdSearch.ColumnHeadersDefaultCellStyle.Font = new Font(grdSearch.Font, FontStyle.Bold);
            grdSearch.ReadOnly = true;
            grdSearch.AllowUserToResizeColumns = false;
            grdSearch.RowHeadersVisible = false;
            grdSearch.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.DisableResizing;
            grdSearch.RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode.DisableResizing;
            grdSearch.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            grdSearch.AutoSizeRowsMode = DataGridViewAutoSizeRowsMode.AllCells;

            this.Controls.Add(btnOK);
            this.Controls.Add(lblName);
            this.Controls.Add(lblSurname);
            this.Controls.Add(txbName);
            this.Controls.Add(txbSurname);

            Icon icon = Icon.ExtractAssociatedIcon("..\\..\\resources\\icon.ico");
            this.Icon = icon;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Size = new Size(400, 300);
            this.FormBorderStyle = FormBorderStyle.FixedDialog;
            this.components = new System.ComponentModel.Container();
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Text = "Employee search";
        }
        private System.Windows.Forms.Button btnOK;
        private System.Windows.Forms.Label lblName;
        private System.Windows.Forms.Label lblSurname;
        private System.Windows.Forms.TextBox txbName;
        private System.Windows.Forms.TextBox txbSurname;
        private System.Windows.Forms.DataGridView grdSearch;

        #endregion
    }
}