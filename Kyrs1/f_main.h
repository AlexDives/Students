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
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class f_main : public System::Windows::Forms::Form
	{
	public:
		f_main(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~f_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîäêëþ÷èòñÿToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïðàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íîâûéÑòóäåíòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ðåäêàòèðîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüToolStripMenuItem;





	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  çàïðîñûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âñåÑòóäåíòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âñåÃðóïïûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âñåÏðèêàçûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñòóäåíòûÃðóïïûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñòóäåíòûÏðèêàçûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îöåíêèÑòóäåíòîâToolStripMenuItem;
	private: System::Windows::Forms::Button^  b_sort;

	private: System::Windows::Forms::ToolStripMenuItem^  âûâåñòèÍàÏå÷àòüToolStripMenuItem;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõðàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  cb_sort;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_filter;
	private: System::Windows::Forms::CheckBox^  cb_filtr;
	private: System::Windows::Forms::ToolStripMenuItem^  ýêñïîðòÂExcelToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏðîãðàììåToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;
	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(f_main::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîäêëþ÷èòñÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâûéÑòóäåíòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ðåäêàòèðîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàïðîñûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñåÑòóäåíòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñåÃðóïïûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñåÏðèêàçûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòóäåíòûÃðóïïûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòóäåíòûÏðèêàçûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îöåíêèÑòóäåíòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûâåñòèÍàÏå÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ýêñïîðòÂExcelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ôàéëToolStripMenuItem,
					this->ïðàâêàToolStripMenuItem, this->çàïðîñûToolStripMenuItem, this->âûâåñòèÍàÏå÷àòüToolStripMenuItem, this->ýêñïîðòÂExcelToolStripMenuItem,
					this->îÏðîãðàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ïîäêëþ÷èòñÿToolStripMenuItem,
					this->toolStripSeparator1, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ïîäêëþ÷èòñÿToolStripMenuItem
			// 
			this->ïîäêëþ÷èòñÿToolStripMenuItem->Name = L"ïîäêëþ÷èòñÿToolStripMenuItem";
			this->ïîäêëþ÷èòñÿToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->ïîäêëþ÷èòñÿToolStripMenuItem->Text = L"Ïîäêëþ÷èòñÿ";
			this->ïîäêëþ÷èòñÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::ïîäêëþ÷èòñÿToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(147, 6);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::âûõîäToolStripMenuItem_Click);
			// 
			// ïðàâêàToolStripMenuItem
			// 
			this->ïðàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->íîâûéÑòóäåíòToolStripMenuItem,
					this->ðåäêàòèðîâàòüToolStripMenuItem, this->óäàëèòüToolStripMenuItem, this->ñîõðàíèòüToolStripMenuItem
			});
			this->ïðàâêàToolStripMenuItem->Name = L"ïðàâêàToolStripMenuItem";
			this->ïðàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïðàâêàToolStripMenuItem->Text = L"Ïðàâêà";
			// 
			// íîâûéÑòóäåíòToolStripMenuItem
			// 
			this->íîâûéÑòóäåíòToolStripMenuItem->Name = L"íîâûéÑòóäåíòToolStripMenuItem";
			this->íîâûéÑòóäåíòToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->íîâûéÑòóäåíòToolStripMenuItem->Text = L"Íîâûé ñòóäåíò";
			this->íîâûéÑòóäåíòToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::íîâûéÑòóäåíòToolStripMenuItem_Click);
			// 
			// ðåäêàòèðîâàòüToolStripMenuItem
			// 
			this->ðåäêàòèðîâàòüToolStripMenuItem->Name = L"ðåäêàòèðîâàòüToolStripMenuItem";
			this->ðåäêàòèðîâàòüToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->ðåäêàòèðîâàòüToolStripMenuItem->Text = L"Ðåäàêòèðîâàòü";
			this->ðåäêàòèðîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::ðåäêàòèðîâàòüToolStripMenuItem_Click);
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			this->óäàëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::óäàëèòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"Ñîõðàíèòü";
			this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::ñîõðàíèòüToolStripMenuItem_Click);
			// 
			// çàïðîñûToolStripMenuItem
			// 
			this->çàïðîñûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->âñåÑòóäåíòûToolStripMenuItem,
					this->âñåÃðóïïûToolStripMenuItem, this->âñåÏðèêàçûToolStripMenuItem, this->ñòóäåíòûÃðóïïûToolStripMenuItem, this->ñòóäåíòûÏðèêàçûToolStripMenuItem,
					this->îöåíêèÑòóäåíòîâToolStripMenuItem
			});
			this->çàïðîñûToolStripMenuItem->Name = L"çàïðîñûToolStripMenuItem";
			this->çàïðîñûToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->çàïðîñûToolStripMenuItem->Text = L"Çàïðîñû";
			// 
			// âñåÑòóäåíòûToolStripMenuItem
			// 
			this->âñåÑòóäåíòûToolStripMenuItem->Name = L"âñåÑòóäåíòûToolStripMenuItem";
			this->âñåÑòóäåíòûToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->âñåÑòóäåíòûToolStripMenuItem->Text = L"Âñå ñòóäåíòû";
			this->âñåÑòóäåíòûToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::âñåÑòóäåíòûToolStripMenuItem_Click);
			// 
			// âñåÃðóïïûToolStripMenuItem
			// 
			this->âñåÃðóïïûToolStripMenuItem->Name = L"âñåÃðóïïûToolStripMenuItem";
			this->âñåÃðóïïûToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->âñåÃðóïïûToolStripMenuItem->Text = L"Âñå ãðóïïû";
			this->âñåÃðóïïûToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::âñåÃðóïïûToolStripMenuItem_Click);
			// 
			// âñåÏðèêàçûToolStripMenuItem
			// 
			this->âñåÏðèêàçûToolStripMenuItem->Name = L"âñåÏðèêàçûToolStripMenuItem";
			this->âñåÏðèêàçûToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->âñåÏðèêàçûToolStripMenuItem->Text = L"Âñå ïðèêàçû";
			this->âñåÏðèêàçûToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::âñåÏðèêàçûToolStripMenuItem_Click);
			// 
			// ñòóäåíòûÃðóïïûToolStripMenuItem
			// 
			this->ñòóäåíòûÃðóïïûToolStripMenuItem->Name = L"ñòóäåíòûÃðóïïûToolStripMenuItem";
			this->ñòóäåíòûÃðóïïûToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->ñòóäåíòûÃðóïïûToolStripMenuItem->Text = L"Ñòóäåíòû + ãðóïïû";
			this->ñòóäåíòûÃðóïïûToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::ñòóäåíòûÃðóïïûToolStripMenuItem_Click);
			// 
			// ñòóäåíòûÏðèêàçûToolStripMenuItem
			// 
			this->ñòóäåíòûÏðèêàçûToolStripMenuItem->Name = L"ñòóäåíòûÏðèêàçûToolStripMenuItem";
			this->ñòóäåíòûÏðèêàçûToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->ñòóäåíòûÏðèêàçûToolStripMenuItem->Text = L"Ñòóäåíòû + ïðèêàçû";
			this->ñòóäåíòûÏðèêàçûToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::ñòóäåíòûÏðèêàçûToolStripMenuItem_Click);
			// 
			// îöåíêèÑòóäåíòîâToolStripMenuItem
			// 
			this->îöåíêèÑòóäåíòîâToolStripMenuItem->Name = L"îöåíêèÑòóäåíòîâToolStripMenuItem";
			this->îöåíêèÑòóäåíòîâToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->îöåíêèÑòóäåíòîâToolStripMenuItem->Text = L"Îöåíêè ñòóäåíòîâ";
			this->îöåíêèÑòóäåíòîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::îöåíêèÑòóäåíòîâToolStripMenuItem_Click);
			// 
			// âûâåñòèÍàÏå÷àòüToolStripMenuItem
			// 
			this->âûâåñòèÍàÏå÷àòüToolStripMenuItem->Name = L"âûâåñòèÍàÏå÷àòüToolStripMenuItem";
			this->âûâåñòèÍàÏå÷àòüToolStripMenuItem->Size = System::Drawing::Size(121, 20);
			this->âûâåñòèÍàÏå÷àòüToolStripMenuItem->Text = L"Âûâåñòè íà ïå÷àòü";
			this->âûâåñòèÍàÏå÷àòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::âûâåñòèÍàÏå÷àòüToolStripMenuItem_Click);
			// 
			// ýêñïîðòÂExcelToolStripMenuItem
			// 
			this->ýêñïîðòÂExcelToolStripMenuItem->Name = L"ýêñïîðòÂExcelToolStripMenuItem";
			this->ýêñïîðòÂExcelToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->ýêñïîðòÂExcelToolStripMenuItem->Text = L"Ýêñïîðò â Excel";
			this->ýêñïîðòÂExcelToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::ýêñïîðòÂExcelToolStripMenuItem_Click);
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
			this->cb_filtr->Text = L"Ôèëüòðîâàòü";
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
			this->cb_sort->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ïî ôàìèëèè", L"ïî èìåíè", L"ïî îò÷åñòâó", L"ïî âîçðàñòó" });
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
			this->b_sort->Text = L"Ñîðòèðîâàòü";
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
			// îÏðîãðàììåToolStripMenuItem
			// 
			this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
			this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->îÏðîãðàììåToolStripMenuItem->Text = L"Î ïðîãðàììå";
			this->îÏðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &f_main::îÏðîãðàììåToolStripMenuItem_Click);
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
			this->Text = L"Ñòóäåíòû";
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
		
		String^ fileDB="";		// ñòðîêà ïîäêëþ÷åíèÿ ê ÁÄ
		SqlCeConnection ^scon;	// ïîäêëþ÷åíèå ê ÁÄ
		SqlCeDataAdapter^ da;	// àäàïòîð äëÿ âñåõ çàïðîñîâ
		DataSet^ ds;			// äàòàñåò äëÿ âñåõ çàïðîñîâ
		SqlCeDataAdapter^ grpr;	// àäàïòîð òîëüêî äëÿ ãðóïï è ïðèêàçîâ
		DataSet^ dsgrpr;		// äàòàñåò òîëüêî äëÿ ãðóïï è ïðèêàçîâ

								// èäåíòèôèêàòîð, êàêàÿ òàáëèöà ñåé÷àñ îòîáðàæàåòñÿ
								// 0 - stud
		int flagShow;			// 1 - gruppa
								// 2 - prikazi

		bool filActive = false; // ôëàã àêòèâàöèè ôèëüòðà

		private: System::Void MyForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			ïîäêëþ÷èòñÿToolStripMenuItem->Enabled = true;
			ïðàâêàToolStripMenuItem->Enabled = false;
			çàïðîñûToolStripMenuItem->Enabled = false;
			âûâåñòèÍàÏå÷àòüToolStripMenuItem->Enabled = false;
			ýêñïîðòÂExcelToolStripMenuItem->Enabled = false;
			panel1->Enabled = false;
		}
		private: System::Void ïîäêëþ÷èòñÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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

					ïîäêëþ÷èòñÿToolStripMenuItem->Enabled = false;
					ïðàâêàToolStripMenuItem->Enabled = true;
					çàïðîñûToolStripMenuItem->Enabled = true;
					âûâåñòèÍàÏå÷àòüToolStripMenuItem->Enabled = true;
					panel1->Enabled = true;
					ýêñïîðòÂExcelToolStripMenuItem->Enabled = true;

					âñåÑòóäåíòûToolStripMenuItem->PerformClick();
					flagShow = 0;
				}
			}
		}
		
		private: System::Void âñåÑòóäåíòûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			label1->Text = "ïî âîçðàñòó";
			settingsGrid();
		}
		
		private: System::Void âñåÃðóïïûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ query = "select Id, gr_name, kurs, fo, god_nach from gruppa";
			grpr = gcnew SqlCeDataAdapter(query, scon);
			SqlCeCommandBuilder^ builder = gcnew SqlCeCommandBuilder(grpr);
			dsgrpr = gcnew DataSet();
			grpr->Fill(dsgrpr, "gruppa");
			scon->Close();
			dataGridView1->DataSource = dsgrpr;
			dataGridView1->DataMember = "gruppa";
			flagShow = 1;
			label1->Text = "ïî ãðóïïå";
			settingsGrid();
		}
		private: System::Void âñåÏðèêàçûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			ðåäêàòèðîâàòüToolStripMenuItem->PerformClick();
		}
		private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}
		private: System::Void íîâûéÑòóäåíòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			f_stud^ fs = gcnew f_stud(0, scon);
			fs->ShowDialog();
			âñåÑòóäåíòûToolStripMenuItem->PerformClick();
		}
		private: System::Void îöåíêèÑòóäåíòîâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

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
		private: System::Void ñòóäåíòûÃðóïïûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			label1->Text = "ïî ãðóïïå";
			settingsGrid();
		}
		private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			Bitmap^ bmp = gcnew Bitmap(dataGridView1->Size.Width + 10, dataGridView1->Size.Height + 10);
			dataGridView1->DrawToBitmap(bmp, dataGridView1->Bounds);
			e->Graphics->DrawImage(bmp, 0, 0);
		}
		private: System::Void âûâåñòèÍàÏå÷àòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			dataGridView1->ClearSelection();
			if (printPreviewDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
				printDocument1->Print();
		}
		private: System::Void ñòóäåíòûÏðèêàçûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
		private: System::Void ðåäêàòèðîâàòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (flagShow == 0)
			{
				f_stud^ fs = gcnew f_stud((int)dataGridView1[0, dataGridView1->CurrentRow->Index]->Value, scon);
				fs->ShowDialog();
				âñåÑòóäåíòûToolStripMenuItem->PerformClick();
			}
		}
		private: System::Void óäàëèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (flagShow > 2)
			{
				MessageBox::Show("Íåâîçìîæíî óäàëèòü äàííóþ çàïèñü ñ ýòîãî ìåñòà!");
			}
			else
			{
				if (MessageBox::Show("Âûäåéñòâèòåëüíî õîòèòå óäàëèòü âûáðàííóþ çàïèñü?", "Óäàëåíèå", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
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
				ñîõðàíèòüToolStripMenuItem->Visible = true;
			}
			else
			{
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->AllowUserToDeleteRows = false;
				dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
				dataGridView1->ReadOnly = true;
				ñîõðàíèòüToolStripMenuItem->Visible = false;
			}
		}
		private: System::Void ñîõðàíèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
		private: System::Void ýêñïîðòÂExcelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ExportToExcel();
		}
		public: System::Void ExportToExcel()
		{
			// Êíèãà Excel.
			Microsoft::Office::Interop::Excel::Workbook^ m_workBook = nullptr;
			// Ñòðàíèöà Excel.
			Microsoft::Office::Interop::Excel::Worksheet^ m_workSheet = nullptr;
			Microsoft::Office::Interop::Excel::_Application^ m_app = nullptr;
			saveFileDialog1->FileName = dataGridView1->DataMember + " " +
				DateTime::Now.Day + "." +
				DateTime::Now.Month + "." +
				DateTime::Now.Year + ".xlsx";// ïî óìîë÷àíèþ ñîõðàíÿåò â êîðåíü äèñêà Ñ:
			saveFileDialog1->ShowDialog();
			try
			{
				// Ñîçäàíèå ïðèëîæåíèÿ Excel.
				m_app = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				// Ïðèëîæåíèå "íåâèäèìî".
				m_app->Visible = false;
				// Ïðèëîæåíèå óïðàâëÿåòñÿ ïîëüçîâàòåëåì.
				m_app->UserControl = true;
				// Äîáàâëåíèå êíèãè Excel.
				m_workBook = m_app->Workbooks->Add(Microsoft::Office::Interop::Excel::XlWBATemplate::xlWBATWorksheet);
				// Ñâÿçü ñî ñòðàíèöåé Excel.
				m_workSheet = (Microsoft::Office::Interop::Excel::Worksheet^)m_app->ActiveSheet;	 
				// Çàïîëíÿåì øàïêó
				for (int i = 0; i < dataGridView1->Columns->Count; i++)
				{
					 m_workSheet->Cells[1, i + 1] = dataGridView1->Columns[i]->Name;
					((Microsoft::Office::Interop::Excel::Range^)m_workSheet->Cells[1, i + 1])->Font->Bold = true;
				}
				// Ïèøåì ñòðîêó
				for (int i = 0; i < dataGridView1->Rows->Count; i++)
				{
					DataGridViewRow^ row = dataGridView1->Rows[i]; // ñòðîêè
					for (int j = 0; j < row->Cells->Count; j++) //öèêë ïî ÿ÷åéêàì ñòðîêè
						m_workSheet->Cells[i + 2, j + 1] = row->Cells[j]->Value;		
				}
				// Ñîõðàíåíèå ôàéëà Excel.
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
		private: System::Void îÏðîãðàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			f_about^ fa = gcnew f_about();
			fa->ShowDialog();
		}
	};
}
