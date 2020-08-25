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
    public class CandGateWay
    {
        private DataSet dataSet = new DataSet();
        public void InsertNewCandidate(string surname, string name, string middlename, string email)
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            try
            {
                con.Open();
                SqlCommand SQLinsert = new SqlCommand("INSERT INTO Candidate VALUES(@surname,@name,@midname,@email,@status)",con);
                //SQLinsert.Parameters.AddWithValue("@id", input.tb_id);
                SQLinsert.Parameters.AddWithValue("@surname", surname);
                SQLinsert.Parameters.AddWithValue("@name", name );
                SQLinsert.Parameters.AddWithValue("@midname", middlename);
                SQLinsert.Parameters.AddWithValue("@email", email);
                SQLinsert.Parameters.AddWithValue("@status", "Новый кандидат");
                SQLinsert.ExecuteNonQuery();
            }
            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка добавления кандидата",
                         "Ошибка",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            finally
            {
                con.Close();
            }
        }
        public int FindIdCandidate(string surname, string name, string email)
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            try
            {
                con.Open();
                SqlCommand SQLfind = new SqlCommand("SELECT Id FROM Candidate WHERE surname=@surname AND name=@name AND email=@email", con);
                //SQLinsert.Parameters.AddWithValue("@id", input.tb_id);
                SQLfind.Parameters.AddWithValue("@surname", surname);
                SQLfind.Parameters.AddWithValue("@name", name);
                SQLfind.Parameters.AddWithValue("@email", email);
                SqlDataAdapter da = new SqlDataAdapter(SQLfind);
                da.Fill(dataSet);
                return Convert.ToInt32(dataSet.Tables[0].Rows[0][0]);
            }
            catch (Exception)
            {
                return -1;
            }
            finally
            {
                con.Close();
            }
        }
    }
}