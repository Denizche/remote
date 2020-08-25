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
    public class ApplicationService
    {
        private readonly JobGateWay _jGateway = new JobGateWay();
        private readonly CritGateWay _crGateway = new CritGateWay();
        private readonly CandGateWay _cGateway = new CandGateWay();
        private readonly AppGateWay _aGateway = new AppGateWay();

        internal CritGateWay CritGateWay
        {
            get => default;
            set
            {
            }
        }

        internal AppGateWay AppGateWay
        {
            get => default;
            set
            {
            }
        }

        internal JobGateWay JobGateWay
        {
            get => default;
            set
            {
            }
        }

        internal CandGateWay CandGateWay
        {
            get => default;
            set
            {
            }
        }

        public void GetJobList(Form_Candidate input)
        {
            input.DGV_Joblist.DataSource = _jGateway.GetFullList().Tables[0] ;
        }
        public void GetCritList(Form_Candidate input, DataGridViewCellEventArgs e)
        {
            var selected = "-1";
            if (e.RowIndex >= 0) { 
                selected = input.DGV_Joblist.Rows[input.DGV_Joblist.SelectedCells[0].RowIndex].Cells[0].Value.ToString();
                //input.DGV_Joblist.Rows[input.DGV_Joblist.SelectedCells[0].RowIndex].Cells[0].Value.ToString();
                //input.DGV_Joblist.Rows[e.RowIndex].Cells[0].Value.ToString();
            }
            int sel = Convert.ToInt32(selected);
            if (sel >= 0)
            { 
                input.DGV_Crit.DataSource = _crGateway.GetListById(sel).Tables[0];
            }
        }
        public void InsertNewCandidate(Form_Candidate input)
        {
            if (_cGateway.FindCandidate(input).DataSetName != "ErrData") {
                input.tb_id.Text =_cGateway.FindCandidate(input).Tables[0].Rows[0][0].ToString();
            }
            else
            {
                _cGateway.InsertNewCandidate(input);
                input.tb_id.Text = _cGateway.FindCandidate(input).Tables[0].Rows[0][0].ToString(); 
            }
        }
        public void AllCandToTB(Form_Candidate input)
        {
            _cGateway.AllCandToTB(input);
        }
        public DataSet FindCandidate(Form_Candidate input)
        {
                return _cGateway.FindCandidate(input);
        }
            public void InsertNewApplication(Form_Candidate input)
        {
            _aGateway.InsertNewApp(input);
        }
    }
}
