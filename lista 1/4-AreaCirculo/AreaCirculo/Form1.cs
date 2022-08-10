using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AreaCirculo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            double raio, altura, area;
            const double PI = 3.1416;
            raio = Convert.ToDouble(txtRaio.Text);
            altura = Convert.ToDouble(txtAltura.Text);
            area = 2 * PI * raio * (raio + altura);
            lblResultado.Text = "Resultado: " + Math.Round(area,2);
            txtAltura.Clear();
            txtRaio.Clear();
            txtRaio.Focus();
        }
    }
}
