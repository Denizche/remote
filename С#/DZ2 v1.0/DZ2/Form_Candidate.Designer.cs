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
            this.btn_add = new System.Windows.Forms.Button();
            this.btn_delete = new System.Windows.Forms.Button();
            this.DGV_Joblist = new System.Windows.Forms.DataGridView();
            this.id = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.j_cat = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.j_name = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.j_desc = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.j_numofcand = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.j_crit1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.j_crit2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.j_crit3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.btn_showtable = new System.Windows.Forms.Button();
            this.btn_search = new System.Windows.Forms.Button();
            this.btn_Clear = new System.Windows.Forms.Button();
            this.gB_Search = new System.Windows.Forms.GroupBox();
            ((System.ComponentModel.ISupportInitialize)(this.DGV_Joblist)).BeginInit();
            this.gB_Search.SuspendLayout();
            this.SuspendLayout();
            // 
            // tb_id
            // 
            this.tb_id.Location = new System.Drawing.Point(6, 35);
            this.tb_id.Name = "tb_id";
            this.tb_id.Size = new System.Drawing.Size(108, 20);
            this.tb_id.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 16);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(75, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "№ Кандидата";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 62);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(56, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Фамилия";
            // 
            // tb_surname
            // 
            this.tb_surname.Location = new System.Drawing.Point(6, 81);
            this.tb_surname.Name = "tb_surname";
            this.tb_surname.Size = new System.Drawing.Size(220, 20);
            this.tb_surname.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 116);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(29, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Имя";
            // 
            // tb_name
            // 
            this.tb_name.Location = new System.Drawing.Point(12, 135);
            this.tb_name.Name = "tb_name";
            this.tb_name.Size = new System.Drawing.Size(220, 20);
            this.tb_name.TabIndex = 4;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 166);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(54, 13);
            this.label4.TabIndex = 7;
            this.label4.Text = "Отчество";
            // 
            // tb_middlename
            // 
            this.tb_middlename.Location = new System.Drawing.Point(12, 185);
            this.tb_middlename.Name = "tb_middlename";
            this.tb_middlename.Size = new System.Drawing.Size(220, 20);
            this.tb_middlename.TabIndex = 6;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(12, 213);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(32, 13);
            this.label5.TabIndex = 9;
            this.label5.Text = "Email";
            // 
            // tb_email
            // 
            this.tb_email.Location = new System.Drawing.Point(12, 232);
            this.tb_email.Name = "tb_email";
            this.tb_email.Size = new System.Drawing.Size(220, 20);
            this.tb_email.TabIndex = 8;
            // 
            // btn_add
            // 
            this.btn_add.Location = new System.Drawing.Point(12, 415);
            this.btn_add.Name = "btn_add";
            this.btn_add.Size = new System.Drawing.Size(75, 23);
            this.btn_add.TabIndex = 16;
            this.btn_add.Text = "Добавить";
            this.btn_add.UseVisualStyleBackColor = true;
            this.btn_add.Click += new System.EventHandler(this.btn_add_Click);
            // 
            // btn_delete
            // 
            this.btn_delete.Location = new System.Drawing.Point(93, 415);
            this.btn_delete.Name = "btn_delete";
            this.btn_delete.Size = new System.Drawing.Size(75, 23);
            this.btn_delete.TabIndex = 19;
            this.btn_delete.Text = "Удалить";
            this.btn_delete.UseVisualStyleBackColor = true;
            this.btn_delete.Click += new System.EventHandler(this.btn_delete_Click);
            // 
            // DGV_Joblist
            // 
            this.DGV_Joblist.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.DGV_Joblist.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.id,
            this.j_cat,
            this.j_name,
            this.j_desc,
            this.j_numofcand,
            this.j_crit1,
            this.j_crit2,
            this.j_crit3});
            this.DGV_Joblist.Location = new System.Drawing.Point(241, 4);
            this.DGV_Joblist.Name = "DGV_Joblist";
            this.DGV_Joblist.Size = new System.Drawing.Size(845, 396);
            this.DGV_Joblist.TabIndex = 20;
            // 
            // id
            // 
            this.id.HeaderText = "Вакансия №";
            this.id.Name = "id";
            // 
            // j_cat
            // 
            this.j_cat.HeaderText = "Категория";
            this.j_cat.Name = "j_cat";
            // 
            // j_name
            // 
            this.j_name.HeaderText = "Название";
            this.j_name.Name = "j_name";
            // 
            // j_desc
            // 
            this.j_desc.HeaderText = "Описание";
            this.j_desc.Name = "j_desc";
            // 
            // j_numofcand
            // 
            this.j_numofcand.HeaderText = "Требуется кандидатов";
            this.j_numofcand.Name = "j_numofcand";
            // 
            // j_crit1
            // 
            this.j_crit1.HeaderText = "Треб. квалификация";
            this.j_crit1.Name = "j_crit1";
            // 
            // j_crit2
            // 
            this.j_crit2.HeaderText = "Опыт работы";
            this.j_crit2.Name = "j_crit2";
            // 
            // j_crit3
            // 
            this.j_crit3.HeaderText = "Е-Баллы";
            this.j_crit3.Name = "j_crit3";
            // 
            // btn_showtable
            // 
            this.btn_showtable.Location = new System.Drawing.Point(904, 415);
            this.btn_showtable.Name = "btn_showtable";
            this.btn_showtable.Size = new System.Drawing.Size(182, 23);
            this.btn_showtable.TabIndex = 21;
            this.btn_showtable.Text = "Показать выборку";
            this.btn_showtable.UseVisualStyleBackColor = true;
            this.btn_showtable.Click += new System.EventHandler(this.btn_showtable_Click);
            // 
            // btn_search
            // 
            this.btn_search.Location = new System.Drawing.Point(150, 35);
            this.btn_search.Name = "btn_search";
            this.btn_search.Size = new System.Drawing.Size(75, 23);
            this.btn_search.TabIndex = 22;
            this.btn_search.Text = "Найти";
            this.btn_search.UseVisualStyleBackColor = true;
            this.btn_search.Click += new System.EventHandler(this.btn_search_Click);
            // 
            // btn_Clear
            // 
            this.btn_Clear.Location = new System.Drawing.Point(174, 415);
            this.btn_Clear.Name = "btn_Clear";
            this.btn_Clear.Size = new System.Drawing.Size(116, 23);
            this.btn_Clear.TabIndex = 23;
            this.btn_Clear.Text = "Очистить поля";
            this.btn_Clear.UseVisualStyleBackColor = true;
            this.btn_Clear.Click += new System.EventHandler(this.btn_Clear_Click);
            // 
            // gB_Search
            // 
            this.gB_Search.BackColor = System.Drawing.SystemColors.ScrollBar;
            this.gB_Search.Controls.Add(this.label1);
            this.gB_Search.Controls.Add(this.tb_id);
            this.gB_Search.Controls.Add(this.btn_search);
            this.gB_Search.Controls.Add(this.tb_surname);
            this.gB_Search.Controls.Add(this.label2);
            this.gB_Search.Location = new System.Drawing.Point(5, 4);
            this.gB_Search.Name = "gB_Search";
            this.gB_Search.Size = new System.Drawing.Size(230, 109);
            this.gB_Search.TabIndex = 24;
            this.gB_Search.TabStop = false;
            this.gB_Search.Text = "Поля для поиска";
            // 
            // Form_Candidate
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1098, 450);
            this.Controls.Add(this.gB_Search);
            this.Controls.Add(this.btn_Clear);
            this.Controls.Add(this.btn_showtable);
            this.Controls.Add(this.DGV_Joblist);
            this.Controls.Add(this.btn_delete);
            this.Controls.Add(this.btn_add);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.tb_email);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.tb_middlename);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.tb_name);
            this.Name = "Form_Candidate";
            this.Text = "Студент";
            this.Load += new System.EventHandler(this.Form_Candidate_Load);
            ((System.ComponentModel.ISupportInitialize)(this.DGV_Joblist)).EndInit();
            this.gB_Search.ResumeLayout(false);
            this.gB_Search.PerformLayout();
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
        private System.Windows.Forms.Button btn_add;
        private System.Windows.Forms.Button btn_delete;
        public  System.Windows.Forms.DataGridView DGV_Joblist;//заменено на public
        private System.Windows.Forms.Button btn_showtable;
        private System.Windows.Forms.Button btn_search;
        private System.Windows.Forms.Button btn_Clear;
        private System.Windows.Forms.GroupBox gB_Search;
        private System.Windows.Forms.DataGridViewTextBoxColumn id;
        private System.Windows.Forms.DataGridViewTextBoxColumn j_cat;
        private System.Windows.Forms.DataGridViewTextBoxColumn j_name;
        private System.Windows.Forms.DataGridViewTextBoxColumn j_desc;
        private System.Windows.Forms.DataGridViewTextBoxColumn j_numofcand;
        private System.Windows.Forms.DataGridViewTextBoxColumn j_crit1;
        private System.Windows.Forms.DataGridViewTextBoxColumn j_crit2;
        private System.Windows.Forms.DataGridViewTextBoxColumn j_crit3;
    }
}

