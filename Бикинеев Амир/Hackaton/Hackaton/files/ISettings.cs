using System;
using System.Collections.Generic;
using System.Data;
using System.Text;

namespace Hackaton.files
{
    interface ISettings
    {
        Dictionary<string, DataTable> Region(string region);
        DataTable Type(string type, Dictionary<string, DataTable> data);
        DataTable AveragePerPerson(int num);
        DataTable Time( DataTable data,string time,bool oneDay);
        DataTable Rate(string time, bool oneDay = false);
    }
}
