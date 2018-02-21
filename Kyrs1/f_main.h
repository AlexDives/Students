#pragma once
#include "f_stud.h"
#include "f_about.h"

namespace Kyrs1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::Reflection;
	using namespace System::Runtime::InteropServices;
	using namespace System::Data::SqlServerCe;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class f_main : public System::Windows::Forms::Form
	{
	public:
		f_main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~f_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  подключитсяToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  новыйСтудентToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  редкатироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem;





	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  запросыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  всеСтудентыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  всеГруппыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  всеПриказыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  студентыГруппыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  студентыПриказыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  оценкиСтудентовToolStripMenuItem;
	private: System::Windows::Forms::Button^  b_sort;

	private: System::Windows::Forms::ToolStripMenuItem^  вывестиНаПечатьToolStripMenuItem;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  cb_sort;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_filter;
	private: System::Windows::Forms::CheckBox^  cb_filtr;
	private: System::Windows::Forms::ToolStripMenuItem^  экспортВExcelToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;

















	private: System::ComponentModel::IContainer^  components;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(f_main::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->подключитсяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новыйСтудентToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редкатироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->запросыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->всеСтудентыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->всеГруппыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->всеПриказыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->студентыГруппыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->студентыПриказыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оценкиСтудентовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вывестиНаПечатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экспортВExcelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cb_filtr = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_filter = (gcnew System::Windows::Forms::TextBox());
			this->cb_sort = (gcnew System::Windows::Forms::ComboBox());
			this->b_sort = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->файлToolStripMenuItem,
					this->правкаToolStripMenuItem, this->запросыToolStripMenuItem, this->вывестиНаПечатьToolStripMenuItem, this->экспортВExcelToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->подключитсяToolStripMenuItem,
					this->toolStripSeparator1, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// подключитсяToolStripMenuItem
			// 
			this->подключитсяToolStripMenuItem->Name = L"подключитсяToolStripMenuItem";
			this->подключитсяToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->подключитсяToolStripMenuItem->Text = L"Подключится";
			this->подключитсяToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::подключитсяToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(147, 6);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::выходToolStripMenuItem_Click);
			// 
			// правкаToolStripMenuItem
			// 
			this->правкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->новыйСтудентToolStripMenuItem,
					this->редкатироватьToolStripMenuItem, this->удалитьToolStripMenuItem, this->сохранитьToolStripMenuItem
			});
			this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			this->правкаToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->правкаToolStripMenuItem->Text = L"Правка";
			// 
			// новыйСтудентToolStripMenuItem
			// 
			this->новыйСтудентToolStripMenuItem->Name = L"новыйСтудентToolStripMenuItem";
			this->новыйСтудентToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->новыйСтудентToolStripMenuItem->Text = L"Новый студент";
			this->новыйСтудентToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::новыйСтудентToolStripMenuItem_Click);
			// 
			// редкатироватьToolStripMenuItem
			// 
			this->редкатироватьToolStripMenuItem->Name = L"редкатироватьToolStripMenuItem";
			this->редкатироватьToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->редкатироватьToolStripMenuItem->Text = L"Редактировать";
			this->редкатироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::редкатироватьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::удалитьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::сохранитьToolStripMenuItem_Click);
			// 
			// запросыToolStripMenuItem
			// 
			this->запросыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->всеСтудентыToolStripMenuItem,
					this->всеГруппыToolStripMenuItem, this->всеПриказыToolStripMenuItem, this->студентыГруппыToolStripMenuItem, this->студентыПриказыToolStripMenuItem,
					this->оценкиСтудентовToolStripMenuItem
			});
			this->запросыToolStripMenuItem->Name = L"запросыToolStripMenuItem";
			this->запросыToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->запросыToolStripMenuItem->Text = L"Запросы";
			// 
			// всеСтудентыToolStripMenuItem
			// 
			this->всеСтудентыToolStripMenuItem->Name = L"всеСтудентыToolStripMenuItem";
			this->всеСтудентыToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->всеСтудентыToolStripMenuItem->Text = L"Все студенты";
			this->всеСтудентыToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::всеСтудентыToolStripMenuItem_Click);
			// 
			// всеГруппыToolStripMenuItem
			// 
			this->всеГруппыToolStripMenuItem->Name = L"всеГруппыToolStripMenuItem";
			this->всеГруппыToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->всеГруппыToolStripMenuItem->Text = L"Все группы";
			this->всеГруппыToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::всеГруппыToolStripMenuItem_Click);
			// 
			// всеПриказыToolStripMenuItem
			// 
			this->всеПриказыToolStripMenuItem->Name = L"всеПриказыToolStripMenuItem";
			this->всеПриказыToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->всеПриказыToolStripMenuItem->Text = L"Все приказы";
			this->всеПриказыToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::всеПриказыToolStripMenuItem_Click);
			// 
			// студентыГруппыToolStripMenuItem
			// 
			this->студентыГруппыToolStripMenuItem->Name = L"студентыГруппыToolStripMenuItem";
			this->студентыГруппыToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->студентыГруппыToolStripMenuItem->Text = L"Студенты + группы";
			this->студентыГруппыToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::студентыГруппыToolStripMenuItem_Click);
			// 
			// студентыПриказыToolStripMenuItem
			// 
			this->студентыПриказыToolStripMenuItem->Name = L"студентыПриказыToolStripMenuItem";
			this->студентыПриказыToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->студентыПриказыToolStripMenuItem->Text = L"Студенты + приказы";
			this->студентыПриказыToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::студентыПриказыToolStripMenuItem_Click);
			// 
			// оценкиСтудентовToolStripMenuItem
			// 
			this->оценкиСтудентовToolStripMenuItem->Name = L"оценкиСтудентовToolStripMenuItem";
			this->оценкиСтудентовToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->оценкиСтудентовToolStripMenuItem->Text = L"Оценки студентов";
			this->оценкиСтудентовToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::оценкиСтудентовToolStripMenuItem_Click);
			// 
			// вывестиНаПечатьToolStripMenuItem
			// 
			this->вывестиНаПечатьToolStripMenuItem->Name = L"вывестиНаПечатьToolStripMenuItem";
			this->вывестиНаПечатьToolStripMenuItem->Size = System::Drawing::Size(121, 20);
			this->вывестиНаПечатьToolStripMenuItem->Text = L"Вывести на печать";
			this->вывестиНаПечатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::вывестиНаПечатьToolStripMenuItem_Click);
			// 
			// экспортВExcelToolStripMenuItem
			// 
			this->экспортВExcelToolStripMenuItem->Name = L"экспортВExcelToolStripMenuItem";
			this->экспортВExcelToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->экспортВExcelToolStripMenuItem->Text = L"Экспорт в Excel";
			this->экспортВExcelToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::экспортВExcelToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->cb_filtr);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->tb_filter);
			this->panel1->Controls->Add(this->cb_sort);
			this->panel1->Controls->Add(this->b_sort);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 32);
			this->panel1->TabIndex = 1;
			// 
			// cb_filtr
			// 
			this->cb_filtr->AutoSize = true;
			this->cb_filtr->Location = System::Drawing::Point(237, 8);
			this->cb_filtr->Name = L"cb_filtr";
			this->cb_filtr->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cb_filtr->Size = System::Drawing::Size(95, 17);
			this->cb_filtr->TabIndex = 6;
			this->cb_filtr->Text = L"Фильтровать";
			this->cb_filtr->UseVisualStyleBackColor = true;
			this->cb_filtr->CheckedChanged += gcnew System::EventHandler(this, &f_main::cb_filtr_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(444, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L" - - -";
			// 
			// tb_filter
			// 
			this->tb_filter->Location = System::Drawing::Point(338, 6);
			this->tb_filter->Name = L"tb_filter";
			this->tb_filter->Size = System::Drawing::Size(100, 20);
			this->tb_filter->TabIndex = 4;
			this->tb_filter->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &f_main::tb_filter_KeyPress);
			// 
			// cb_sort
			// 
			this->cb_sort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_sort->FormattingEnabled = true;
			this->cb_sort->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"по фамилии", L"по имени", L"по отчеству", L"по возрасту" });
			this->cb_sort->Location = System::Drawing::Point(107, 6);
			this->cb_sort->Name = L"cb_sort";
			this->cb_sort->Size = System::Drawing::Size(121, 21);
			this->cb_sort->TabIndex = 1;
			// 
			// b_sort
			// 
			this->b_sort->Location = System::Drawing::Point(3, 4);
			this->b_sort->Name = L"b_sort";
			this->b_sort->Size = System::Drawing::Size(98, 23);
			this->b_sort->TabIndex = 0;
			this->b_sort->Text = L"Сортировать";
			this->b_sort->UseVisualStyleBackColor = true;
			this->b_sort->Click += gcnew System::EventHandler(this, &f_main::b_sort_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 56);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(784, 506);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &f_main::dataGridView1_CellDoubleClick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Database|*.sdf";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &f_main::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Excel |*.xlsx";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::оПрограммеToolStripMenuItem_Click);
			// 
			// f_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"f_main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Студенты";
			this->Shown += gcnew System::EventHandler(this, &f_main::MyForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		
		String^ fileDB="";		// строка подключения к БД
		SqlCeConnection ^scon;	// подключение к БД
		SqlCeDataAdapter^ da;	// адаптор для всех запросов
		DataSet^ ds;			// датасет для всех запросов
		SqlCeDataAdapter^ grpr;	// адаптор только для групп и приказов
		DataSet^ dsgrpr;		// датасет только для групп и приказов

								// идентификатор, какая таблица сейчас отображается
								// 0 - stud
		int flagShow;			// 1 - gruppa
								// 2 - prikazi

		bool filActive = false; // флаг активации фильтра

		private: System::Void MyForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			подключитсяToolStripMenuItem->Enabled = true;
			правкаToolStripMenuItem->Enabled = false;
			запросыToolStripMenuItem->Enabled = false;
			вывестиНаПечатьToolStripMenuItem->Enabled = false;
			экспортВExcelToolStripMenuItem->Enabled = false;
			panel1->Enabled = false;
		}
		private: System::Void подключитсяToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				fileDB = openFileDialog1->FileName;
				if (fileDB != "")
				{
					
					//String^ conStr = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=" + fileDB + ";Integrated Security=True;Connect Timeout=10";
					String^ conStr = "Persist Security Info = False; Data Source = " + fileDB + "; "; 

					//scon = gcnew SqlConnection(conStr);
					scon = gcnew SqlCeConnection(conStr);
					try
					{
						scon->Open();
						
					}
					catch (SqlCeException ^e) // SqlException
					{
						String ^s = "";
						for (int i = 0; i<e->Errors->Count; i++)
						{
							s = ("Source={0};Message={1};", e->Errors->
								default[i]->Source, e->Errors->default[i]->Message + "\n");
						}
						
						MessageBox::Show(s);
						return;
					}
					catch (System::Exception^ e)
					{
						String ^s = "";
						s = ("Error connecting: " + e->Message + "\n");
						s += ("InnerException : " + e->InnerException->Message + "\n");
						s += ("StackTrace: " + e->StackTrace);

						MessageBox::Show(s);
						return;
					}

					подключитсяToolStripMenuItem->Enabled = false;
					правкаToolStripMenuItem->Enabled = true;
					запросыToolStripMenuItem->Enabled = true;
					вывестиНаПечатьToolStripMenuItem->Enabled = true;
					panel1->Enabled = true;
					экспортВExcelToolStripMenuItem->Enabled = true;

					всеСтудентыToolStripMenuItem->PerformClick();
					flagShow = 0;
				}
			}
		}
		
		private: System::Void всеСтудентыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ query = "select id, famil, name, otch, birth_day, " + 
							"DATEDIFF(yyyy, birth_day, GETDATE()) + " +
							"(SIGN(DATEDIFF(d, birth_day, DATEADD(yy, DATEPART(yyyy,birth_day) - DATEPART(yyyy,GETDATE()), GETDATE()))) - 1) / 2 as age, " +
							"addr_pr, phone, sex from stud";
			da = gcnew SqlCeDataAdapter(query, scon);
			ds = gcnew DataSet();
			da->Fill(ds, "stud");
			scon->Close();
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "stud";
			flagShow = 0;
			label1->Text = "по возрасту";
			settingsGrid();
		}
		
		private: System::Void всеГруппыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ query = "select Id, gr_name, kurs, fo, god_nach from gruppa";
			grpr = gcnew SqlCeDataAdapter(query, scon);
			SqlCeCommandBuilder^ builder = gcnew SqlCeCommandBuilder(grpr);
			dsgrpr = gcnew DataSet();
			grpr->Fill(dsgrpr, "gruppa");
			scon->Close();
			dataGridView1->DataSource = dsgrpr;
			dataGridView1->DataMember = "gruppa";
			flagShow = 1;
			label1->Text = "по группе";
			settingsGrid();
		}
		private: System::Void всеПриказыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ query = "select p.id, p.number_prik, p.date_prik, p.type_prik from prikaz p";
			grpr = gcnew SqlCeDataAdapter(query, scon);
			SqlCeCommandBuilder^ builder = gcnew SqlCeCommandBuilder(grpr);
			dsgrpr = gcnew DataSet();
			grpr->Fill(dsgrpr, "prikaz");
			scon->Close();
			dataGridView1->DataSource = dsgrpr;
			dataGridView1->DataMember = "prikaz";
			flagShow = 2;
			settingsGrid();
		}
		private: System::Void dataGridView1_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			редкатироватьToolStripMenuItem->PerformClick();
		}
		private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}
		private: System::Void новыйСтудентToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			f_stud^ fs = gcnew f_stud(0, scon);
			fs->ShowDialog();
			всеСтудентыToolStripMenuItem->PerformClick();
		}
		private: System::Void оценкиСтудентовToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			String^ query = "select o.id, s.famil, s.name, s.otch, o.predmet, o.ball from ocenki o " +
							"left join stud s on s.id = o.stud_id ";
			da = gcnew SqlCeDataAdapter(query, scon);
			ds = gcnew DataSet();
			da->Fill(ds, "ocenki");
			scon->Close();
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "ocenki";
			flagShow = 3;
			settingsGrid();
		}
		private: System::Void студентыГруппыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ query = "select sg.id, s.famil, s.name, s.otch, g.gr_name, g.kurs, " +
							"g.god_nach, sg.num_zach, p.number_prik + ' OT ' + convert(nvarchar,date_prik, 104) as prikaz " + 
							"from stud_gruppa sg " +
							"left join stud s on s.id = sg.stud_id " + 
							"left join gruppa g on g.id = sg.gruppa_id " +
							"left join prikaz p on p.id = sg.prik_id ";
			da = gcnew SqlCeDataAdapter(query, scon);
			ds = gcnew DataSet();
			da->Fill(ds, "studgr");
			scon->Close();
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "studgr";
			flagShow = 4;
			label1->Text = "по группе";
			settingsGrid();
		}
		private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			Bitmap^ bmp = gcnew Bitmap(dataGridView1->Size.Width + 10, dataGridView1->Size.Height + 10);
			dataGridView1->DrawToBitmap(bmp, dataGridView1->Bounds);
			e->Graphics->DrawImage(bmp, 0, 0);
		}
		private: System::Void вывестиНаПечатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			dataGridView1->ClearSelection();
			if (printPreviewDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
				printDocument1->Print();
		}
		private: System::Void студентыПриказыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ query = "select sp.id, s.famil, s.name, s.otch, p.number_prik + ' OT ' + convert(nvarchar,date_prik, 104) as prikaz, " +
							"p.type_prik from stud_prik sp " +
							"left join stud s on s.id = sp.stud_id " +
							"left join prikaz p on p.id = sp.prik_id ";
			da = gcnew SqlCeDataAdapter(query, scon);
			ds = gcnew DataSet();
			da->Fill(ds, "studpr");
			scon->Close();
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "studpr";
			flagShow = 5;
			settingsGrid();
		}
		private: System::Void редкатироватьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (flagShow == 0)
			{
				f_stud^ fs = gcnew f_stud((int)dataGridView1[0, dataGridView1->CurrentRow->Index]->Value, scon);
				fs->ShowDialog();
				всеСтудентыToolStripMenuItem->PerformClick();
			}
		}
		private: System::Void удалитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (flagShow > 2)
			{
				MessageBox::Show("Невозможно удалить данную запись с этого места!");
			}
			else
			{
				if (MessageBox::Show("Выдействительно хотите удалить выбранную запись?", "Удаление", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				{
					SqlCeCommand^ cmd = gcnew SqlCeCommand();
					if (flagShow == 0)
					{
						cmd->CommandText = "delete from stud where id = @id";
						cmd->CommandType = System::Data::CommandType::Text;
						cmd->Parameters->AddWithValue("@id", (int)dataGridView1[0, dataGridView1->CurrentRow->Index]->Value);
						cmd->Connection = scon;
						scon->Open();
						cmd->ExecuteNonQuery();
						scon->Close();
					}
					else if (flagShow == 1)
					{
						dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
						grpr->Update(dsgrpr, dataGridView1->DataMember);
						dsgrpr->Clear();
						grpr->Fill(dsgrpr, dataGridView1->DataMember);

					}
					else if (flagShow == 2)
					{
						dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
						grpr->Update(dsgrpr, dataGridView1->DataMember);
						dsgrpr->Clear();
						grpr->Fill(dsgrpr, dataGridView1->DataMember);
					}
				}
			}
		}
		private: System::Void settingsGrid()
		{
			if (flagShow == 1 || flagShow == 2)
			{
				dataGridView1->AllowUserToAddRows = true;
				dataGridView1->AllowUserToDeleteRows = true;
				dataGridView1->SelectionMode = DataGridViewSelectionMode::CellSelect;
				dataGridView1->ReadOnly = false;
				сохранитьToolStripMenuItem->Visible = true;
			}
			else
			{
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->AllowUserToDeleteRows = false;
				dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
				dataGridView1->ReadOnly = true;
				сохранитьToolStripMenuItem->Visible = false;
			}
		}
		private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			grpr->Update(dsgrpr, dataGridView1->DataMember);
			dsgrpr->Clear();
			grpr->Fill(dsgrpr, dataGridView1->DataMember);
		}
		private: System::Void b_sort_Click(System::Object^  sender, System::EventArgs^  e) {
			
			String^ query = da->SelectCommand->CommandText;
				
			if ((cb_sort->SelectedIndex == 0) && (flagShow != 1) && (flagShow != 2))
				query += " order by famil";
			else if ((cb_sort->SelectedIndex == 1) && (flagShow != 1) && (flagShow != 2))
				query += " order by name";
			else if ((cb_sort->SelectedIndex == 2) && (flagShow != 1)&&(flagShow != 2))
				query += " order by otch";
			else if ((cb_sort->SelectedIndex == 3) && (flagShow == 0))
				query += " order by age";

			SqlCeDataAdapter^ da2 = gcnew SqlCeDataAdapter(query, scon);
			ds->Clear();
			da2->Fill(ds, dataGridView1->DataMember);
		}
		private: System::Void cb_filtr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			filActive = cb_filtr->Checked;
			if (cb_filtr->Checked == false)
			{
				if (flagShow == 1)
				{
					dsgrpr->Clear();
					grpr->Fill(dsgrpr, dataGridView1->DataMember);
				}
				else {
					ds->Clear();
					da->Fill(ds, dataGridView1->DataMember);
				}
			}
		}
		private: System::Void tb_filter_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			if (filActive && e->KeyChar == 13)
			{
				if (flagShow == 0)
				{
					String^ query = da->SelectCommand->CommandText + " where (DATEDIFF(yyyy, birth_day, GETDATE()) + " +
						"(SIGN(DATEDIFF(d, birth_day, DATEADD(yy, DATEPART(yyyy,birth_day) - DATEPART(yyyy,GETDATE()), GETDATE()))) - 1) / 2 as age = " + tb_filter->Text;
					SqlCeDataAdapter^ da2 = gcnew SqlCeDataAdapter(query, scon);
					ds->Clear();
					da2->Fill(ds, dataGridView1->DataMember);
				}
				else if (flagShow == 1 )
				{
					SqlCeCommand^ ncom = gcnew SqlCeCommand();
					ncom->CommandText = grpr->SelectCommand->CommandText + " where Upper(gr_name) like ('%'+@filtr+'%')";
					ncom->CommandType = System::Data::CommandType::Text;
					ncom->Parameters->AddWithValue("@filtr", tb_filter->Text->ToUpper());
					ncom->Connection = scon;
					SqlCeDataAdapter^ da2 = gcnew SqlCeDataAdapter();
					da2->SelectCommand = ncom;
					dsgrpr->Clear();
					da2->Fill(dsgrpr, dataGridView1->DataMember);
				}
				else if (flagShow == 4)
				{
					SqlCeCommand^ ncom = gcnew SqlCeCommand();
					ncom->CommandText = da->SelectCommand->CommandText + " where Upper(gr_name) like ('%'+@filtr+'%')";
					ncom->CommandType = System::Data::CommandType::Text;
					ncom->Parameters->AddWithValue("@filtr", tb_filter->Text->ToUpper());
					ncom->Connection = scon;
					SqlCeDataAdapter^ da2 = gcnew SqlCeDataAdapter();
					da2->SelectCommand = ncom;
					ds->Clear();
					da2->Fill(ds, dataGridView1->DataMember);
				}
				else filActive = false;
			}
		}
		private: System::Void экспортВExcelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ExportToExcel();
		}
		public: System::Void ExportToExcel()
		{
			// Книга Excel.
			Microsoft::Office::Interop::Excel::Workbook^ m_workBook = nullptr;
			// Страница Excel.
			Microsoft::Office::Interop::Excel::Worksheet^ m_workSheet = nullptr;
			Microsoft::Office::Interop::Excel::_Application^ m_app = nullptr;
			saveFileDialog1->FileName = dataGridView1->DataMember + " " +
				DateTime::Now.Day + "." +
				DateTime::Now.Month + "." +
				DateTime::Now.Year + ".xlsx";// по умолчанию сохраняет в корень диска С:
			saveFileDialog1->ShowDialog();
			try
			{
				// Создание приложения Excel.
				m_app = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				// Приложение "невидимо".
				m_app->Visible = false;
				// Приложение управляется пользователем.
				m_app->UserControl = true;
				// Добавление книги Excel.
				m_workBook = m_app->Workbooks->Add(Microsoft::Office::Interop::Excel::XlWBATemplate::xlWBATWorksheet);
				// Связь со страницей Excel.
				m_workSheet = (Microsoft::Office::Interop::Excel::Worksheet^)m_app->ActiveSheet;	 
				// Заполняем шапку
				for (int i = 0; i < dataGridView1->Columns->Count; i++)
				{
					 m_workSheet->Cells[1, i + 1] = dataGridView1->Columns[i]->Name;
					((Microsoft::Office::Interop::Excel::Range^)m_workSheet->Cells[1, i + 1])->Font->Bold = true;
				}
				// Пишем строку
				for (int i = 0; i < dataGridView1->Rows->Count; i++)
				{
					DataGridViewRow^ row = dataGridView1->Rows[i]; // строки
					for (int j = 0; j < row->Cells->Count; j++) //цикл по ячейкам строки
						m_workSheet->Cells[i + 2, j + 1] = row->Cells[j]->Value;		
				}
				// Сохранение файла Excel.
				m_workBook->SaveCopyAs(saveFileDialog1->FileName);
			}
			finally
			{	 
				m_app->Visible = true;
				m_app->Interactive = true;
				m_app->ScreenUpdating = true;
				m_app->UserControl = true;

				// Закрытие книги.
				//m_workBook->Close(false, "", Type::Missing);
				// Закрытие приложения Excel.
				//m_app->Quit();

				//m_workBook = nullptr;
				//m_workSheet = nullptr;
				//m_app = nullptr;
				GC::Collect();
			}
		}
		private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			f_about^ fa = gcnew f_about();
			fa->ShowDialog();
		}
	};
}
