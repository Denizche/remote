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
        public Form_Candidate()
        {
            InitializeComponent();
            ApllicationService apllicationService = new ApllicationService();
            apllicationService.GetJobList(this);
        }
        

        private void btn_showtable_Click(object sender, EventArgs e)
        {
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

        private void btn_Clear_Click(object sender, EventArgs e)
        {
        }

        private void Form_Candidate_Load(object sender, EventArgs e)
        {

        }

    }
}
