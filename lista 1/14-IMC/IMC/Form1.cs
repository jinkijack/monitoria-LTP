using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IMC
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void sistemadecalculoimc_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void btncalcular_Click(object sender, EventArgs e)
        {
            double peso, altura,imc;
            peso = Convert.ToDouble (pesotxt.Text);
            altura = Convert.ToDouble(alturatxt.Text);
            imc = peso / (altura * altura);
            if (imc < 20)
                lblresultado.Text = "Abaixo do peso\n Seu IMC: " + Math.Round(imc, 2) ;
            else
                if (imc >= 20 && imc < 25)
                    lblresultado.Text = "Peso normal\n Seu IMC: " + Math.Round(imc, 2);
            else
                if(imc>=25&&imc<30)
                    lblresultado.Text = "Sobre peso\n Seu IMC: " + Math.Round(imc, 2);
            else
                if(imc>=30&&imc<40)
                    lblresultado.Text = "Obeso\n Seu IMC: " + Math.Round(imc, 2);
            else
                lblresultado.Text = "Obeso Mórbido\n Seu IMC: " + Math.Round(imc, 2);
        }
    }
}
