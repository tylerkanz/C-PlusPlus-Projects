using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Month2
{
    public partial class Form1 : Form
    {
        int monthNum;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            monthNum = int.Parse(textBox1.Text);

            switch (monthNum)
            {
                case 1:
                    label2.Text = "The month is January!";
                    break;
                case 2:
                    label2.Text = "The month is Feburary!";
                    break;
                case 3:
                    label2.Text = "The month is March!";
                    break;
                case 4:
                    label2.Text = "The month is April!";
                    break;
                case 5:
                    label2.Text = "The month is May!";
                    break;
                case 6:
                    label2.Text = "The month is June!";
                    break;
                case 7:
                    label2.Text = "The month is July!";
                    break;
                case 8:
                    label2.Text = "The month is August!";
                    break;
                case 9:
                    label2.Text = "The month is September!";
                    break;
                case 10:
                    label2.Text = "The month is October!";
                    break;
                case 11:
                    label2.Text = "The month is November!";
                    break;
                case 12:
                    label2.Text = "The month is December!";
                    break;
                default:
                    label2.Text = "Incorrect Format!";
                    break;
            }

            label2.Visible = true;

        }
    }
}
