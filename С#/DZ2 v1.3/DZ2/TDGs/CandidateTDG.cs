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
        public void InsertNewCandidate(Form_Candidate input)
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            try
            {
                con.Open();
                SqlCommand SQLinsert = new SqlCommand("INSERT INTO Candidate VALUES(@surname,@name,@midname,@email,@status)",con);
                //SQLinsert.Parameters.AddWithValue("@id", input.tb_id);
                SQLinsert.Parameters.AddWithValue("@surname", input.tb_surname.Text.ToString());
                SQLinsert.Parameters.AddWithValue("@name", input.tb_name.Text.ToString());
                SQLinsert.Parameters.AddWithValue("@midname", input.tb_middlename.Text.ToString());
                SQLinsert.Parameters.AddWithValue("@email", input.tb_email.Text.ToString());
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
        public DataSet FindCandidate(Form_Candidate input)
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            try
            {
                if (string.IsNullOrEmpty(input.tb_surname.Text)
                    && string.IsNullOrEmpty(input.tb_name.Text)
                    && string.IsNullOrEmpty(input.tb_email.Text))
                {
                    con.Open();
                    //SqlCommand SQLfind = new SqlCommand
                    //("SELECT Id FROM Candidate WHERE surname=@surname AND name=@name AND email=@email", con);
                    SqlCommand SQLfind = new SqlCommand
                        ("SELECT * FROM Candidate WHERE surname=@surname AND name=@name AND email=@email", con);
                    //SQLinsert.Parameters.AddWithValue("@id", input.tb_id);
                    SQLfind.Parameters.AddWithValue("@surname", input.tb_surname.Text.ToString());
                    SQLfind.Parameters.AddWithValue("@name", input.tb_name.Text.ToString());
                    SQLfind.Parameters.AddWithValue("@email", input.tb_email.Text.ToString());
                    SqlDataAdapter da = new SqlDataAdapter(SQLfind);
                    da.Fill(dataSet);
                    dataSet.DataSetName = "Candidate";
                    return dataSet;
                }
                else if (string.IsNullOrEmpty(input.tb_id.Text))
                {
                    con.Open();
                    //SqlCommand SQLfind = new SqlCommand
                    //("SELECT Id FROM Candidate WHERE surname=@surname AND name=@name AND email=@email", con);
                    SqlCommand SQLfind = new SqlCommand
                        ("SELECT * FROM Candidate WHERE id=@id", con);
                    //SQLinsert.Parameters.AddWithValue("@id", input.tb_id);
                    SQLfind.Parameters.AddWithValue("@id", input.tb_id.Text.ToString());
                    SqlDataAdapter da = new SqlDataAdapter(SQLfind);
                    da.Fill(dataSet);
                    dataSet.DataSetName = "Candidate";
                    return dataSet;
                }
                else {
                    dataSet.DataSetName = "ErrData";
                    if (string.IsNullOrEmpty(input.tb_surname.Text))
                        throw new ArgumentNullException(nameof(input.tb_surname.Text), "Введите вашу фамилию");
                    else if (string.IsNullOrEmpty(input.tb_name.Text))
                        throw new ArgumentNullException(nameof(input.tb_name.Text), "Введите ваше имя");
                    else if (string.IsNullOrEmpty(input.tb_email.Text))
                        throw new ArgumentNullException(nameof(input.tb_surname.Text), "Введите ваш Email");
                    else
                        throw new ArgumentNullException();
                }
            }
            catch (Exception)
            {
                dataSet.DataSetName = "ErrData";
                return dataSet;
            }
            finally
            {
                con.Close();
            }
        }

        public void AllCandToTB(Form_Candidate input)
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            AutoCompleteStringCollection mycollection = new AutoCompleteStringCollection();
            SqlCommand SQLallcand = new SqlCommand("SELECT surname FROM Candidate", con);
            try
            {
                con.Open();
                SqlDataReader dr = SQLallcand.ExecuteReader();
                while (dr.Read())
                {
                    mycollection.Add(dr.GetString(0));
                }
                input.tb_surname.AutoCompleteCustomSource = mycollection;
                input.tb_surname.AutoCompleteMode = AutoCompleteMode.SuggestAppend;
                input.tb_surname.AutoCompleteSource = AutoCompleteSource.CustomSource;
            }

            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка вывода списка кандидатов",
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
