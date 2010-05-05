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
	private: System::Windows::Forms::DataGridView^  errorGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Line;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Error;



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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->okbut = (gcnew System::Windows::Forms::Button());
			this->errorGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Line = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// okbut
			// 
			this->okbut->Location = System::Drawing::Point(375, 462);
			this->okbut->Name = L"okbut";
			this->okbut->Size = System::Drawing::Size(75, 23);
			this->okbut->TabIndex = 1;
			this->okbut->Text = L"OK";
			this->okbut->UseVisualStyleBackColor = true;
			this->okbut->Click += gcnew System::EventHandler(this, &errorList::okbut_Click);
			// 
			// errorGrid
			// 
			this->errorGrid->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->errorGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->errorGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Line, this->column, 
				this->Error});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Red;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->errorGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->errorGrid->Dock = System::Windows::Forms::DockStyle::Top;
			this->errorGrid->Location = System::Drawing::Point(0, 0);
			this->errorGrid->Name = L"errorGrid";
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Red;
			this->errorGrid->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->errorGrid->Size = System::Drawing::Size(825, 445);
			this->errorGrid->TabIndex = 2;
			// 
			// Line
			// 
			this->Line->HeaderText = L"Line";
			this->Line->Name = L"Line";
			this->Line->ReadOnly = true;
			// 
			// column
			// 
			this->column->HeaderText = L"Column";
			this->column->Name = L"column";
			this->column->ReadOnly = true;
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
			// errorList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 497);
			this->Controls->Add(this->errorGrid);
			this->Controls->Add(this->okbut);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"errorList";
			this->Text = L"errorList";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void okbut_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 
			 }
	 public: void addRow(String ^line,String ^column,String^ error)
			 {
				 int i=this->errorGrid->Rows->Add();
				 this->errorGrid->Rows[i]->Cells[0]->Value=line;
				 this->errorGrid->Rows[i]->Cells[1]->Value=column;
				 this->errorGrid->Rows[i]->Cells[2]->Value=error+": Внесениот карактер не е препознаен од јазикот";
			 }
};
}
