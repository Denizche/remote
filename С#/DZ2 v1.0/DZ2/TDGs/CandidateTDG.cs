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
        Получает объект сервисного слоя - возвращает объект сервисного слоя   
         */
    public class CandGateWay
    {
        private SqlCommand SQLinsert = new SqlCommand("INSERT INTO Candidate VALUES(@surname,@name,@midname,@email,@status)");
        public void InsertNewCandidate(Form_Candidate input)
        {
            ConStr w1 = new ConStr();
            SqlConnection con = new SqlConnection(w1.connection);
            try
            {
                con.Open();
                //SQLinsert.Parameters.AddWithValue("@id", input.tb_id);
                SQLinsert.Parameters.AddWithValue("@surname", input.tb_surname.ToString());
                SQLinsert.Parameters.AddWithValue("@name", input.tb_name.ToString());
                SQLinsert.Parameters.AddWithValue("@midname", input.tb_middlename.ToString());
                SQLinsert.Parameters.AddWithValue("@email", input.tb_email.ToString());
                SQLinsert.Parameters.AddWithValue("@status", "Новый кандидат");
                SQLinsert.ExecuteNonQuery();
            }
            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка",
                         "Ошибка вывода списка критериев",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            finally
            {
                con.Close();
            }
        }
    }
    /*
    public class DM_Student
    {
        static string str1; //Объявление строки для ConStr
        static SqlConnection con;


        public DM_Student(TM_Student tM_Student)
        {
            TM_Student dM_Student = new TM_Student();
            dM_Student = tM_Student;
            ConStr w1 = new ConStr();
            str1 = w1.connection;
            con = new SqlConnection(str1);
        }
        public DM_Student()
        {
            ConStr w1 = new ConStr();
            str1 = w1.connection;
            con = new SqlConnection(str1);

        }

        public TM_Student DM_Student_Get_Student(TM_Student tM_Student)
        {
            try
            {
                con.Open();
                SqlCommand cSearch = new SqlCommand("select * from Student where id_student = @id", con);   //Формирование запроса по коду страны
                cSearch.Parameters.AddWithValue("@id", tM_Student.tm_id_student);  //Получение кода для поиска
                SqlDataReader reader = cSearch.ExecuteReader();
                reader.Read();
                tM_Student.tm_student_last_name = Convert.ToString(reader[1]);
                tM_Student.tm_student_first_name = Convert.ToString(reader[2]);
                tM_Student.tm_student_middle_name = Convert.ToString(reader[3]);
                tM_Student.tm_student_ticket_number = Convert.ToString(reader[4]);
                tM_Student.tm_student_record_book = Convert.ToInt32(reader[5]);
                tM_Student.tm_student_group_number = Convert.ToString(reader[6]);
                tM_Student.tm_student_course_number = Convert.ToInt32(reader[7]);
                reader.Close();
                cSearch.ExecuteNonQuery();
            }
            catch (Exception)
            {
                MessageBox.Show(
                     "Поиск не дал результатов, попробуйте ещё раз",
                     "Сообщение",
                     MessageBoxButtons.OK,
                     MessageBoxIcon.Information);
                tM_Student.tm_id_student = null;
            }
            finally
            {
                con.Close();
            }
            return tM_Student;
        }

        public TM_Student DM_Student_Create (TM_Student tM_Student)
        {
            con.Open(); //Открытие соединения с БД
            SqlCommand CreateStudent = new SqlCommand("insert into Student values (@stud_last_name, " +
                "@stud_first_name, @stud_middle_name, @stud_ticket_number, @stud_record_book, @stud_group_number, " +
                "@stud_course_number)", con);   //Формирование команды для добавления данных в таблицу

            CreateStudent.Parameters.AddWithValue("@stud_last_name", tM_Student.tm_student_last_name);
            CreateStudent.Parameters.AddWithValue("@stud_first_name", tM_Student.tm_student_first_name);
            CreateStudent.Parameters.AddWithValue("@stud_middle_name", tM_Student.tm_student_middle_name);
            CreateStudent.Parameters.AddWithValue("@stud_ticket_number", tM_Student.tm_student_ticket_number);
            CreateStudent.Parameters.AddWithValue("@stud_record_book", tM_Student.tm_student_record_book);
            CreateStudent.Parameters.AddWithValue("@stud_group_number", tM_Student.tm_student_group_number);
            CreateStudent.Parameters.AddWithValue("@stud_course_number", tM_Student.tm_student_course_number);
            CreateStudent.ExecuteNonQuery(); //Выполнение инструкции Transact-SQL

            con.Close();
            return tM_Student;
        }

        public TM_Student DM_Student_Delete(TM_Student tM_Student)
        {
            try
            {
                con.Open(); //Открытие соединения с БД
                SqlCommand DeleteStudent = new SqlCommand("Delete from Student where id_student = @id", con);

                DeleteStudent.Parameters.AddWithValue("@id", tM_Student.tm_id_student);
                DeleteStudent.ExecuteNonQuery(); //Выполнение инструкции Transact-SQL
            }
            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка",
                         "Сообщение",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            finally
            {
                con.Close();
            }
            return tM_Student;
        }

        public TM_Student DM_Student_Select_All(TM_Student tM_Student)
        {
            try
            {
                con.Open();
                SqlCommand AllStudents = new SqlCommand("SELECT * FROM Student ORDER BY stud_last_name", con);
                SqlDataReader reader = AllStudents.ExecuteReader();
                List<string[]> data = new List<string[]>();
                while (reader.Read())
                {
                    data.Add(new string[8]);

                    data[data.Count - 1][0] = reader[0].ToString();
                    data[data.Count - 1][1] = reader[1].ToString();
                    data[data.Count - 1][2] = reader[2].ToString();
                    data[data.Count - 1][3] = reader[3].ToString();
                    data[data.Count - 1][4] = reader[4].ToString();
                    data[data.Count - 1][5] = reader[5].ToString();
                    data[data.Count - 1][6] = reader[6].ToString();
                    data[data.Count - 1][7] = reader[7].ToString();

                }
                reader.Close();
                AllStudents.ExecuteNonQuery();
                tM_Student.tm_record_set = data;
            }
            
            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка",
                         "Сообщение",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            finally
            {
                con.Close();
            }
            return tM_Student;
        }

        public TM_Student DM_Student_Select_By_Last_Name(TM_Student tM_Student)
        {
            try
            {
                con.Open();
                SqlCommand AllStudents = new SqlCommand("SELECT * FROM Student WHERE stud_last_name=@last_name ORDER BY stud_last_name", con);
                AllStudents.Parameters.AddWithValue("@last_name", tM_Student.tm_student_last_name);
                SqlDataReader reader = AllStudents.ExecuteReader();
                List<string[]> data = new List<string[]>();
                while (reader.Read())
                {
                    data.Add(new string[8]);

                    data[data.Count - 1][0] = reader[0].ToString();
                    data[data.Count - 1][1] = reader[1].ToString();
                    data[data.Count - 1][2] = reader[2].ToString();
                    data[data.Count - 1][3] = reader[3].ToString();
                    data[data.Count - 1][4] = reader[4].ToString();
                    data[data.Count - 1][5] = reader[5].ToString();
                    data[data.Count - 1][6] = reader[6].ToString();
                    data[data.Count - 1][7] = reader[7].ToString();

                }
                reader.Close();
                AllStudents.ExecuteNonQuery();
                tM_Student.tm_record_set = data;
            }

            catch (Exception)
            {
                MessageBox.Show(
                         "Ошибка",
                         "Сообщение",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            finally
            {
                con.Close();
            }
            return tM_Student;
        }


    }*/
}
/*LIKE '%" + _Student._c_student_last_name + "%'*/
/*WHERE stud_last_name=@last_name ORDER BY stud_last_name*/
