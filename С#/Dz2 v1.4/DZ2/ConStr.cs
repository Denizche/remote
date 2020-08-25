using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;

namespace DZ2
{
    public class ConStr
    {
        public string connection = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=D:\Projects\С#\DZ2 v1.3\DZ2\Database1.mdf;Integrated Security=True";     //Строка подключения

        public ConStr()
        {
        }
    }
}
