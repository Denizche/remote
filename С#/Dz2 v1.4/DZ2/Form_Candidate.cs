using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DZ2
{
    
    public partial class Form_Candidate : Form
    {
        ApplicationService applicationService = new ApplicationService();
        public Form_Candidate()
        {

            InitializeComponent();

            applicationService.GetJobList(this);
            DGV_Joblist.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.AllCells;
            DGV_Joblist.CurrentCell = null;
        }

        private bool IsValidEmail(string email)
        {
            try
            {
                var addr = new System.Net.Mail.MailAddress(email);
                return addr.Address == email;
            }
            catch
            {
                return false;
            }
        }
        private void btn_showtable_Click(object sender, EventArgs e)    //Подать заявку
        {
            
            if (tb_email != null && tb_name != null && tb_surname != null && IsValidEmail(tb_email.Text.ToString()))
            {
                var selected = this.DGV_Joblist.Rows[this.DGV_Joblist.SelectedCells[0].RowIndex].Cells[0].Value.ToString();
                if (applicationService.FindIdCandidate(this) >= 0)
                {
                    this.tb_id.Text = applicationService.FindIdCandidate(this).ToString();
                    var a = 1+1;
                }
                else { 
                    applicationService.InsertNewCandidate(this);
                    this.tb_id.Text = applicationService.FindIdCandidate(this).ToString();
                }
                applicationService.InsertNewApplication(this);
                MessageBox.Show("Зарегистрирована завявка кандидата №"
                    + applicationService.FindIdCandidate(this) + " на вакансию №"+selected,
                         "Успешно",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            else {
                MessageBox.Show("Проверьте правильность введенных данных",
                         "Ошибка",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
             
        }

        private void DGV_Joblist_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            applicationService.GetCritList(this, e);
        }

        //private void DGV_Joblist_SelectionChanged(object sender, DataGridViewCellEventArgs e)
        //{
        //    apllicationService.GetCritList(this, e);
        //}
    }
}
