using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Data;
using System.Windows.Forms;

namespace DZ2
{
    public class AppGateWay
    {
        public void InsertNewApp(Form_Candidate input)
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            try
            {
                con.Open();
                SqlCommand SQLinsert = new SqlCommand("INSERT INTO Application VALUES(@appD,@termD,@cand,@job)",con);
                //SQLinsert.Parameters.AddWithValue("@id", input.tb_id);
                SQLinsert.Parameters.AddWithValue("@appD", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff"));
                SQLinsert.Parameters.AddWithValue("@termD", DateTime.Now.AddMonths(1).Date.ToString("yyyy-MM-dd HH:mm:ss.fff"));
                SQLinsert.Parameters.AddWithValue("@cand", input.tb_id.Text.ToString());
                SQLinsert.Parameters.AddWithValue("@job",
                    input.DGV_Joblist.Rows[input.DGV_Joblist.SelectedCells[0].RowIndex].Cells[0].Value.ToString());
                SQLinsert.ExecuteNonQuery();
            }
            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка добавления заявки",
                         "Ошибка",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            finally
            {
                con.Close();
            }
        }
    }
}