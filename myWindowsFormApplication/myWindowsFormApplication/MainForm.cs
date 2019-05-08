using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
using System.Web;

namespace myWindowsFormApplication
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
           InitializeComponent();
        }

        private void btnAdd_Click(object sender,EventArgs e)
        {
            frmAddEmployee frmAdd = new frmAddEmployee();
            frmAdd.Show();
        }

        private void btnDelete_Click(object sender,EventArgs e)
        {
            frmRemoveEmployee RemoveEmployee = new frmRemoveEmployee();
            RemoveEmployee.Show();
        }

        private void btnShow_Click(object sender,EventArgs e)
        {
            frmShowEmployee ShowEmployee = new frmShowEmployee();
            ShowEmployee.Show();
         }

        private void btnSearch_Click(object sender,EventArgs e)
        {
            frmSearch SearchEmployee = new frmSearch();
            SearchEmployee.Show();
        }
    }
}
