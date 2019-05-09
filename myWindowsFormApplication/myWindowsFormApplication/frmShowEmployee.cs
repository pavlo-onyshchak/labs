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
            using (SqlConnection connection = new SqlConnection("Data Source = DESKTOP-CLTQNMO; Initial Catalog = MyWindowsFormApplication; Integrated Security = True"))
            {

                connection.Open();
                //SqlDataAdapter adapter = new SqlDataAdapter("SELECT * FROM Employee", connection);
                SqlCommand cmd = new SqlCommand("SELECT * FROM Tourist",connection);
                DataTable dt = new DataTable();
                SqlDataReader rdr = cmd.ExecuteReader();

                dt.Columns.Add("Number");
                dt.Columns.Add("Name");
                dt.Columns.Add("Surname");
                dt.Columns.Add("Sel.Country");
                dt.Columns.Add("Day Count");
                dt.Columns.Add("Total Price");


                while (rdr.Read())
                {
                    DataRow dr = dt.NewRow();
                    dr["Number"] = rdr["ID"];
                    dr["Name"] = rdr["Name"];
                    dr["Surname"] = rdr["Surname"];
                    dr["Sel.Country"] = rdr["SelectedCountry"];
                    dr["Day Count"] = rdr["DayCount"];
                    dr["Total Price"] = rdr["TotalPrice"];

                    dt.Rows.Add(dr);
                }
                grdShow.DataSource = dt;
            }

            // object k = grdShow.Rows[6].Cells["Number"].Value;
         }
    }
}
