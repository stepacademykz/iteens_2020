using System;
using System.Collections.Generic;
using System.Data;
using System.Text;

namespace Hackaton.files
{
    class DataDictionaries
    {
        public Dictionary<string, DataTable> kAuto;
        public Dictionary<string, DataTable> midMileage;
        public DataDictionaries(Dictionary<string, DataTable> kAuto, Dictionary<string, DataTable> midMileage)
        {
            this.kAuto = kAuto;
            this.midMileage = midMileage;
        }
        public DataDictionaries() { }
    }
}
