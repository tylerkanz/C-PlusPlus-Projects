using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MonthA
{
    public partial class Form1 : Form
    {
        string month;
        int monthnum;

        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            monthnum = int.Parse(textBox1.Text);
            

            if (monthnum == 1)
            {
                month = "The month is January!";
            }

            else if (monthnum == 2)
            {
                month = "The month is Feburary!";
            }

            else if (monthnum == 3)
            {
                month = "The month is March!";                
            }

            else if (monthnum == 4)
            {
                month = "The month is April!";
            }

            else if (monthnum == 5)
            {
                month = "The month is May!";
            }

            else if (monthnum == 6)
            {
                month = "The month is June!";
            }

            else if (monthnum == 7)
            {
                month = "The month is July!";
            }

            else if (monthnum == 8)
            {
                month = "The month is August!";
            }

            else if (monthnum == 9)
            {
                month = "The month is September!";
            }

            else if (monthnum == 10)
            {
                month = "The month is October!";
            }

            else if (monthnum == 11)
            {
                month = "The month is November!";
            }

            else if (monthnum == 12)
            {
                month = "The month is December!";
            }

            else
            {
                month = "Incorrect Format"; 
            }


            //Label Creation
            label2.Text = month;
            label2.Visible = true;


        }
    }
}
