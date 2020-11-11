using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Text;

namespace Hackaton.files
{
    enum regions
    {
        Акмолинская,
        Актюбинская,
        Алматинская,
        Атырауская,
        Западно_Казахстанская,
        Жамбылская,
        Карагандинская,
        Костанайская,
        Кызылординская,
        Мангистауская,
        Павлодарская,
        Северо_Казахстанская_область,
        Туркестанская,
        Восточно_Казахстанская_область

    }
    enum autos
    {
        легкового_транспорта,
        легкового_транспорта_среднего,
        грузового_транспорта,
        автобусного_транспорта,
        мототранспорта
    }
    enum year
    {
        Январь,
        Февраль,
        Март,
        Апрель,
        Май,
        Июнь,
        Июль,
        Август,
        Сентябрь,
        Октябрь,
        Ноябрь,
        Декабрь
    }
    class Manager:ISettings,IConvertKmToCo2,IConvertMonthToDays
    {
        public DataDictionaries data;
        public Manager(DataDictionaries data)
        {
            this.data = data;
        }
        public Dictionary<string,DataTable> Region(string region)
        {
            Dictionary<string, DataTable> dict = new Dictionary<string, DataTable>();
            if(data.midMileage.ContainsKey(region)){
                dict.Add("region", data.midMileage[region]);
                int i = 0;
                DataTable AutoInRegion = new DataTable();
                DataRow dataRow = AutoInRegion.NewRow();
                foreach (string key in data.kAuto.Keys)
                {
                    Console.WriteLine(key);
                    DataColumn col = new DataColumn();
                    AutoInRegion.Columns.Add(col);
                    dataRow[i] = data.kAuto[key].Rows[(int)(regions)Enum.Parse((typeof(regions)), region)][0];
                    i += 1;
                    
                }
                AutoInRegion.Rows.Add(dataRow);
                dict.Add("car", AutoInRegion);
            }
            else
            {
                bool first = true;
                DataTable allRegions = new DataTable();
                foreach(string key in data.midMileage.Keys)
                {
                    if (first)
                    {
                        allRegions = data.midMileage[key];
                        first = false;
                    }
                    else
                    {
                        int j = 0;
                        double valueOfRow;
                        foreach(DataRow row in allRegions.Rows)
                        {
                            j = 0;
                            foreach(DataColumn column in allRegions.Columns)
                            {
                                string firstValue = row[column].ToString();
                                string secondValue =  data.midMileage[key].Rows[0][j].ToString();
                                valueOfRow=double.Parse(firstValue)+double.Parse(secondValue);
                                row[column] = valueOfRow.ToString();
                                j += 1;
                            }
                        }
                    }
                }
                dict.Add("region", allRegions);
                DataTable AutoInRegion = new DataTable();
                DataRow dataRow = AutoInRegion.NewRow();
                int i = 0;
                double value;
                foreach (string key in data.kAuto.Keys)
                {
                    value= double.Parse(data.kAuto[key].Rows[0][0].ToString());
                    for (int j = 1; j < 14; j++) {
                        value += double.Parse(data.kAuto[key].Rows[j][0].ToString());
                    } 
                    DataColumn col = new DataColumn(key);
                    AutoInRegion.Columns.Add(col);
                    dataRow[i] = value.ToString();
                    i += 1;

                }
                AutoInRegion.Rows.Add(dataRow);
                dict.Add("car", AutoInRegion);
            }
            ConvertKmToCo2(dict["region"]);
            return dict;
        }
        public DataTable Type(string type, Dictionary<string, DataTable> dict)
        {
            DataTable table = new DataTable();
            double value;
            if (data.kAuto.ContainsKey(type))
            {
                foreach(DataColumn column in dict["region"].Columns)
                {
                    value = double.Parse(dict["car"].Rows[0][Array.IndexOf(data.kAuto.Keys.ToArray(), type)].ToString())*double.Parse(dict["region"].Rows[(int)(autos)Enum.Parse((typeof(autos)), type)][column].ToString());
                    dict["region"].Rows[(int)(autos)Enum.Parse((typeof(autos)), type)][column] = value.ToString();
                    table.Columns.Add(new DataColumn());
                }
                DataRow newRow = table.NewRow();
                newRow.ItemArray = dict["region"].Rows[(int)(autos)Enum.Parse((typeof(autos)), type)].ItemArray;
                table.Rows.Add(newRow);
                
            }
            else
            {
               for(int i = 0; i < 5; i++)
                {
                    foreach(DataColumn col in dict["region"].Columns)
                    {
                        value = double.Parse(dict["region"].Rows[i][col].ToString()) * double.Parse(dict["car"].Rows[0][Array.IndexOf(data.kAuto.Keys.ToArray(), Enum.GetName(typeof(autos), i))].ToString());
                        dict["region"].Rows[i][col] = value.ToString();
                    }
                }
                table = dict["region"];
            }
            return table;
        }
        public DataTable Time(DataTable table,string time,bool oneDay=false)
        {
            DataTable dataTable = new DataTable();
            dataTable.Columns.Add(new DataColumn(time));
            try
            {
                int cntOfMonth = (int)(year)Enum.Parse((typeof(year)), time);
                int daysInMonth=1;
                if(oneDay)
                    daysInMonth=ConvertMonthToDays(cntOfMonth + 1);                
                foreach(DataRow row in table.Rows)
                {
                    DataRow newRow = dataTable.NewRow();
                    newRow[0]=(double.Parse(row[cntOfMonth].ToString())/daysInMonth).ToString();
                    dataTable.Rows.Add(newRow);
                }
                
            }
            catch
            {
                double value=0;
                foreach (DataRow row in table.Rows)
                {
                    DataRow newRow = dataTable.NewRow();
                    foreach (DataColumn column in table.Columns)
                    {
                        value += double.Parse(row[column].ToString()) ;
                    }
                    newRow[0] = value.ToString();
                    dataTable.Rows.Add(newRow);
                    value = 0;
                }
            }
            return dataTable;
        }
        public DataTable AveragePerPerson(int num= 18632169)
        {
            DataTable table = Type("all", Region("all"));
            DataTable returnTable = new DataTable();
            DataRow newRow = returnTable.NewRow();
            double value;
            for(int i = 0; i < 12; i++)
            {
                value = 0;
                returnTable.Columns.Add(new DataColumn());
                foreach(DataRow row in table.Rows)
                {
                    value+=double.Parse(row[i].ToString())/num;
                }
                newRow[i] = value;
            }
            returnTable.Rows.Add(newRow);
            return returnTable;

        }
        public void ConvertKmToCo2(DataTable table)
        {
            double k=0,value;
            for(int i = 0; i < table.Rows.Count; i++)
            {
                if (i == (int)autos.легкового_транспорта)
                    k = 0.158642;
                else if (i == (int)autos.легкового_транспорта_среднего)
                    k = 0.199352;
                else if (i == (int)autos.грузового_транспорта)
                    k = 0.290802;
                else if (i == (int)autos.мототранспорта)
                    k = 0.1398;
                else if (i == (int)autos.автобусного_транспорта)
                    k = 0.24021;
                foreach (DataColumn col in table.Columns)
                {
                    value = double.Parse(table.Rows[i][col].ToString()) * k;
                    table.Rows[i][col] = value.ToString();
                }
            }
         
        }
        public DataTable Rate(string time, bool oneDay = false)
        {
            Dictionary<string, double> regions=new Dictionary<string, double>();
            DataTable table = new DataTable();
            for(int i = 0; i < 14; i++)
            {
                regions.Add(Enum.GetName(typeof(regions), (regions)i), double.Parse(Time(Type("Все", Region(Enum.GetName(typeof(regions), (regions)i))), time, oneDay).Rows[0][0].ToString()));
            }
            DataRow row = table.NewRow();
            foreach (KeyValuePair<string, double> item in regions.OrderBy(key => key.Value))
            {
                // do something with item.Key and item.Value
                DataColumn col = new DataColumn(item.Key);
                table.Columns.Add(col);
                row[col] = item.Value;
            }
            table.Rows.Add(row);
            return table;
        }
        public int ConvertMonthToDays(int x)
        {
            return (int)(28 + (x + Math.Floor((double)x / 8)) % 2 + 2 % x + 2 * Math.Floor((double)1 / x));
        }
        
    }
}
