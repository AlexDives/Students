#pragma once

namespace Kyrs1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;
	using namespace System::Data::SqlServerCe;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для f_studPrik
	/// </summary>
	public ref class f_studPrik : public System::Windows::Forms::Form
	{
	public:
		f_studPrik(int stud_id, SqlCeConnection^ scon)
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
	private: System::Windows::Forms::ListBox^  lb_allPrik;
	public:

	public:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  lb_studPrik;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  b_add;
	private: System::Windows::Forms::Button^  b_remove;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~f_studPrik()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->lb_allPrik = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_studPrik = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->b_add = (gcnew System::Windows::Forms::Button());
			this->b_remove = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_allPrik
			// 
			this->lb_allPrik->FormattingEnabled = true;
			this->lb_allPrik->Location = System::Drawing::Point(12, 30);
			this->lb_allPrik->Name = L"lb_allPrik";
			this->lb_allPrik->ScrollAlwaysVisible = true;
			this->lb_allPrik->Size = System::Drawing::Size(200, 108);
			this->lb_allPrik->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Все приказы";
			// 
			// lb_studPrik
			// 
			this->lb_studPrik->FormattingEnabled = true;
			this->lb_studPrik->Location = System::Drawing::Point(255, 30);
			this->lb_studPrik->Name = L"lb_studPrik";
			this->lb_studPrik->ScrollAlwaysVisible = true;
			this->lb_studPrik->Size = System::Drawing::Size(200, 108);
			this->lb_studPrik->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(293, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Подключенные пркиазы";
			// 
			// b_add
			// 
			this->b_add->Location = System::Drawing::Point(218, 50);
			this->b_add->Name = L"b_add";
			this->b_add->Size = System::Drawing::Size(31, 23);
			this->b_add->TabIndex = 4;
			this->b_add->Text = L">>";
			this->b_add->UseVisualStyleBackColor = true;
			this->b_add->Click += gcnew System::EventHandler(this, &f_studPrik::b_add_Click);
			// 
			// b_remove
			// 
			this->b_remove->Location = System::Drawing::Point(218, 79);
			this->b_remove->Name = L"b_remove";
			this->b_remove->Size = System::Drawing::Size(31, 23);
			this->b_remove->TabIndex = 5;
			this->b_remove->Text = L"<<";
			this->b_remove->UseVisualStyleBackColor = true;
			this->b_remove->Click += gcnew System::EventHandler(this, &f_studPrik::b_remove_Click);
			// 
			// f_studPrik
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 154);
			this->Controls->Add(this->b_remove);
			this->Controls->Add(this->b_add);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lb_studPrik);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lb_allPrik);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"f_studPrik";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Приказы студента";
			this->Load += gcnew System::EventHandler(this, &f_studPrik::f_studPrik_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void f_studPrik_Load(System::Object^  sender, System::EventArgs^  e) {
			getSource();
		}
		private: System::Void getSource()
		{
			String^ q = "select p.Id, p.number_prik + ' ot ' + convert(nvarchar, p.date_prik) + ' (' + p.type_prik + ')' as prikazz " +
						"from prikaz p " +
						"where p.id not in (select sp.prik_id from stud_prik sp where sp.stud_id = " + stud_id_l.ToString() + ")";
			SqlCeDataAdapter^ da = gcnew SqlCeDataAdapter(q, scon_s);
			DataSet^ ds = gcnew DataSet();
			da->Fill(ds, "prikaz");
			scon_s->Close();

			lb_allPrik->DataSource = ds->Tables["prikaz"];
			lb_allPrik->DisplayMember = "prikazz";
			lb_allPrik->ValueMember = "Id";


			q = "select sp.Id, p.number_prik + ' ot ' + convert(nvarchar, p.date_prik) + ' (' + p.type_prik + ')' as prikazz " +
				"from stud_prik sp " +
				"left join prikaz p on p.id = sp.prik_id " +
				"where sp.stud_id = " + stud_id_l.ToString();
			SqlCeDataAdapter^ da2 = gcnew SqlCeDataAdapter(q, scon_s);
			DataSet^ ds2 = gcnew DataSet();
			da2->Fill(ds2, "prikaz");
			scon_s->Close();

			lb_studPrik->DataSource = ds2->Tables["prikaz"];
			lb_studPrik->DisplayMember = "prikazz";
			lb_studPrik->ValueMember = "Id";

		}
		private: System::Void b_add_Click(System::Object^  sender, System::EventArgs^  e) {
			
			SqlCeCommand^ cmd = gcnew SqlCeCommand();
			cmd->CommandText = "insert into stud_prik(stud_id, prik_id) " +
								"values (@stud_id, @prik_id)";
			cmd->CommandType = System::Data::CommandType::Text;
			cmd->Parameters->AddWithValue("@stud_id", stud_id_l);
			cmd->Parameters->AddWithValue("@prik_id", lb_allPrik->SelectedValue);

			cmd->Connection = scon_s;
			scon_s->Open();
			cmd->ExecuteNonQuery();
			scon_s->Close();
			getSource();
		}
		private: System::Void b_remove_Click(System::Object^  sender, System::EventArgs^  e) {
			SqlCommand^ cmd = gcnew SqlCommand();
			cmd->CommandText = "delete from stud_prik where id = @id";
			cmd->CommandType = System::Data::CommandType::Text;
			cmd->Parameters->AddWithValue("@id", lb_studPrik->SelectedValue);

			cmd->Connection = scon_s;
			scon_s->Open();
			cmd->ExecuteNonQuery();
			scon_s->Close();
			getSource();
		}
	};
}
