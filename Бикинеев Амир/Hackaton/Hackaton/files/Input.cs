using Hackaton.files;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace Hackaton.files
{
    class Input:ISetDefaultPath
    {
        public void SetDefaultPath(string path)
        {
            Directory.SetCurrentDirectory(path);
        }
        public string[] Find(string path)
        {
            return Directory.GetFiles(path);
            
        }
    }
}
