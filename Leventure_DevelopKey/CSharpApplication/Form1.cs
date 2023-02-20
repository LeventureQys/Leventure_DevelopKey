using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CSharpApplication
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            Process[] listp = Process.GetProcesses();

            for(int i = 0; i < listp.Length; ++i)
            {
                if(listp[i].ProcessName == "Leventure_InfoMode")
                {
                    int j = i;
                }
                if(listp[i].ProcessName == "Leventure_DeveloperMode")
                {
                    int j = i;
                }
            }
        }
    }
}
