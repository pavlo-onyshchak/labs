using System.Drawing;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace myWindowsFormApplication
{
    partial class frmShowEmployee
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
            grdShow = new DataGridView();

            //grdShow
            grdShow.Location = new Point(15, 75);
            grdShow.ColumnHeadersDefaultCellStyle.Font = new Font(grdShow.Font, FontStyle.Bold);
            grdShow.AllowUserToResizeColumns = false;
            grdShow.ReadOnly = true;
            grdShow.RowHeadersVisible = false;
            grdShow.Dock = DockStyle.Fill;
            grdShow.RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode.DisableResizing;
            grdShow.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.DisableResizing;
            grdShow.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            grdShow.AutoSizeRowsMode = DataGridViewAutoSizeRowsMode.AllCells;

            this.FormBorderStyle = FormBorderStyle.FixedDialog;
            this.Size = new Size(430, 200);
            this.Location = new Point(50, 100);
            this.Controls.Add(grdShow);
            this.MinimizeBox = false;
            this.MaximizeBox = false;
            Icon icon = Icon.ExtractAssociatedIcon("..\\..\\resources\\icon.ico");
            this.Icon = icon;
            this.components = new System.ComponentModel.Container();
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Text = "Show Employee";
        }

        private System.Windows.Forms.DataGridView grdShow;
        #endregion
    }
}