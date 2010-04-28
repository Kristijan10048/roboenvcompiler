#pragma once

#include "aboutForm.h"

namespace RoboEnvCompiler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;
	using namespace RoboEnvCompiler;


	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->lastw=this->Width;
			this->lasth=this->Height;
		    this->razw=this->lastw-this->tbInput->Width;
			this->razh=this->lasth-this->tbInput->Height;
			this->fileChanged=false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitAltF4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  tbInput;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  compileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stepOverToolStripMenuItem;

	private: int lastw;
	private: int lasth;
	private: int razw;
	private: int razh;
	private: bool saved;
	private: bool fileChanged;
	private: String ^textFilePath;
	private: System::Windows::Forms::ToolStripMenuItem^  openCtrlOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveCtrlSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  findToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectAllToolStripMenuItem;
	private: 

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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openCtrlOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveCtrlSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitAltF4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stepOverToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tbInput = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 448);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(797, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->toolStripMenuItem1, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(797, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->openCtrlOToolStripMenuItem, 
				this->saveCtrlSToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitAltF4ToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openCtrlOToolStripMenuItem
			// 
			this->openCtrlOToolStripMenuItem->Name = L"openCtrlOToolStripMenuItem";
			this->openCtrlOToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D0));
			this->openCtrlOToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->openCtrlOToolStripMenuItem->Text = L"Open";
			this->openCtrlOToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openCtrlOToolStripMenuItem_Click);
			// 
			// saveCtrlSToolStripMenuItem
			// 
			this->saveCtrlSToolStripMenuItem->Name = L"saveCtrlSToolStripMenuItem";
			this->saveCtrlSToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveCtrlSToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveCtrlSToolStripMenuItem->Text = L"Save";
			this->saveCtrlSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveCtrlSToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as..";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// exitAltF4ToolStripMenuItem
			// 
			this->exitAltF4ToolStripMenuItem->Name = L"exitAltF4ToolStripMenuItem";
			this->exitAltF4ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitAltF4ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitAltF4ToolStripMenuItem->Text = L"Exit";
			this->exitAltF4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitAltF4ToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->copyToolStripMenuItem, 
				this->pasteToolStripMenuItem, this->findToolStripMenuItem, this->selectAllToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->copyToolStripMenuItem->Text = L"&Copy";
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			// 
			// findToolStripMenuItem
			// 
			this->findToolStripMenuItem->Name = L"findToolStripMenuItem";
			this->findToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->findToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->findToolStripMenuItem->Text = L"Find";
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->selectAllToolStripMenuItem->Text = L"Select all";
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::selectAllToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->compileToolStripMenuItem, 
				this->stepOverToolStripMenuItem});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(41, 20);
			this->toolStripMenuItem1->Text = L"Build";
			// 
			// compileToolStripMenuItem
			// 
			this->compileToolStripMenuItem->Name = L"compileToolStripMenuItem";
			this->compileToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->compileToolStripMenuItem->Text = L"Compile";
			// 
			// stepOverToolStripMenuItem
			// 
			this->stepOverToolStripMenuItem->Name = L"stepOverToolStripMenuItem";
			this->stepOverToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->stepOverToolStripMenuItem->Text = L"Step Over F10";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// tbInput
			// 
			this->tbInput->Location = System::Drawing::Point(12, 27);
			this->tbInput->Multiline = true;
			this->tbInput->Name = L"tbInput";
			this->tbInput->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->tbInput->Size = System::Drawing::Size(670, 416);
			this->tbInput->TabIndex = 4;
			this->tbInput->TextChanged += gcnew System::EventHandler(this, &Form1::tbInput_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 470);
			this->Controls->Add(this->tbInput);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"RoboEnvCompiler";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void exitAltF4ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
		}


private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 //kreiranje i alokacna na memoriski prostor za nova forma vo C++
			 aboutForm ^about;
			 about= gcnew aboutForm();
			 about->Show();
		 }
		



private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			 Screen ^sp = Screen::PrimaryScreen;
			 int w = sp->WorkingArea.Width;
			 int h = sp->WorkingArea.Height;

			 if(this->WindowState == FormWindowState::Maximized)
			 {			
				this->tbInput->Width=w-this->razw;		
				this->tbInput->Height=h-this->razh;
				
			 }
			 if(this->WindowState == FormWindowState::Normal)
			 {
				 this->tbInput->Width=this->lastw-this->razw;
				 this->tbInput->Height=this->lasth-this->razh;
			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_ResizeBegin(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void openCtrlOToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->openFileDialog1->ShowDialog();
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->saveFileDialog1->ShowDialog();
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	
	   
		textFilePath = this->openFileDialog1->FileName->ToString();
		
		if (!textFilePath->IsNullOrEmpty(textFilePath))
		{
			this->Text="RoboEnvCompiler-"+textFilePath;
			FileStream ^fs = gcnew FileStream(textFilePath,FileMode::Open,FileAccess::Read);
			StreamReader ^sr = gcnew StreamReader(fs);		
			this->tbInput->Text="";
			while(!sr->EndOfStream)
			{
				//this->tbInput->Lines[line]= gcnew String(sr->ReadLine());			
				this->tbInput->Text+=sr->ReadLine()+"\r\n";
				//line++;
			}
			sr->Close();
			fs->Close();
		}

	}
private: System::Void selectAllToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tbInput->SelectAll();
		 }
private: System::Void tbInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(this->fileChanged)
				this->Text="RoboEnvCompiler-"+textFilePath+"*";
			 this->fileChanged=true;
		 }
private: System::Void saveCtrlSToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(String::IsNullOrEmpty(this->textFilePath))
			 {
				 this->saveFileDialog1->ShowDialog();
				 this->saveFileDialog1->FileName;
			 }
			 else{

			 }
			 this->Text="RoboEnvCompiler-"+textFilePath;
		 }
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 FileStream ^fs= gcnew FileStream(this->textFilePath,FileMode::OpenOrCreate,FileAccess::Write);
			 StreamWriter ^sw = gcnew StreamWriter(fs);
			 for(int i=0;i<=this->tbInput->Lines->Length;i++)
				 sw->WriteLine(this->tbInput->Lines[i]);
			 sw->Close();
			 fs->Close();
			 this->statusStrip1->Text="Saved to file:" + this->textFilePath;
		 }
};
}

