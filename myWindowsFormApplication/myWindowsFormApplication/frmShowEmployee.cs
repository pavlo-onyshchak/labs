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
    public partial class frmShowEmployee : Form
    {
        public frmShowEmployee()
        {
            InitializeComponent();
            getData();
        }
        private void getData()
        {
            using (SqlConnection connection = new SqlConnection("Data Source = localhost; Initial Catalog = MyWindowsFormApplication; Integrated Security = True"))
            {
                connection.Open();
                //SqlDataAdapter adapter = new SqlDataAdapter("SELECT * FROM Employee", connection);
                SqlCommand cmd = new SqlCommand("SELECT * FROM Employee",connection);
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
                grdShow.DataSource = dt;
            }

            // object k = grdShow.Rows[6].Cells["Number"].Value;
         }
    }
}
