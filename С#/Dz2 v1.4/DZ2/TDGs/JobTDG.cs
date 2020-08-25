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
    /*  Table Gateway Rules
        Одна таблица - один шлюз
         */
    public class JobGateWay
    {
        private DataSet dataSet = new DataSet();

        public DataSet GetFullList()
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            SqlCommand SQLgetalljobs = new SqlCommand("SELECT * FROM JobPost", con);
            try
            {
                con.Open();
                SqlDataAdapter da = new SqlDataAdapter(SQLgetalljobs);
                da.Fill(dataSet);
                return dataSet;
            }
            catch (Exception)
            {
                MessageBox.Show(
                    "Ошибка вывода списка вакансий",
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