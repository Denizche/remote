namespace DZ2
{
    partial class Form_Candidate
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.tb_id = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.tb_surname = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.tb_name = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.tb_middlename = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.tb_email = new System.Windows.Forms.TextBox();
            this.DGV_Joblist = new System.Windows.Forms.DataGridView();
            this.btn_showtable = new System.Windows.Forms.Button();
            this.DGV_Crit = new System.Windows.Forms.DataGridView();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.DGV_Joblist)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.DGV_Crit)).BeginInit();
            this.SuspendLayout();
            // 
            // tb_id
            // 
            this.tb_id.Location = new System.Drawing.Point(11, 29);
            this.tb_id.Name = "tb_id";
            this.tb_id.ReadOnly = true;
            this.tb_id.Size = new System.Drawing.Size(108, 20);
            this.tb_id.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(9, 15);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(75, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "№ Кандидата";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(8, 54);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(56, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Фамилия";
            // 
            // tb_surname
            // 
            this.tb_surname.Location = new System.Drawing.Point(12, 70);
            this.tb_surname.Name = "tb_surname";
            this.tb_surname.Size = new System.Drawing.Size(220, 20);
            this.tb_surname.TabIndex = 2;
            this.tb_surname.Text = "Чебурек";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(9, 93);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(29, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Имя";
            // 
            // tb_name
            // 
            this.tb_name.Location = new System.Drawing.Point(11, 109);
            this.tb_name.Name = "tb_name";
            this.tb_name.Size = new System.Drawing.Size(220, 20);
            this.tb_name.TabIndex = 4;
            this.tb_name.Text = "Наждаф";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(10, 132);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(54, 13);
            this.label4.TabIndex = 7;
            this.label4.Text = "Отчество";
            // 
            // tb_middlename
            // 
            this.tb_middlename.Location = new System.Drawing.Point(11, 148);
            this.tb_middlename.Name = "tb_middlename";
            this.tb_middlename.Size = new System.Drawing.Size(220, 20);
            this.tb_middlename.TabIndex = 6;
            this.tb_middlename.Text = "Ахмалдартарович";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(9, 170);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(32, 13);
            this.label5.TabIndex = 9;
            this.label5.Text = "Email";
            // 
            // tb_email
            // 
            this.tb_email.Location = new System.Drawing.Point(11, 186);
            this.tb_email.Name = "tb_email";
            this.tb_email.Size = new System.Drawing.Size(220, 20);
            this.tb_email.TabIndex = 8;
            this.tb_email.Text = "ahmaldartarovich@najdaf.com";
            // 
            // DGV_Joblist
            // 
            this.DGV_Joblist.AllowUserToAddRows = false;
            this.DGV_Joblist.AllowUserToDeleteRows = false;
            this.DGV_Joblist.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.DGV_Joblist.Location = new System.Drawing.Point(241, 20);
            this.DGV_Joblist.Name = "DGV_Joblist";
            this.DGV_Joblist.RowHeadersWidth = 51;
            this.DGV_Joblist.Size = new System.Drawing.Size(845, 264);
            this.DGV_Joblist.TabIndex = 20;
            this.DGV_Joblist.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.DGV_Joblist_CellContentClick);
            // 
            // btn_showtable
            // 
            this.btn_showtable.Location = new System.Drawing.Point(823, 303);
            this.btn_showtable.Name = "btn_showtable";
            this.btn_showtable.Size = new System.Drawing.Size(263, 77);
            this.btn_showtable.TabIndex = 21;
            this.btn_showtable.Text = "Подать заявку";
            this.btn_showtable.UseVisualStyleBackColor = true;
            this.btn_showtable.Click += new System.EventHandler(this.btn_showtable_Click);
            // 
            // DGV_Crit
            // 
            this.DGV_Crit.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.DGV_Crit.Location = new System.Drawing.Point(241, 303);
            this.DGV_Crit.Name = "DGV_Crit";
            this.DGV_Crit.RowHeadersWidth = 51;
            this.DGV_Crit.Size = new System.Drawing.Size(567, 77);
            this.DGV_Crit.TabIndex = 25;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(651, 0);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(56, 13);
            this.label6.TabIndex = 26;
            this.label6.Text = "Вакансии";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(593, 287);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(187, 13);
            this.label7.TabIndex = 27;
            this.label7.Text = "Требования к выбранной вакансии";
            // 
            // Form_Candidate
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1098, 392);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.tb_id);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.DGV_Crit);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.tb_surname);
            this.Controls.Add(this.btn_showtable);
            this.Controls.Add(this.DGV_Joblist);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.tb_email);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.tb_middlename);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.tb_name);
            this.Name = "Form_Candidate";
            this.Text = "Регистрация кандидата";
            ((System.ComponentModel.ISupportInitialize)(this.DGV_Joblist)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.DGV_Crit)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        public System.Windows.Forms.TextBox tb_id;//заменено на public
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        public System.Windows.Forms.TextBox tb_surname;//заменено на public
        private System.Windows.Forms.Label label3;
        public System.Windows.Forms.TextBox tb_name;//заменено на public
        private System.Windows.Forms.Label label4;
        public System.Windows.Forms.TextBox tb_middlename;//заменено на public
        private System.Windows.Forms.Label label5;
        public System.Windows.Forms.TextBox tb_email;//заменено на public
        public  System.Windows.Forms.DataGridView DGV_Joblist;//заменено на public
        private System.Windows.Forms.Button btn_showtable;
        public System.Windows.Forms.DataGridView DGV_Crit;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
    }
}

