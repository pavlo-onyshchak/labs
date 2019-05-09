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
    public partial class frmRemoveEmployee : Form
    {
        public frmRemoveEmployee()
        {
            InitializeComponent();
            getAllData();
        }
        private void btnSearch_Click(object sender,EventArgs e)
        {
            getSearchedData();

        }
        private void btnDelete_Click(object sender, EventArgs e)
        {
            getAllData();
        }

        private void grdCell_Click(object sender, DataGridViewCellEventArgs e)
        {
            int k = e.RowIndex;
            btnDelete.Enabled = true;
            DeleteData(e);
        }
        private void getAllData()
        {
            using (SqlConnection connection = new SqlConnection("Data Source = DESKTOP-CLTQNMO; Initial Catalog = MyWindowsFormApplication; Integrated Security = True"))
            {
                connection.Open();
                //SqlDataAdapter adapter = new SqlDataAdapter("SELECT * FROM Employee", connection);
                SqlCommand cmd = new SqlCommand("SELECT * FROM Tourist", connection);
                DataTable dt = new DataTable();
                SqlDataReader rdr = cmd.ExecuteReader();


                //dt.Columns.Add("Number");
                dt.Columns.Add("Name");// dt.Columns.Add("Name");
                dt.Columns.Add("Surname");
                dt.Columns.Add("Sel.Country");
                dt.Columns.Add("Day Count");
                dt.Columns.Add("Total Price");

                while (rdr.Read())
                {
                    DataRow dr = dt.NewRow();
                    //dr["Number"] = rdr["ID"];
                    dr["Name"] = rdr["Name"];
                    dr["Surname"] = rdr["Surname"];
                    dr["Sel.Country"] = rdr["SelectedCountry"];
                    dr["Day Count"] = rdr["DayCount"];
                    dr["Total Price"] = rdr["TotalPrice"];
                    dt.Rows.Add(dr);
                }
                grdDeleteEmployee.DataSource = dt;
            }

        }

        private void getSearchedData()
        {
            using (SqlConnection connection = new SqlConnection("Data Source = DESKTOP-CLTQNMO; Initial Catalog = MyWindowsFormApplication; Integrated Security = True"))
            {
                using (SqlCommand cmd = new SqlCommand("TouristSearch", connection))
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
                    grdDeleteEmployee.DataSource = dt;
                }

            }

        }
        private void DeleteData(DataGridViewCellEventArgs e)
        {
            using (SqlConnection connection = new SqlConnection("Data Source = DESKTOP-CLTQNMO; Initial Catalog = MyWindowsFormApplication; Integrated Security = True"))
            {
                using (SqlCommand cmd = new SqlCommand("DeleteTourist", connection))
                {

                    connection.Open();
                    cmd.CommandType = CommandType.StoredProcedure;
                    cmd.Parameters.AddWithValue("@Name", grdDeleteEmployee.Rows[e.RowIndex].Cells["Name"].Value);  //object k = grdShow.Rows[6].Cells["Number"].Value;
                    cmd.Parameters.AddWithValue("@Surname", grdDeleteEmployee.Rows[e.RowIndex].Cells["Surname"].Value);
                    cmd.ExecuteNonQuery();
                 }

            }


        }
    }
}
