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
        

        private void btn_sendapp_Click(object sender, EventArgs e)    //Подать заявку
        {
            if (tb_email != null && tb_name != null && tb_surname != null)
            {
                var selected = this.DGV_Joblist.Rows[this.DGV_Joblist.SelectedCells[0].RowIndex].Cells[0].Value.ToString();
                if (applicationService.FindCandidate(this).DataSetName != "ErrData")
                {
                    this.tb_id.Text = applicationService.FindCandidate(this).ToString();
                }
                else { 
                    applicationService.InsertNewCandidate(this);
                    var id = Convert.ToInt32(applicationService.FindCandidate(this).Tables[0].Rows[0][0]);
                    this.tb_id.Text = id.ToString();
                }
                applicationService.InsertNewApplication(this);
                MessageBox.Show("Зарегистрирована завявка кандидата №"
                    + applicationService.FindCandidate(this) + " на вакансию №"+selected,
                         "Успешно",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
            else {
                MessageBox.Show("Заполните персональную информацию",
                         "Ошибка",
                         MessageBoxButtons.OK,
                         MessageBoxIcon.Information);
            }
             
        }

        private void btn_search_Click(object sender, EventArgs e)
        {
        }

        private void btn_add_Click(object sender, EventArgs e)
        {
        }

        private void btn_delete_Click(object sender, EventArgs e)
        {

        }

        private void btn_Crit_Click(object sender, EventArgs e)
        {
        }

        private void Form_Candidate_Load(object sender, EventArgs e)
        {

        }

        private void DGV_Joblist_RowStateChanged(object sender, DataGridViewRowStateChangedEventArgs e)
        {
            
        }
        private void Label6_Click(object sender, EventArgs e)
        {

        }

        private void DGV_Crit_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void DGV_Joblist_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            applicationService.GetCritList(this, e);
        }

        private void Tb_surname_TextChanged(object sender, EventArgs e)
        {
            applicationService.AllCandToTB(this);
        }
    }
        //private void DGV_Joblist_SelectionChanged(object sender, DataGridViewCellEventArgs e)
        //{
        //    apllicationService.GetCritList(this, e);
        //}
}
