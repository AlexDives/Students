#pragma once

namespace Kyrs1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для f_about
	/// </summary>
	public ref class f_about : public System::Windows::Forms::Form
	{
	public:
		f_about(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Text = "О программе Students";					// название формы
			this->labelProductName->Text = "Students";				// название программы
			this->labelVersion->Text = "Версия 1.0";				// версия прогарммы
			this->labelCopyright->Text = "Выполнила студентка группы 4КМ-195 Малашкина А.А.";						// авторские права
			this->textBoxDescription->Text = "Данная программа дает возможность вести " +
										     "учет студентов в учебном заведении, " + 
											 "а также их успеваемость.";					// описание программы
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~f_about()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel;
	protected:
	private: System::Windows::Forms::PictureBox^  logoPictureBox;
	private: System::Windows::Forms::Label^  labelProductName;
	private: System::Windows::Forms::Label^  labelVersion;
	private: System::Windows::Forms::Label^  labelCopyright;

	private: System::Windows::Forms::TextBox^  textBoxDescription;
	private: System::Windows::Forms::Button^  okButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(f_about::typeid));
			this->tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->logoPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->labelProductName = (gcnew System::Windows::Forms::Label());
			this->labelVersion = (gcnew System::Windows::Forms::Label());
			this->labelCopyright = (gcnew System::Windows::Forms::Label());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel
			// 
			this->tableLayoutPanel->ColumnCount = 2;
			this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67)));
			this->tableLayoutPanel->Controls->Add(this->logoPictureBox, 0, 0);
			this->tableLayoutPanel->Controls->Add(this->labelProductName, 1, 0);
			this->tableLayoutPanel->Controls->Add(this->labelVersion, 1, 1);
			this->tableLayoutPanel->Controls->Add(this->labelCopyright, 1, 2);
			this->tableLayoutPanel->Controls->Add(this->textBoxDescription, 1, 4);
			this->tableLayoutPanel->Controls->Add(this->okButton, 1, 5);
			this->tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel->Name = L"tableLayoutPanel";
			this->tableLayoutPanel->Padding = System::Windows::Forms::Padding(9);
			this->tableLayoutPanel->RowCount = 6;
			this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.60079F)));
			this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 3.162055F)));
			this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel->Size = System::Drawing::Size(353, 271);
			this->tableLayoutPanel->TabIndex = 1;
			// 
			// logoPictureBox
			// 
			this->logoPictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->logoPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPictureBox.Image")));
			this->logoPictureBox->Location = System::Drawing::Point(12, 12);
			this->logoPictureBox->Name = L"logoPictureBox";
			this->tableLayoutPanel->SetRowSpan(this->logoPictureBox, 6);
			this->logoPictureBox->Size = System::Drawing::Size(104, 247);
			this->logoPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logoPictureBox->TabIndex = 12;
			this->logoPictureBox->TabStop = false;
			// 
			// labelProductName
			// 
			this->labelProductName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelProductName->Location = System::Drawing::Point(125, 9);
			this->labelProductName->Margin = System::Windows::Forms::Padding(6, 0, 3, 0);
			this->labelProductName->MaximumSize = System::Drawing::Size(0, 17);
			this->labelProductName->Name = L"labelProductName";
			this->labelProductName->Size = System::Drawing::Size(216, 17);
			this->labelProductName->TabIndex = 19;
			this->labelProductName->Text = L"Название продукта";
			this->labelProductName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelVersion
			// 
			this->labelVersion->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelVersion->Location = System::Drawing::Point(125, 34);
			this->labelVersion->Margin = System::Windows::Forms::Padding(6, 0, 3, 0);
			this->labelVersion->MaximumSize = System::Drawing::Size(0, 17);
			this->labelVersion->Name = L"labelVersion";
			this->labelVersion->Size = System::Drawing::Size(216, 17);
			this->labelVersion->TabIndex = 0;
			this->labelVersion->Text = L"Версия";
			this->labelVersion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelCopyright
			// 
			this->labelCopyright->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelCopyright->Location = System::Drawing::Point(125, 59);
			this->labelCopyright->Margin = System::Windows::Forms::Padding(6, 0, 3, 0);
			this->labelCopyright->Name = L"labelCopyright";
			this->labelCopyright->Size = System::Drawing::Size(216, 42);
			this->labelCopyright->TabIndex = 21;
			this->labelCopyright->Text = L"Авторские права\r\n";
			this->labelCopyright->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxDescription->Location = System::Drawing::Point(125, 112);
			this->textBoxDescription->Margin = System::Windows::Forms::Padding(6, 3, 3, 3);
			this->textBoxDescription->Multiline = true;
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->ReadOnly = true;
			this->textBoxDescription->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxDescription->Size = System::Drawing::Size(216, 120);
			this->textBoxDescription->TabIndex = 23;
			this->textBoxDescription->TabStop = false;
			this->textBoxDescription->Text = L"Описание";
			// 
			// okButton
			// 
			this->okButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->okButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->okButton->Location = System::Drawing::Point(266, 238);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 21);
			this->okButton->TabIndex = 24;
			this->okButton->Text = L"&ОК";
			// 
			// f_about
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(353, 271);
			this->Controls->Add(this->tableLayoutPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"f_about";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"О программе";
			this->tableLayoutPanel->ResumeLayout(false);
			this->tableLayoutPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	};
}
