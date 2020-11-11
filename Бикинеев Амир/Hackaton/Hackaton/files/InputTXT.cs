using System;
using System.Collections.Generic;
using System.Text;
using System.Data;
using Hackaton.files;
using System.IO;
namespace Hackaton.files
{
    class InputTXT:Input
    {
        private DataTable ConvertTxtToData(string data)
        {
            DataTable dataTable = new DataTable();
            bool columnsAdded = false;
            int i;
            foreach (string row in data.Split("\r\n"))
            {
                i = 0;
                DataRow dataRow = dataTable.NewRow();
                foreach (string cell in row.Split())
                {
                    if (!columnsAdded)
                    {
                        DataColumn col = new DataColumn();
                        dataTable.Columns.Add(col);
                    }
                    dataRow[i] = cell;
                    i += 1; 
                }
                columnsAdded = true;
                dataTable.Rows.Add(dataRow);
            }
            return dataTable;
        }
        public Dictionary<string,DataTable> Read(string path)
        {
            Dictionary<string, DataTable> table=new Dictionary<string, DataTable>();
            string[] nameOfFiles;
            nameOfFiles = Find(path);
            for(int i = 0; i < nameOfFiles.Length; i++)
            {
                table.Add(nameOfFiles[i].Substring(path.Length*2,nameOfFiles[i].Length- path.Length * 2-4), ConvertTxtToData(File.ReadAllText(nameOfFiles[i])));
            }
            return table;
        }

    }
}
