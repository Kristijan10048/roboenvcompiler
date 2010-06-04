#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace RoboEnvCompiler {

	/// <summary>
	/// Summary for errorList
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class errorList : public System::Windows::Forms::Form
	{
	public:
		errorList(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~errorList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  okbut;





	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::DataGridView^  errorGrid;
	private: System::Windows::Forms::DataGridViewImageColumn^  imgError;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Line;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Error;
	private: System::Windows::Forms::GroupBox^  groupBox1;




















	protected: 










	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(errorList::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->okbut = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->errorGrid = (gcnew System::Windows::Forms::DataGridView());
			this->imgError = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Line = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorGrid))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// okbut
			// 
			this->okbut->Location = System::Drawing::Point(375, 3);
			this->okbut->Name = L"okbut";
			this->okbut->Size = System::Drawing::Size(75, 22);
			this->okbut->TabIndex = 1;
			this->okbut->Text = L"OK";
			this->okbut->UseVisualStyleBackColor = true;
			this->okbut->Click += gcnew System::EventHandler(this, &errorList::okbut_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				81)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel1->Controls->Add(this->okbut, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 469);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.35484F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(825, 28);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// errorGrid
			// 
			this->errorGrid->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->errorGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->errorGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->errorGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->imgError, this->Line, 
				this->column, this->Error});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Red;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->errorGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->errorGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->errorGrid->GridColor = System::Drawing::SystemColors::Control;
			this->errorGrid->Location = System::Drawing::Point(3, 16);
			this->errorGrid->Name = L"errorGrid";
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Red;
			this->errorGrid->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->errorGrid->Size = System::Drawing::Size(795, 432);
			this->errorGrid->TabIndex = 5;
			// 
			// imgError
			// 
			this->imgError->HeaderText = L"";
			this->imgError->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"imgError.Image")));
			this->imgError->Name = L"imgError";
			this->imgError->ReadOnly = true;
			this->imgError->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->imgError->Width = 24;
			// 
			// Line
			// 
			this->Line->HeaderText = L"Line";
			this->Line->Name = L"Line";
			this->Line->ReadOnly = true;
			this->Line->Width = 50;
			// 
			// column
			// 
			this->column->HeaderText = L"Column";
			this->column->Name = L"column";
			this->column->ReadOnly = true;
			this->column->Width = 50;
			// 
			// Error
			// 
			this->Error->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Red;
			this->Error->DefaultCellStyle = dataGridViewCellStyle1;
			this->Error->HeaderText = L"Error";
			this->Error->Name = L"Error";
			this->Error->ReadOnly = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->errorGrid);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(801, 451);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// errorList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 497);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"errorList";
			this->Text = L"errorList";
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorGrid))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void okbut_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 
			 }
	 public: void addRow(String ^line,String ^column,String^ error)
			 {
				 int i=this->errorGrid->Rows->Add();
				// this->errorGrid->Rows[i]->
				 this->errorGrid->Rows[i]->Cells[1]->Value=line;
				 this->errorGrid->Rows[i]->Cells[2]->Value=column;
				 this->errorGrid->Rows[i]->Cells[3]->Value=error+": Внесениот карактер не е препознаен од јазикот";
			 }
};
}
