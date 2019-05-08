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


namespace myWindowsFormApplication
{
    public partial class frmAddEmployee : Form
    {
        public frmAddEmployee()
        {
            InitializeComponent();
        }
        private void btnOK_Click(object sender,EventArgs e)
        {
            using (SqlConnection connection = new SqlConnection("Data Source = localhost; Initial Catalog = MyWindowsFormApplication; Integrated Security = True"))
            {
                using (SqlCommand cmd = new SqlCommand("InsertIntoEmployee", connection))
                {
                    connection.Open();
                    cmd.CommandType = CommandType.StoredProcedure;
                    cmd.Parameters.AddWithValue("@Name", txbName.Text);
                    cmd.Parameters.AddWithValue("@Surname", txbSurname.Text);
                    cmd.Parameters.AddWithValue("@Salary", txbSalary.Text);
                    cmd.ExecuteNonQuery();
                }
            }
            this.Close();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void frmAddEmployee_Load(object sender, EventArgs e)
        {

        }
    }
}
