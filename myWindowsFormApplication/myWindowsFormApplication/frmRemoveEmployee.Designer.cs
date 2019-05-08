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
    partial class frmRemoveEmployee
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
            btnSearch = new Button();
            btnDelete = new Button();
            lblName = new Label();
            lblSurname = new Label();
            txbName = new TextBox();
            txbSurname = new TextBox();
            grdDeleteEmployee = new DataGridView();
            //
            //btnSearch
            //
            btnSearch.Location = new System.Drawing.Point(270, 30);
            btnSearch.Size = new System.Drawing.Size(75, 23);
            btnSearch.Text = "Search";
            btnSearch.Click += new System.EventHandler(this.btnSearch_Click);
            //
            //btnDelete
            //
            btnDelete.Location = new System.Drawing.Point(270, 70);
            btnDelete.Size = new System.Drawing.Size(75, 23);
            btnDelete.Text = "Delete";
            btnDelete.Click += new System.EventHandler(this.btnDelete_Click);
            btnDelete.Enabled = false;
             //
            // lblName
            //
            this.lblName.Location = new System.Drawing.Point(15, 30);
            this.lblName.Size = new System.Drawing.Size(100, 23);
            this.lblName.Text = "Name:";
            //
            // lblSurname
            //
            this.lblSurname.Location = new System.Drawing.Point(15, 70);
            this.lblSurname.Size = new System.Drawing.Size(100, 23);
            this.lblSurname.Text = "Surname:";
            //
            // txbName
            //
            this.txbName.Location = new System.Drawing.Point(120, 30);
            this.txbName.Size = new System.Drawing.Size(100, 20);
            //
            // txbSurname
            //
            this.txbSurname.Location = new System.Drawing.Point(120, 70);
            this.txbSurname.Size = new System.Drawing.Size(100, 20);
            //
            //grdDeleteEmployee
            //
            grdDeleteEmployee.Size = new Size(315, 140);
            grdDeleteEmployee.Location = new Point(30, 115);
            grdDeleteEmployee.ColumnHeadersDefaultCellStyle.Font = new Font(grdDeleteEmployee.Font, FontStyle.Bold);
            grdDeleteEmployee.AllowUserToResizeColumns = false;
            grdDeleteEmployee.ReadOnly = true;
            grdDeleteEmployee.RowHeadersVisible = false;
            grdDeleteEmployee.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.DisableResizing;
            grdDeleteEmployee.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            grdDeleteEmployee.AutoSizeRowsMode = DataGridViewAutoSizeRowsMode.AllCells;
            grdDeleteEmployee.CellClick += new DataGridViewCellEventHandler(grdCell_Click);

            Icon icon = Icon.ExtractAssociatedIcon("..\\..\\resources\\icon.ico");
            this.Icon = icon;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Size = new Size(500, 300);
            this.components = new System.ComponentModel.Container();
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.FormBorderStyle = FormBorderStyle.FixedDialog;
            this.Text = "Remove Employee";

            this.Controls.Add(btnSearch);
            this.Controls.Add(btnDelete);
            this.Controls.Add(lblName);
            this.Controls.Add(lblSurname);
            this.Controls.Add(txbName);
            this.Controls.Add(txbSurname);
            this.Controls.Add(grdDeleteEmployee);
        }

        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.Button btnDelete;
        private System.Windows.Forms.Label lblName;
        private System.Windows.Forms.Label lblSurname;
        private System.Windows.Forms.TextBox txbName;
        private System.Windows.Forms.TextBox txbSurname;
        private System.Windows.Forms.DataGridView grdDeleteEmployee;

        #endregion
    }
}