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
    public partial class frmSearch : Form
    {
        public frmSearch()
        {
            InitializeComponent();
        }

        private void btnOK_Click(object sender,EventArgs e)
        {
            this.Controls.Add(grdSearch);
            getData();
        }
        private void getData()
        {
            using (SqlConnection connection = new SqlConnection("Data Source = localhost; Initial Catalog = MyWindowsFormApplication; Integrated Security = True"))
            {
                using (SqlCommand cmd = new SqlCommand("EmployeeSearch", connection))
                {


                    connection.Open();
                    cmd.CommandType = CommandType.StoredProcedure;
                    cmd.Parameters.AddWithValue("@Name", txbName.Text);
                    cmd.Parameters.AddWithValue("@Surname", txbSurname.Text);

                    DataTable dt = new DataTable();
                    SqlDataReader rdr = cmd.ExecuteReader();
                    dt.Columns.Add("Number");
                    dt.Columns.Add("Name");
                    dt.Columns.Add("Surname");
                    dt.Columns.Add("Salary");

                    while (rdr.Read())
                    {
                        DataRow dr = dt.NewRow();
                        dr["Number"] = rdr["ID"];
                        dr["Name"] = rdr["Name"];
                        dr["Surname"] = rdr["Surname"];
                        dr["Salary"] = rdr["Salary"];
                        dt.Rows.Add(dr);
                    }
                    grdSearch.DataSource = dt;
                }

            }
            // object k = grdShow.Rows[6].Cells["Number"].Value;
        }
    }
}

