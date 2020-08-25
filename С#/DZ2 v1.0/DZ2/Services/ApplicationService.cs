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
    public class ApllicationService
    {
        private readonly JobGateWay _jGateway = new JobGateWay();
        private readonly CritGateWay _crGateway = new CritGateWay();
        private readonly CandGateWay _cGateway = new CandGateWay();

        public void GetJobList(Form_Candidate input)
        {
            DataTable dt = new DataTable();
            dt.Columns.Add("id", typeof(int));
            dt.Columns.Add("jobCat", typeof(string));
            dt.Columns.Add("jobName", typeof(string));
            dt.Columns.Add("jobDesc", typeof(string));
            dt.Columns.Add("numOfCand", typeof(int));
            var lesting = _jGateway.GetFullList();
            input.DGV_Joblist.DataSource = lesting;
        }
        public List<Criteria> GetCritList()
        {
            return _crGateway.GetFullList();
        }
        public void InsertNewCandidate(Form_Candidate input)
        {
            _cGateway.InsertNewCandidate(input);
        }

    }
}
