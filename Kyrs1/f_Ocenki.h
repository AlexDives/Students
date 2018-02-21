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
	/// Сводка для f_Ocenki
	/// </summary>
	public ref class f_Ocenki : public System::Windows::Forms::Form
	{
	public:
		f_Ocenki(int stud_id, SqlCeConnection^ scon)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->stud_id_l = stud_id;
			this->scon_s = scon;
		}
		int stud_id_l;
	private: System::Windows::Forms::ToolStripMenuItem^  печатьToolStripMenuItem;

	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	public:

	public:
		SqlCeConnection ^ scon_s;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~f_Ocenki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  закрытьToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(f_Ocenki::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->печатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 24);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(311, 238);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->UserAddedRow += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &f_Ocenki::dataGridView1_UserAddedRow);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->сохранитьToolStripMenuItem,
					this->закрытьToolStripMenuItem, this->печатьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(311, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_Ocenki::сохранитьToolStripMenuItem_Click);
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->закрытьToolStripMenuItem->Text = L"Закрыть";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_Ocenki::закрытьToolStripMenuItem_Click);
			// 
			// печатьToolStripMenuItem
			// 
			this->печатьToolStripMenuItem->Name = L"печатьToolStripMenuItem";
			this->печатьToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->печатьToolStripMenuItem->Text = L"Печать";
			this->печатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_Ocenki::печатьToolStripMenuItem_Click);
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
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &f_Ocenki::printDocument1_PrintPage);
			// 
			// f_Ocenki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(311, 262);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"f_Ocenki";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Оценки студента";
			this->Load += gcnew System::EventHandler(this, &f_Ocenki::f_Ocenki_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		SqlCeDataAdapter^ da;
		DataSet^ ds;
		SqlCeCommandBuilder^ builder;
		SqlCeCommand^ insertCommand;
		private: System::Void f_Ocenki_Load(System::Object^  sender, System::EventArgs^  e) {
			
			String^ query = "select o.id, o.predmet, o.ball, o.stud_id from ocenki o where o.stud_id = " + stud_id_l.ToString();
			da = gcnew SqlCeDataAdapter(query, scon_s);
			builder = gcnew SqlCeCommandBuilder(da);
		
			scon_s->Close();
			scon_s->Open();
			ds = gcnew DataSet();
			da->Fill(ds, "ocenki");
			
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "ocenki";

			dataGridView1->Columns[3]->Visible = false;
		}
		private: System::Void закрытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
		private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			da->Update(ds,"ocenki");
			f_Ocenki_Load(sender, e);
		}

		private: System::Void dataGridView1_UserAddedRow(System::Object^  sender, System::Windows::Forms::DataGridViewRowEventArgs^  e) {
			dataGridView1[3, e->Row->Index-1]->Value = stud_id_l.ToString();
		}
		private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			Bitmap^ bmp = gcnew Bitmap(dataGridView1->Size.Width + 10, dataGridView1->Size.Height + 10);
			dataGridView1->DrawToBitmap(bmp, dataGridView1->Bounds);
			e->Graphics->DrawImage(bmp, 0, 0);
		}
		private: System::Void печатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			/*dataGridView1->ClearSelection();
			if (printPreviewDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				printDocument1->Print();*/


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
				GC::Collect();
			}
		}
	};
}
