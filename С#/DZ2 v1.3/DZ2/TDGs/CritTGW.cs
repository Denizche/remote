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
    class CritGateWay
    {
        private DataSet dataSet = new DataSet();
        public DataSet GetFullList()
        {
            dataSet = new DataSet();
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            SqlCommand SQLgetallcrit = new SqlCommand("SELECT * FROM Criteria",con);
            try
            {
                con.Open();
                SqlDataAdapter da = new SqlDataAdapter(SQLgetallcrit);
                da.Fill(dataSet);
                return dataSet;
            }

            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка вывода списка критериев",
                         "Ошибка",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
                return dataSet;
            }
            finally
            {
                con.Close();
            }
        }
        public DataSet GetListById(int id)
        {
            dataSet = new DataSet();
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            SqlCommand SQLgetcritbyid = new SqlCommand("SELECT * FROM Criteria WHERE jobId = @id", con);
            try
            {
                con.Open();
                SQLgetcritbyid.Parameters.AddWithValue("@id", id);  //Ищем критерии по айди работы
                SqlDataAdapter da = new SqlDataAdapter(SQLgetcritbyid);
                da.Fill(dataSet);
                return dataSet;
            }

            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка вывода списка критериев",
                         "Ошибка",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
                return dataSet;
            }
            finally
            {
                con.Close();
            }
        }
        
    }
}
