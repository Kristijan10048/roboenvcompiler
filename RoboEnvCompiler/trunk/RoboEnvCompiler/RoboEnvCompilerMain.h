#pragma once

#include "aboutForm.h"
#include "errorList.h"
#include "tokensBox.h"

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
	/// Summary for RoboEnvCompilerMain
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class RoboEnvCompilerMain : public System::Windows::Forms::Form
	{
	public:
		RoboEnvCompilerMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->lastw=this->Width;
			this->lasth=this->Height;
			//razlika za tbInpt
		    this->razw=this->lastw-this->tbInput->Width;
			this->razh=this->lasth-this->tbInput->Height;

			//this->razOutw=this->tbInput->Location.X
			this->fileChanged=false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RoboEnvCompilerMain()
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


	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  compileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stepOverToolStripMenuItem;

	private: int lastw;
	private: int lasth;
	private: int razw;
	private: int razh;

	private: errorList ^f; 

	private: int razOutw;
	private: int razouth;
	private: bool saved;
	private: bool fileChanged;
	private: String ^textFilePath;
	private: static String ^componentsPath="C:\\Documents and Settings\\Kristijan\\My Documents\\Visual Studio 2008\\Projects\\kompajleri\\robocompiler\\RoboEnvCompiler\\RoboEnvCompiler\\";
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
	private: System::Windows::Forms::TextBox^  tbOutput;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  tbInput;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  showErrorListToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton8;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton9;
	private: System::Windows::Forms::ToolStripMenuItem^  checkSyntaxToolStripMenuItem;








	private: System::ComponentModel::IContainer^  components;







	private: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RoboEnvCompilerMain::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openCtrlOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveCtrlSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitAltF4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showErrorListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stepOverToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkSyntaxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tbOutput = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tbInput = (gcnew System::Windows::Forms::RichTextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 574);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(794, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1SZszd";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->toolStripMenuItem1, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(794, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->openCtrlOToolStripMenuItem, 
				this->newToolStripMenuItem, this->saveCtrlSToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitAltF4ToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openCtrlOToolStripMenuItem
			// 
			this->openCtrlOToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openCtrlOToolStripMenuItem.Image")));
			this->openCtrlOToolStripMenuItem->Name = L"openCtrlOToolStripMenuItem";
			this->openCtrlOToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D0));
			this->openCtrlOToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->openCtrlOToolStripMenuItem->Text = L"Open";
			this->openCtrlOToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::openCtrlOToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::newToolStripMenuItem_Click);
			// 
			// saveCtrlSToolStripMenuItem
			// 
			this->saveCtrlSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveCtrlSToolStripMenuItem.Image")));
			this->saveCtrlSToolStripMenuItem->Name = L"saveCtrlSToolStripMenuItem";
			this->saveCtrlSToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveCtrlSToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->saveCtrlSToolStripMenuItem->Text = L"Save";
			this->saveCtrlSToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::saveCtrlSToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveAsToolStripMenuItem.Image")));
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as..";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::saveAsToolStripMenuItem_Click);
			// 
			// exitAltF4ToolStripMenuItem
			// 
			this->exitAltF4ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitAltF4ToolStripMenuItem.Image")));
			this->exitAltF4ToolStripMenuItem->Name = L"exitAltF4ToolStripMenuItem";
			this->exitAltF4ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitAltF4ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->exitAltF4ToolStripMenuItem->Text = L"Exit";
			this->exitAltF4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::exitAltF4ToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->copyToolStripMenuItem, 
				this->cutToolStripMenuItem, this->pasteToolStripMenuItem, this->findToolStripMenuItem, this->selectAllToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"copyToolStripMenuItem.Image")));
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->copyToolStripMenuItem->Text = L"&Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::copyToolStripMenuItem_Click);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"cutToolStripMenuItem.Image")));
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::cutToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pasteToolStripMenuItem.Image")));
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::pasteToolStripMenuItem_Click);
			// 
			// findToolStripMenuItem
			// 
			this->findToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"findToolStripMenuItem.Image")));
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
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::selectAllToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->compileToolStripMenuItem, 
				this->showErrorListToolStripMenuItem, this->stepOverToolStripMenuItem, this->checkSyntaxToolStripMenuItem});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(41, 20);
			this->toolStripMenuItem1->Text = L"Build";
			// 
			// compileToolStripMenuItem
			// 
			this->compileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"compileToolStripMenuItem.Image")));
			this->compileToolStripMenuItem->Name = L"compileToolStripMenuItem";
			this->compileToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->compileToolStripMenuItem->Text = L"Compile";
			this->compileToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::compileToolStripMenuItem_Click);
			// 
			// showErrorListToolStripMenuItem
			// 
			this->showErrorListToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"showErrorListToolStripMenuItem.Image")));
			this->showErrorListToolStripMenuItem->Name = L"showErrorListToolStripMenuItem";
			this->showErrorListToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->showErrorListToolStripMenuItem->Text = L"Show error list";
			this->showErrorListToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::showErrorListToolStripMenuItem_Click);
			// 
			// stepOverToolStripMenuItem
			// 
			this->stepOverToolStripMenuItem->Name = L"stepOverToolStripMenuItem";
			this->stepOverToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->stepOverToolStripMenuItem->Text = L"Step Over";
			this->stepOverToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::stepOverToolStripMenuItem_Click);
			// 
			// checkSyntaxToolStripMenuItem
			// 
			this->checkSyntaxToolStripMenuItem->Name = L"checkSyntaxToolStripMenuItem";
			this->checkSyntaxToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->checkSyntaxToolStripMenuItem->Text = L"Syntax check";
			this->checkSyntaxToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::checkSintaxToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::aboutToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Enviroment files (*.env)|*.env|RoboL files (*.rob)|*.rob|Text Files (.txt)|*.txt|" 
				L"All Files (*.*)|*.*";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &RoboEnvCompilerMain::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &RoboEnvCompilerMain::saveFileDialog1_FileOk);
			// 
			// tbOutput
			// 
			this->tbOutput->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tbOutput->Location = System::Drawing::Point(3, 34);
			this->tbOutput->Multiline = true;
			this->tbOutput->Name = L"tbOutput";
			this->tbOutput->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->tbOutput->Size = System::Drawing::Size(788, 188);
			this->tbOutput->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->tbOutput);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox1->Location = System::Drawing::Point(0, 349);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(794, 225);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(775, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(16, 18);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::pictureBox1_Click);
			// 
			// tbInput
			// 
			this->tbInput->AcceptsTab = true;
			this->tbInput->EnableAutoDragDrop = true;
			this->tbInput->Font = (gcnew System::Drawing::Font(L"Courier New", 10));
			this->tbInput->Location = System::Drawing::Point(12, 58);
			this->tbInput->Name = L"tbInput";
			this->tbInput->Size = System::Drawing::Size(770, 285);
			this->tbInput->TabIndex = 6;
			this->tbInput->Text = L"";
			this->tbInput->CursorChanged += gcnew System::EventHandler(this, &RoboEnvCompilerMain::tbInput_CursorChanged);
			this->tbInput->SelectionChanged += gcnew System::EventHandler(this, &RoboEnvCompilerMain::tbInput_SelectionChanged);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->toolStripButton1, 
				this->toolStripButton2, this->toolStripButton3, this->toolStripSeparator1, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, 
				this->toolStripButton7, this->toolStripSeparator2, this->toolStripButton8, this->toolStripButton9});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(794, 25);
			this->toolStrip1->TabIndex = 7;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Open";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::openCtrlOToolStripMenuItem_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"New";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::newToolStripMenuItem_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"Save";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::saveCtrlSToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"Copy";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::copyToolStripMenuItem_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"Cut";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::cutToolStripMenuItem_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->ToolTipText = L"Paste";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::pasteToolStripMenuItem_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->ToolTipText = L"Find";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(23, 22);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->ToolTipText = L"Compile";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::compileToolStripMenuItem_Click);
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton9.Image")));
			this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Size = System::Drawing::Size(23, 22);
			this->toolStripButton9->Text = L"toolStripButton9";
			this->toolStripButton9->ToolTipText = L"Show error list";
			this->toolStripButton9->Click += gcnew System::EventHandler(this, &RoboEnvCompilerMain::showErrorListToolStripMenuItem_Click);
			// 
			// RoboEnvCompilerMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 596);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->tbInput);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RoboEnvCompilerMain";
			this->Text = L"RoboEnvCompiler";
			this->Load += gcnew System::EventHandler(this, &RoboEnvCompilerMain::RoboEnvCompilerMain_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &RoboEnvCompilerMain::RoboEnvCompilerMain_SizeChanged);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
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
		



private: System::Void RoboEnvCompilerMain_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			 Screen ^sp = Screen::PrimaryScreen;
			 int w = sp->WorkingArea.Width;
			 int h = sp->WorkingArea.Height;

			 if(this->WindowState == FormWindowState::Maximized)
			 {			
				this->tbInput->Width=w-this->razw;		
				this->tbInput->Height=h-this->razh;

				this->groupBox1->Width=w-this->razw;
				this->tbOutput->Width=w-this->razw;
				//Point pos= new Point(10,10);
				//Size sz= new Size(10,10);
				//this->groupBox1->Location.Y=5;
				//this->groupBox1->Location.X=5;
				
			 }
			 if(this->WindowState == FormWindowState::Normal)
			 {
				 this->tbInput->Width=this->lastw-this->razw;
				 this->tbInput->Height=this->lasth-this->razh;
				 this->groupBox1->Width=this->lastw-this->razw;
				 this->tbOutput->Width=this->lastw-this->razw;
			 }
		 }
private: System::Void RoboEnvCompilerMain_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void RoboEnvCompilerMain_ResizeBegin(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void openCtrlOToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->openFileDialog1->ShowDialog();
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->saveFileDialog1->ShowDialog();
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	
	   
		textFilePath = this->openFileDialog1->FileName->ToString();
		
		if (!System::String::IsNullOrEmpty(textFilePath))
		{
			this->Text="RoboEnvCompiler-"+textFilePath;
			FileStream ^fs = gcnew FileStream(textFilePath,FileMode::Open,FileAccess::Read);
			StreamReader ^sr = gcnew StreamReader(fs,System::Text::Encoding::Default);		
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
				 this->textFilePath=this->saveFileDialog1->FileName;
			 }
			 if(!String::IsNullOrEmpty(this->textFilePath))
			 {
				this->saveFile(this->textFilePath);
				this->Text="RoboEnvCompiler-"+textFilePath;
				this->statusStrip1->Text="Saved to file:" + this->textFilePath;
			 }
			
		 }
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 
		 }


private: void saveFile(String ^path)
		 {
			if(!String::IsNullOrEmpty(path))
			 {
				FileStream ^fs= gcnew FileStream(path,FileMode::Truncate,FileAccess::Write);
				StreamWriter ^sw = gcnew StreamWriter(fs,System::Text::Encoding::Default);
				sw->Write(tbInput->Text);
				sw->Close();
				fs->Close();
				/*for(int i=0;i<this->tbInput->Lines->Length;i++)
					sw->WriteLine(this->tbInput->Lines[i]);*/
			 }
		 }
private: System::Void compileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if(this->textFilePath != nullptr)
				 this->saveFile(this->textFilePath);
			 else{
				this->saveFileDialog1->ShowDialog();
				this->textFilePath=this->saveFileDialog1->FileName;
				this->saveFile(this->textFilePath);
			 }

			 //stasrtuvanje na lekserot///////////////////////////////////////////////
				this->Text="RoboEnvCompiler-"+textFilePath;
				
				System::Diagnostics::ProcessStartInfo ^si = gcnew System::Diagnostics::ProcessStartInfo();
				si->UseShellExecute=false;
				si->FileName=componentsPath+"demo000.exe";
				si->Arguments="\""+this->textFilePath+"\"";			
				si->CreateNoWindow=true;				
				si->RedirectStandardOutput=true;

				this->groupBox1->Text=si->Arguments->ToString();
				System::Diagnostics::Process ^p= System::Diagnostics::Process::Start(si);
				p->WaitForExit();
				String ^str=p->StandardOutput->ReadToEnd();
				this->tbOutput->Text="";
				this->tbOutput->Text=str;
			
				f = gcnew errorList();
				String ^line;
				int len=this->tbOutput->Lines->Length;
				for(int i=0;i<len;i++)
				{
					line=this->tbOutput->Lines[i];
					this->markRedLine(line,f);	
				}			
				
				//autoscrol
				this->tbOutput->SelectionStart=this->tbOutput->TextLength;
				this->tbOutput->ScrollToCaret();	
			  f->Show();	 
		 }
private: void markRedLine(String ^str ,errorList ^fp){
			// String spl[];
			 array<String^>^ spl=str->Split(':');
			 //int i;
			 //int line = int::Parse(spl[0]);
			 //int col = int::Parse(spl[1]);
			
			 //int inpline=curline->Length;
			 if(spl->Length==3)
			 if(spl[2]=="NEPOZNAT")
			 {
				 fp->addRow(spl[0],spl[1],spl[2]);
			 }

		}

private: void markLine(int pos)
		 {
			 int offset=0;
			 int i;
			 for(i=0;i<pos;i++)
				 offset+=this->tbInput->Lines[i]->Length;

			int inpline=this->tbInput->Lines[pos]->Length;

			this->tbInput->Select(offset+1, inpline );
			this->tbInput->SelectionColor=Color::Red;
			this->tbInput->Select(0,0);
		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tbInput->Text="";
			 this->textFilePath="";
			 this->fileChanged=false;
			 this->Text="";
			 this->tbOutput->Text="";
		 }

private: System::Void stepOverToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  
			  
			//  this->tbInput->SelectedText=this->tbInput->Lines[0]->ToString();
			// this->tbInput->Select(0,4);
		//	 this->markLine(5);
			 //this->tbInput->selection
			// this->tbInput->SelectionBackColor=Color::Magenta;
			//  this->tbInput->SelectionColor=Color::White;
			//  this->tbInput->Select(0,0);
			//	MessageBox ^mb = gcnew MessageBox(;
			// mb->Show("test");
			
		 }
private: System::Void tbInput_CursorChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void tbInput_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
			 int sstart=this->tbInput->SelectionStart;//
			 int col=sstart-this->tbInput->GetFirstCharIndexOfCurrentLine()+1;
			 int line=this->tbInput->GetLineFromCharIndex(sstart)+1;

			 this->toolStripStatusLabel1->Text="Line:"+line+" Column:"+col;
		 }
private: System::Void copyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Clipboard::SetDataObject(this->tbInput->SelectedText,true);
		 }
private: System::Void cutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Clipboard::SetDataObject(this->tbInput->SelectedText,true);
			 this->tbInput->SelectedText="";
		 }
private: System::Void pasteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			// Clipboard::GetText();
			 this->tbInput->Paste();
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 tokensBox ^tbox = gcnew tokensBox();
			 tbox->setText(this->tbOutput->Text);
			 tbox->Show();
		 }
private: System::Void showErrorListToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->f != nullptr )
				 this->f->Show();
			 //System::Windows::Forms::MessageBox::Show("test");
		 }

private: System::Void checkSintaxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //startuvanje na konvertor
			 System::Diagnostics::ProcessStartInfo ^convertor = gcnew System::Diagnostics::ProcessStartInfo();
			 convertor->UseShellExecute=false;
			 convertor->FileName=componentsPath+"conv.exe";
			 convertor->Arguments="\""+this->textFilePath+"\""+" tmp.txt";			
			 convertor->CreateNoWindow=true;				
			 convertor->RedirectStandardOutput=true;

			 System::Diagnostics::Process ^p= System::Diagnostics::Process::Start(convertor);
			 p->WaitForExit();
			 String ^str=p->StandardOutput->ReadToEnd();
			 this->tbOutput->Text="";
			 this->tbOutput->Text=str;
			 //end startuvanje na konvertor

			 //startuvanje na parser
			 System::Diagnostics::ProcessStartInfo ^parser = gcnew System::Diagnostics::ProcessStartInfo();
			 parser->UseShellExecute=false;
			 parser->FileName=componentsPath+"parser.exe";
			 parser->Arguments="tmp.txt";			
			 parser->CreateNoWindow=true;				
			 parser->RedirectStandardOutput=true;
			 parser->RedirectStandardError=true;

			 System::Diagnostics::Process ^p1= System::Diagnostics::Process::Start(parser);
			 p1->WaitForExit();
			 String ^str1=p1->StandardOutput->ReadToEnd();
			 String ^err=p1->StandardError->ReadToEnd();
			 //this->tbOutput->Text="";
			 this->tbOutput->Text+=str1;
			 this->tbOutput->Text+=err;

			 //end startuvanje na parser

			 //autoscrol
				this->tbOutput->SelectionStart=this->tbOutput->TextLength;
				this->tbOutput->ScrollToCaret();	
				
		 }
};
}

