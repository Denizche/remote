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
        private SqlCommand SQLinsert = new SqlCommand("INSERT INTO Criteria VALUES(@id,@qual,@servYear,@points,@job)");
        private SqlCommand SQLgetallcrit = new SqlCommand("SELECT * FROM Criteria");

        public List<Criteria> GetFullList()
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            List<Criteria> data = new List<Criteria>();
            try
            {
                con.Open();
                SqlDataReader reader = SQLgetallcrit.ExecuteReader();
                //reader.GetName(0) - название первого столбца
                Criteria buf = new Criteria();
                while (reader.Read())
                {
                    buf.Id = Convert.ToInt32(reader[0].ToString());
                    buf.Qualification = reader[1].ToString();
                    buf.ServiceYear = Convert.ToInt32(reader[2].ToString());
                    buf.Points = Convert.ToInt32(reader[3].ToString());
                    buf.JobId = Convert.ToInt32(reader[4].ToString());
                    data.Add(buf);
                }
                reader.Close();
                SQLgetallcrit.ExecuteNonQuery();
                return data;
            }

            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка вывода списка вакансий",
                         "Ошибка",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
                return data;
            }
            finally
            {
                con.Close();
            }
        }
    }
}
