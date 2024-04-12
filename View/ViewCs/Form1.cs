using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ViewCs
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            System.String  message = textBox1.Text;
            int result;
            SampleWrapper.Common.SampleDocument objWrapper = new SampleWrapper.Common.SampleDocument();

            result = objWrapper.testFunc1(message);
            MessageBox.Show("文字列中のアルファベットの個数は " + result);
        }
    }
}
