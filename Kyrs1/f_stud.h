#pragma once
#include "f_studPrik.h"
#include "f_Ocenki.h"

namespace Kyrs1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::Data::SqlServerCe;

	/// <summary>
	/// Сводка для f_stud
	/// </summary>
	public ref class f_stud : public System::Windows::Forms::Form
	{
	public:
		f_stud(int stud_id, SqlCeConnection^ scon)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->stud_id_l = stud_id;
			this->scon_s = scon;
		}
		int stud_id_l;
		SqlCeConnection^ scon_s;

	private: System::Windows::Forms::Button^  b_prik;
	public:
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::ComboBox^  cb_gruppa;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::ComboBox^  cb_prikaz;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::Button^  b_ocenki;
	private: System::Windows::Forms::TextBox^  tb_numzach;
			 
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~f_stud()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  b_close;
	private: System::Windows::Forms::Button^  b_cancel;
	private: System::Windows::Forms::Button^  b_save;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tb_Famil;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  tb_Name;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  tb_Otch;

	private: System::Windows::Forms::GroupBox^  groupBox4;


	private: System::Windows::Forms::GroupBox^  groupBox5;

	private: System::Windows::Forms::GroupBox^  groupBox6;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  tb_Addr;

	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  tb_Phone;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::DateTimePicker^  dtp_BirthDay;
	private: System::Windows::Forms::Label^  l_age;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->b_prik = (gcnew System::Windows::Forms::Button());
			this->b_close = (gcnew System::Windows::Forms::Button());
			this->b_cancel = (gcnew System::Windows::Forms::Button());
			this->b_save = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_Famil = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_Name = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_Otch = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->dtp_BirthDay = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->l_age = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_Addr = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_Phone = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_gruppa = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_prikaz = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_numzach = (gcnew System::Windows::Forms::TextBox());
			this->b_ocenki = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->b_ocenki);
			this->panel1->Controls->Add(this->b_prik);
			this->panel1->Controls->Add(this->b_close);
			this->panel1->Controls->Add(this->b_cancel);
			this->panel1->Controls->Add(this->b_save);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(530, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(116, 211);
			this->panel1->TabIndex = 0;
			// 
			// b_prik
			// 
			this->b_prik->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_prik->Location = System::Drawing::Point(0, 46);
			this->b_prik->Name = L"b_prik";
			this->b_prik->Size = System::Drawing::Size(116, 23);
			this->b_prik->TabIndex = 3;
			this->b_prik->Text = L"Приказы";
			this->b_prik->UseVisualStyleBackColor = true;
			this->b_prik->Click += gcnew System::EventHandler(this, &f_stud::b_prik_Click);
			// 
			// b_close
			// 
			this->b_close->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->b_close->Location = System::Drawing::Point(0, 188);
			this->b_close->Name = L"b_close";
			this->b_close->Size = System::Drawing::Size(116, 23);
			this->b_close->TabIndex = 2;
			this->b_close->Text = L"Закрыть";
			this->b_close->UseVisualStyleBackColor = true;
			this->b_close->Click += gcnew System::EventHandler(this, &f_stud::b_close_Click);
			// 
			// b_cancel
			// 
			this->b_cancel->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_cancel->Location = System::Drawing::Point(0, 23);
			this->b_cancel->Name = L"b_cancel";
			this->b_cancel->Size = System::Drawing::Size(116, 23);
			this->b_cancel->TabIndex = 1;
			this->b_cancel->Text = L"Отменить";
			this->b_cancel->UseVisualStyleBackColor = true;
			this->b_cancel->Click += gcnew System::EventHandler(this, &f_stud::b_cancel_Click);
			// 
			// b_save
			// 
			this->b_save->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_save->Location = System::Drawing::Point(0, 0);
			this->b_save->Name = L"b_save";
			this->b_save->Size = System::Drawing::Size(116, 23);
			this->b_save->TabIndex = 0;
			this->b_save->Text = L"Сохранить";
			this->b_save->UseVisualStyleBackColor = true;
			this->b_save->Click += gcnew System::EventHandler(this, &f_stud::b_save_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tb_Famil);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(165, 44);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фамилия";
			// 
			// tb_Famil
			// 
			this->tb_Famil->Dock = System::Windows::Forms::DockStyle::Top;
			this->tb_Famil->Location = System::Drawing::Point(3, 16);
			this->tb_Famil->Name = L"tb_Famil";
			this->tb_Famil->Size = System::Drawing::Size(159, 20);
			this->tb_Famil->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tb_Name);
			this->groupBox2->Location = System::Drawing::Point(183, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(165, 44);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Имя";
			// 
			// tb_Name
			// 
			this->tb_Name->Dock = System::Windows::Forms::DockStyle::Top;
			this->tb_Name->Location = System::Drawing::Point(3, 16);
			this->tb_Name->Name = L"tb_Name";
			this->tb_Name->Size = System::Drawing::Size(159, 20);
			this->tb_Name->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tb_Otch);
			this->groupBox3->Location = System::Drawing::Point(351, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(165, 44);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Отчество";
			// 
			// tb_Otch
			// 
			this->tb_Otch->Dock = System::Windows::Forms::DockStyle::Top;
			this->tb_Otch->Location = System::Drawing::Point(3, 16);
			this->tb_Otch->Name = L"tb_Otch";
			this->tb_Otch->Size = System::Drawing::Size(159, 20);
			this->tb_Otch->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Location = System::Drawing::Point(12, 62);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(165, 44);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Пол";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(88, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(72, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Женский";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Мужской";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->dtp_BirthDay);
			this->groupBox5->Location = System::Drawing::Point(183, 62);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(165, 44);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Дата рождения";
			// 
			// dtp_BirthDay
			// 
			this->dtp_BirthDay->Dock = System::Windows::Forms::DockStyle::Top;
			this->dtp_BirthDay->Location = System::Drawing::Point(3, 16);
			this->dtp_BirthDay->Name = L"dtp_BirthDay";
			this->dtp_BirthDay->Size = System::Drawing::Size(159, 20);
			this->dtp_BirthDay->TabIndex = 0;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->l_age);
			this->groupBox6->Location = System::Drawing::Point(351, 62);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(165, 44);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Возраст";
			// 
			// l_age
			// 
			this->l_age->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_age->Location = System::Drawing::Point(3, 16);
			this->l_age->Name = L"l_age";
			this->l_age->Size = System::Drawing::Size(159, 25);
			this->l_age->TabIndex = 0;
			this->l_age->Text = L"нет данных";
			this->l_age->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->tb_Addr);
			this->groupBox7->Location = System::Drawing::Point(15, 112);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(333, 44);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Адрес проживания";
			// 
			// tb_Addr
			// 
			this->tb_Addr->Dock = System::Windows::Forms::DockStyle::Top;
			this->tb_Addr->Location = System::Drawing::Point(3, 16);
			this->tb_Addr->Name = L"tb_Addr";
			this->tb_Addr->Size = System::Drawing::Size(327, 20);
			this->tb_Addr->TabIndex = 0;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->tb_Phone);
			this->groupBox8->Location = System::Drawing::Point(351, 112);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(165, 44);
			this->groupBox8->TabIndex = 8;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Телефон";
			// 
			// tb_Phone
			// 
			this->tb_Phone->Dock = System::Windows::Forms::DockStyle::Top;
			this->tb_Phone->Location = System::Drawing::Point(3, 16);
			this->tb_Phone->Name = L"tb_Phone";
			this->tb_Phone->Size = System::Drawing::Size(159, 20);
			this->tb_Phone->TabIndex = 0;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->cb_gruppa);
			this->groupBox9->Location = System::Drawing::Point(12, 162);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(199, 44);
			this->groupBox9->TabIndex = 9;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Группа";
			// 
			// cb_gruppa
			// 
			this->cb_gruppa->Dock = System::Windows::Forms::DockStyle::Top;
			this->cb_gruppa->FormattingEnabled = true;
			this->cb_gruppa->Location = System::Drawing::Point(3, 16);
			this->cb_gruppa->Name = L"cb_gruppa";
			this->cb_gruppa->Size = System::Drawing::Size(193, 21);
			this->cb_gruppa->TabIndex = 0;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->cb_prikaz);
			this->groupBox10->Location = System::Drawing::Point(351, 162);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(165, 44);
			this->groupBox10->TabIndex = 10;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Приказ";
			// 
			// cb_prikaz
			// 
			this->cb_prikaz->Dock = System::Windows::Forms::DockStyle::Top;
			this->cb_prikaz->FormattingEnabled = true;
			this->cb_prikaz->Location = System::Drawing::Point(3, 16);
			this->cb_prikaz->Name = L"cb_prikaz";
			this->cb_prikaz->Size = System::Drawing::Size(159, 21);
			this->cb_prikaz->TabIndex = 1;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->tb_numzach);
			this->groupBox11->Location = System::Drawing::Point(217, 162);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(131, 44);
			this->groupBox11->TabIndex = 11;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Номер зачетки";
			// 
			// tb_numzach
			// 
			this->tb_numzach->Dock = System::Windows::Forms::DockStyle::Top;
			this->tb_numzach->Location = System::Drawing::Point(3, 16);
			this->tb_numzach->Name = L"tb_numzach";
			this->tb_numzach->Size = System::Drawing::Size(125, 20);
			this->tb_numzach->TabIndex = 1;
			// 
			// b_ocenki
			// 
			this->b_ocenki->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_ocenki->Location = System::Drawing::Point(0, 69);
			this->b_ocenki->Name = L"b_ocenki";
			this->b_ocenki->Size = System::Drawing::Size(116, 23);
			this->b_ocenki->TabIndex = 4;
			this->b_ocenki->Text = L"Оценки";
			this->b_ocenki->UseVisualStyleBackColor = true;
			this->b_ocenki->Click += gcnew System::EventHandler(this, &f_stud::b_ocenki_Click);
			// 
			// f_stud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 211);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"f_stud";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Карточка студента";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &f_stud::f_stud_FormClosing);
			this->Load += gcnew System::EventHandler(this, &f_stud::f_stud_Load);
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		

		private: System::Void b_save_Click(System::Object^  sender, System::EventArgs^  e) {

			// вставка / апдейт таблицы студентов
			SqlCeCommand^ cmd = gcnew SqlCeCommand();

			if (stud_id_l == 0)
			{
				cmd->CommandText = "insert into stud(famil, name, otch, birth_day, addr_pr, phone, sex) " +
								   " values (@famil, @name, @otch, @birth_day, @addr, @phone, @sex)";
			}
			else {
				cmd->CommandText = "update stud set famil = @famil, name = @name, otch = @otch, birth_day = @birth_day, addr_pr = @addr, " +
									" phone = @phone, sex = @sex where id = @id";
			}
			cmd->CommandType = System::Data::CommandType::Text;
			cmd->Parameters->AddWithValue("@famil", tb_Famil->Text);
			cmd->Parameters->AddWithValue("@Name", tb_Name->Text);
			cmd->Parameters->AddWithValue("@otch", tb_Otch->Text);
			cmd->Parameters->AddWithValue("@birth_day", dtp_BirthDay->Value);
			cmd->Parameters->AddWithValue("@addr", tb_Addr->Text);
			cmd->Parameters->AddWithValue("@phone", tb_Phone->Text);
			cmd->Parameters->AddWithValue("@sex", radioButton1->Checked ? "M" : "F");
			cmd->Parameters->AddWithValue("@id", stud_id_l);
			cmd->Connection = scon_s;
			scon_s->Open();
			cmd->ExecuteNonQuery();
			scon_s->Close();
			/////

			// вставка / апдейт таблицы stud_gruppa
			if (stud_id_l != 0) {
				cmd = gcnew SqlCeCommand();

				if (stud_gr == 0)
				{
					cmd->CommandText = "insert into stud_gruppa(stud_id, gruppa_id, prik_id, num_zach) " +
						" values (@stud_id, @grup_id, @prik_id, @num_zach)";
				}
				else {
					cmd->CommandText = "update stud_gruppa set gruppa_id = @grup_id, prik_id = @prik_id, num_zach = @num_zach where stud_id = @stud_id";
				}
				cmd->CommandType = System::Data::CommandType::Text;
				cmd->Parameters->AddWithValue("@stud_id", stud_id_l);
				cmd->Parameters->AddWithValue("@grup_id", cb_gruppa->SelectedValue);
				cmd->Parameters->AddWithValue("@prik_id", cb_prikaz->SelectedValue);
				cmd->Parameters->AddWithValue("@num_zach", tb_numzach->Text);

				cmd->Connection = scon_s;
				scon_s->Open();
				cmd->ExecuteNonQuery();
				scon_s->Close();
			}
		}
		int stud_gr, stud_pr;
		private: System::Void GetSource()
		{
			SqlCeCommand^ cmd = gcnew SqlCeCommand();
			cmd->CommandText = "select famil, name, otch, birth_day, addr_pr, phone, sex, " +
								"DATEDIFF(yyyy, birth_day, GETDATE()) + " +
								"(SIGN(DATEDIFF(d, birth_day, DATEADD(yy, DATEPART(yyyy,birth_day) - DATEPART(yyyy,GETDATE()), GETDATE()))) - 1) / 2 as age, " +
								"coalesce(sg.gruppa_id,0), coalesce(sg.prik_id,0), coalesce(sg.num_zach,'') " +
								"from stud s " + 
								"left join stud_gruppa sg on sg.stud_id = s.id " +
								"where s.id = " + stud_id_l.ToString();
			cmd->CommandType = System::Data::CommandType::Text;
			cmd->Connection = scon_s;
			scon_s->Close();
			scon_s->Open();
			SqlCeDataReader^ reader = cmd->ExecuteReader();
			
			while (reader->Read())
			{
				//MessageBox.Show("Has rows: " + reader.HasRows);

				tb_Famil->Text = reader->GetString(0);
				tb_Name->Text = reader->GetString(1);
				tb_Otch->Text = reader->GetString(2);
				dtp_BirthDay->Value = reader->GetDateTime(3);
				tb_Addr->Text = reader->GetString(4);
				tb_Phone->Text = reader->GetString(5);
				String ^sex = reader->GetString(6);
				if (sex->Equals("M"))
					radioButton1->Checked = true;
				else radioButton2->Checked = true;
				//l_age->Text = (DateTime::Now.Year - dtp_BirthDay->Value.Year).ToString();
				l_age->Text = reader->GetInt32(7).ToString();
				stud_gr = reader->GetInt32(8);
				stud_pr = reader->GetInt32(9);
				tb_numzach->Text = reader->GetString(10);
			}

			reader->Close();

			// Заполнение списка групп
			SqlCeDataAdapter^ da = gcnew SqlCeDataAdapter("select Id, (gr_name + ' | ' + CONVERT(nvarchar(10),kurs) + ' | ' + fo) as grupa from gruppa", scon_s);
			DataSet^ ds = gcnew DataSet();
			da->Fill(ds, "gruppa");
			scon_s->Close();

			cb_gruppa->DataSource = ds->Tables["gruppa"];
			cb_gruppa->DisplayMember = "grupa";
			cb_gruppa->ValueMember = "Id";
			if (stud_gr > 0) cb_gruppa->SelectedValue = stud_gr;
			//

			// Заполнение списка приказов
			String^ q = "select p.Id, p.number_prik + ' ot ' + convert(nvarchar, p.date_prik, 104) + ' (' + p.type_prik + ')' as prikazz " + 
						"from stud_prik sp " + 
						"left join prikaz p on p.id = sp.prik_id " +
						"where sp.stud_id = " + stud_id_l.ToString();
			SqlCeDataAdapter^ da2 = gcnew SqlCeDataAdapter(q, scon_s);
			DataSet^ ds2 = gcnew DataSet();
			da2->Fill(ds2, "prikaz");
			scon_s->Close();

			cb_prikaz->DataSource = ds2->Tables["prikaz"];
			cb_prikaz->DisplayMember = "prikazz";
			cb_prikaz->ValueMember = "Id";
			if (stud_pr > 0) cb_prikaz->SelectedValue = stud_pr;
			//
		}
		private: System::Void f_stud_Load(System::Object^  sender, System::EventArgs^  e) {
			if (stud_id_l != 0) GetSource();
		}
		private: System::Void b_close_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
		private: System::Void f_stud_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			tb_Famil->Text = ""; tb_Name->Text = ""; tb_Otch->Text = ""; 
			tb_Addr->Text = ""; tb_Phone->Text = ""; dtp_BirthDay->Value = DateTime::Now;
			radioButton1->Checked = true; l_age->Text = "нет данных";
		}
		private: System::Void b_cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			GetSource();
		}
		private: System::Void b_prik_Click(System::Object^  sender, System::EventArgs^  e) {
			f_studPrik^ sp = gcnew f_studPrik(stud_id_l, scon_s);
			sp->ShowDialog();
			GetSource();
		}
		private: System::Void b_ocenki_Click(System::Object^  sender, System::EventArgs^  e) {
			f_Ocenki^ o = gcnew f_Ocenki(stud_id_l, scon_s);
			o->ShowDialog();
			GetSource();
		}
	};
}
