namespace IMC
{
    partial class Form1
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.sistemadecalculoimc = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.altura = new System.Windows.Forms.Label();
            this.alturatxt = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.pesotxt = new System.Windows.Forms.TextBox();
            this.btncalcular = new System.Windows.Forms.Button();
            this.lblresultado = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // sistemadecalculoimc
            // 
            this.sistemadecalculoimc.Font = new System.Drawing.Font("Lucida Bright", 25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.sistemadecalculoimc.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.sistemadecalculoimc.Location = new System.Drawing.Point(94, 77);
            this.sistemadecalculoimc.Name = "sistemadecalculoimc";
            this.sistemadecalculoimc.Size = new System.Drawing.Size(534, 55);
            this.sistemadecalculoimc.TabIndex = 0;
            this.sistemadecalculoimc.Text = "Sistema de Cálculo de IMC";
            this.sistemadecalculoimc.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.sistemadecalculoimc.UseMnemonic = false;
            this.sistemadecalculoimc.Click += new System.EventHandler(this.sistemadecalculoimc_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(282, 12);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(129, 62);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 1;
            this.pictureBox1.TabStop = false;
            // 
            // altura
            // 
            this.altura.Font = new System.Drawing.Font("Lucida Bright", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.altura.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.altura.Location = new System.Drawing.Point(97, 148);
            this.altura.Name = "altura";
            this.altura.Size = new System.Drawing.Size(85, 30);
            this.altura.TabIndex = 2;
            this.altura.Text = "Altura:";
            this.altura.UseMnemonic = false;
            // 
            // alturatxt
            // 
            this.alturatxt.Location = new System.Drawing.Point(173, 148);
            this.alturatxt.Name = "alturatxt";
            this.alturatxt.Size = new System.Drawing.Size(455, 20);
            this.alturatxt.TabIndex = 3;
            this.alturatxt.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label1
            // 
            this.label1.Font = new System.Drawing.Font("Lucida Bright", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.label1.Location = new System.Drawing.Point(97, 183);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(85, 30);
            this.label1.TabIndex = 4;
            this.label1.Text = "Peso:";
            this.label1.UseMnemonic = false;
            // 
            // pesotxt
            // 
            this.pesotxt.Location = new System.Drawing.Point(173, 188);
            this.pesotxt.Name = "pesotxt";
            this.pesotxt.Size = new System.Drawing.Size(455, 20);
            this.pesotxt.TabIndex = 5;
            // 
            // btncalcular
            // 
            this.btncalcular.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.btncalcular.Font = new System.Drawing.Font("Microsoft JhengHei UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btncalcular.Location = new System.Drawing.Point(202, 229);
            this.btncalcular.Name = "btncalcular";
            this.btncalcular.Size = new System.Drawing.Size(135, 33);
            this.btncalcular.TabIndex = 6;
            this.btncalcular.Text = "&Calcular";
            this.btncalcular.UseVisualStyleBackColor = false;
            this.btncalcular.Click += new System.EventHandler(this.btncalcular_Click);
            // 
            // lblresultado
            // 
            this.lblresultado.Font = new System.Drawing.Font("Lucida Bright", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblresultado.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.lblresultado.Location = new System.Drawing.Point(169, 275);
            this.lblresultado.Name = "lblresultado";
            this.lblresultado.Size = new System.Drawing.Size(389, 51);
            this.lblresultado.TabIndex = 7;
            this.lblresultado.Text = "Seu IMC:";
            this.lblresultado.UseMnemonic = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblresultado);
            this.Controls.Add(this.btncalcular);
            this.Controls.Add(this.pesotxt);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.alturatxt);
            this.Controls.Add(this.altura);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.sistemadecalculoimc);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label sistemadecalculoimc;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label altura;
        private System.Windows.Forms.TextBox alturatxt;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox pesotxt;
        private System.Windows.Forms.Button btncalcular;
        private System.Windows.Forms.Label lblresultado;
    }
}

