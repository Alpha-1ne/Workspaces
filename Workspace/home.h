#pragma once

namespace Workspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for home
	/// </summary>
	public ref class home : public System::Windows::Forms::Form
	{
	public:
		home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			main->Hide();
			newWSDialog->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ startButton;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ main;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ itemName;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ newWSDialog;
	private: System::Windows::Forms::Button^ saveButton;

	private: System::Windows::Forms::Button^ cancelBox;
	private: System::Windows::Forms::TextBox^ tbWorkSpaceName;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::OpenFileDialog^ selectApplicationDialog;


	private: System::Windows::Forms::Button^ chooseApplication;
	private: System::Windows::Forms::GroupBox^ applicationGroup;

	private: System::Windows::Forms::TextBox^ applicationPath;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ testApplication;
	private: System::Windows::Forms::TextBox^ tbDirectory;
	private: System::Windows::Forms::Button^ selectDirectoryButton;
	private: System::Windows::Forms::FolderBrowserDialog^ directorySelectDialog;
	private: System::Windows::Forms::ComboBox^ itemType;
	private: System::Windows::Forms::Label^ label6;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(home::typeid));
			this->close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->main = (gcnew System::Windows::Forms::Panel());
			this->newWSDialog = (gcnew System::Windows::Forms::Panel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelBox = (gcnew System::Windows::Forms::Button());
			this->tbWorkSpaceName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->applicationGroup = (gcnew System::Windows::Forms::GroupBox());
			this->tbDirectory = (gcnew System::Windows::Forms::TextBox());
			this->selectDirectoryButton = (gcnew System::Windows::Forms::Button());
			this->testApplication = (gcnew System::Windows::Forms::Button());
			this->applicationPath = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chooseApplication = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->itemName = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->selectApplicationDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->directorySelectDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->itemType = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->main->SuspendLayout();
			this->newWSDialog->SuspendLayout();
			this->applicationGroup->SuspendLayout();
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Transparent;
			this->close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.BackgroundImage")));
			this->close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->close->FlatAppearance->BorderSize = 0;
			this->close->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->close->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close->ForeColor = System::Drawing::Color::Transparent;
			this->close->Location = System::Drawing::Point(863, 12);
			this->close->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(20, 20);
			this->close->TabIndex = 0;
			this->close->UseMnemonic = false;
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &home::close_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 40));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(495, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(388, 89);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Workspaces";
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::SystemColors::Highlight;
			this->startButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->startButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->startButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->startButton->ForeColor = System::Drawing::Color::White;
			this->startButton->Location = System::Drawing::Point(335, 439);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(223, 58);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Get Started";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &home::startButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(838, 538);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &home::pictureBox1_Click);
			// 
			// main
			// 
			this->main->BackColor = System::Drawing::Color::Transparent;
			this->main->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"main.BackgroundImage")));
			this->main->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->main->Controls->Add(this->label6);
			this->main->Controls->Add(this->itemType);
			this->main->Controls->Add(this->newWSDialog);
			this->main->Controls->Add(this->applicationGroup);
			this->main->Controls->Add(this->treeView1);
			this->main->Controls->Add(this->label3);
			this->main->Controls->Add(this->button3);
			this->main->Controls->Add(this->label2);
			this->main->Controls->Add(this->itemName);
			this->main->Controls->Add(this->button2);
			this->main->Controls->Add(this->button1);
			this->main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main->Location = System::Drawing::Point(0, 0);
			this->main->Name = L"main";
			this->main->Size = System::Drawing::Size(900, 600);
			this->main->TabIndex = 4;
			this->main->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &home::main_Paint);
			// 
			// newWSDialog
			// 
			this->newWSDialog->BackColor = System::Drawing::SystemColors::InfoText;
			this->newWSDialog->Controls->Add(this->saveButton);
			this->newWSDialog->Controls->Add(this->cancelBox);
			this->newWSDialog->Controls->Add(this->tbWorkSpaceName);
			this->newWSDialog->Controls->Add(this->label4);
			this->newWSDialog->ForeColor = System::Drawing::Color::White;
			this->newWSDialog->Location = System::Drawing::Point(51, 518);
			this->newWSDialog->Name = L"newWSDialog";
			this->newWSDialog->Size = System::Drawing::Size(407, 186);
			this->newWSDialog->TabIndex = 8;
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::Blue;
			this->saveButton->Enabled = false;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->ForeColor = System::Drawing::Color::White;
			this->saveButton->Location = System::Drawing::Point(167, 134);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(93, 34);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &home::button5_Click);
			// 
			// cancelBox
			// 
			this->cancelBox->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->cancelBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelBox->ForeColor = System::Drawing::Color::White;
			this->cancelBox->Location = System::Drawing::Point(277, 134);
			this->cancelBox->Name = L"cancelBox";
			this->cancelBox->Size = System::Drawing::Size(85, 34);
			this->cancelBox->TabIndex = 2;
			this->cancelBox->Text = L"Cancel";
			this->cancelBox->UseVisualStyleBackColor = true;
			this->cancelBox->Click += gcnew System::EventHandler(this, &home::button4_Click);
			// 
			// tbWorkSpaceName
			// 
			this->tbWorkSpaceName->BackColor = System::Drawing::Color::Black;
			this->tbWorkSpaceName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbWorkSpaceName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbWorkSpaceName->ForeColor = System::Drawing::Color::White;
			this->tbWorkSpaceName->Location = System::Drawing::Point(31, 73);
			this->tbWorkSpaceName->Name = L"tbWorkSpaceName";
			this->tbWorkSpaceName->Size = System::Drawing::Size(331, 34);
			this->tbWorkSpaceName->TabIndex = 1;
			this->tbWorkSpaceName->TextChanged += gcnew System::EventHandler(this, &home::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 28);
			this->label4->TabIndex = 0;
			this->label4->Text = L"New Workspace";
			// 
			// applicationGroup
			// 
			this->applicationGroup->Controls->Add(this->tbDirectory);
			this->applicationGroup->Controls->Add(this->selectDirectoryButton);
			this->applicationGroup->Controls->Add(this->testApplication);
			this->applicationGroup->Controls->Add(this->applicationPath);
			this->applicationGroup->Controls->Add(this->label5);
			this->applicationGroup->Controls->Add(this->chooseApplication);
			this->applicationGroup->ForeColor = System::Drawing::Color::White;
			this->applicationGroup->Location = System::Drawing::Point(325, 255);
			this->applicationGroup->Name = L"applicationGroup";
			this->applicationGroup->Size = System::Drawing::Size(545, 321);
			this->applicationGroup->TabIndex = 10;
			this->applicationGroup->TabStop = false;
			this->applicationGroup->Text = L"Application Settings";
			// 
			// tbDirectory
			// 
			this->tbDirectory->Location = System::Drawing::Point(30, 105);
			this->tbDirectory->Name = L"tbDirectory";
			this->tbDirectory->ReadOnly = true;
			this->tbDirectory->Size = System::Drawing::Size(375, 25);
			this->tbDirectory->TabIndex = 14;
			// 
			// selectDirectoryButton
			// 
			this->selectDirectoryButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->selectDirectoryButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->selectDirectoryButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->selectDirectoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->selectDirectoryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->selectDirectoryButton->ForeColor = System::Drawing::Color::White;
			this->selectDirectoryButton->Location = System::Drawing::Point(411, 105);
			this->selectDirectoryButton->Name = L"selectDirectoryButton";
			this->selectDirectoryButton->Size = System::Drawing::Size(119, 25);
			this->selectDirectoryButton->TabIndex = 13;
			this->selectDirectoryButton->Text = L"Select Directory";
			this->selectDirectoryButton->UseVisualStyleBackColor = true;
			this->selectDirectoryButton->Click += gcnew System::EventHandler(this, &home::selectDirectoryButton_Click);
			// 
			// testApplication
			// 
			this->testApplication->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->testApplication->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->testApplication->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->testApplication->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->testApplication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->testApplication->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->testApplication->ForeColor = System::Drawing::Color::White;
			this->testApplication->Location = System::Drawing::Point(411, 283);
			this->testApplication->Name = L"testApplication";
			this->testApplication->Size = System::Drawing::Size(119, 25);
			this->testApplication->TabIndex = 12;
			this->testApplication->Text = L"Test";
			this->testApplication->UseVisualStyleBackColor = true;
			this->testApplication->Click += gcnew System::EventHandler(this, &home::testApplication_Click);
			// 
			// applicationPath
			// 
			this->applicationPath->Location = System::Drawing::Point(30, 64);
			this->applicationPath->Name = L"applicationPath";
			this->applicationPath->ReadOnly = true;
			this->applicationPath->Size = System::Drawing::Size(375, 25);
			this->applicationPath->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Application to launch";
			// 
			// chooseApplication
			// 
			this->chooseApplication->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->chooseApplication->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->chooseApplication->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->chooseApplication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chooseApplication->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->chooseApplication->ForeColor = System::Drawing::Color::White;
			this->chooseApplication->Location = System::Drawing::Point(411, 64);
			this->chooseApplication->Name = L"chooseApplication";
			this->chooseApplication->Size = System::Drawing::Size(119, 25);
			this->chooseApplication->TabIndex = 9;
			this->chooseApplication->Text = L"Select Application";
			this->chooseApplication->UseVisualStyleBackColor = true;
			this->chooseApplication->Click += gcnew System::EventHandler(this, &home::chooseApplication_Click);
			// 
			// treeView1
			// 
			this->treeView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->treeView1->Location = System::Drawing::Point(19, 88);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(281, 424);
			this->treeView1->TabIndex = 7;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &home::treeView1_AfterSelect);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(14, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 35);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Workspaces";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(861, 19);
			this->button3->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(20, 20);
			this->button3->TabIndex = 5;
			this->button3->UseMnemonic = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &home::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(324, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Display Name";
			this->label2->Click += gcnew System::EventHandler(this, &home::label2_Click);
			// 
			// itemName
			// 
			this->itemName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->itemName->Location = System::Drawing::Point(325, 92);
			this->itemName->Name = L"itemName";
			this->itemName->Size = System::Drawing::Size(545, 41);
			this->itemName->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(170, 534);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"New Item";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(19, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"New Workspace";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &home::button1_Click_1);
			// 
			// selectApplicationDialog
			// 
			this->selectApplicationDialog->Filter = L"\"EXE|*.exe|All files|*.*\"";
			// 
			// itemType
			// 
			this->itemType->BackColor = System::Drawing::SystemColors::Window;
			this->itemType->Cursor = System::Windows::Forms::Cursors::Default;
			this->itemType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->itemType->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->itemType->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.5F, System::Drawing::FontStyle::Bold));
			this->itemType->FormattingEnabled = true;
			this->itemType->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->itemType->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Application", L"Application + Directory", L"URL",
					L"Command"
			});
			this->itemType->Location = System::Drawing::Point(325, 162);
			this->itemType->Name = L"itemType";
			this->itemType->Size = System::Drawing::Size(545, 23);
			this->itemType->TabIndex = 11;
			this->itemType->SelectedIndexChanged += gcnew System::EventHandler(this, &home::itemType_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(324, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 23);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Action";
			this->label6->Click += gcnew System::EventHandler(this, &home::label6_Click);
			// 
			// home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->main);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->close);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"home";
			this->Load += gcnew System::EventHandler(this, &home::home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->main->ResumeLayout(false);
			this->main->PerformLayout();
			this->newWSDialog->ResumeLayout(false);
			this->newWSDialog->PerformLayout();
			this->applicationGroup->ResumeLayout(false);
			this->applicationGroup->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("https://alphaone.me");
}
private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
	main->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	newWSDialog->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	newWSDialog->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		
		newWSDialog->Hide();
		String^ fileName = "workspaces.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName,true);
		sw->WriteLine(tbWorkSpaceName->Text);
		sw->Close();
		tbWorkSpaceName->Text = "";
		setTree();
}

	   private: System::Void setTree() {
		   String^ fileName = "workspaces.txt";
		   try
		   {
			   Console::WriteLine("trying to open file {0}...", fileName);
			   StreamReader^ din = File::OpenText(fileName);

			   String^ str;
			   int count = 0;
			   while ((str = din->ReadLine()) != nullptr)
			   {
				   count++;
				   Console::WriteLine("line {0}: {1}", count, str);
				   itemName->Text = str;
			   }
		   }
		   catch (Exception^ e)
		   {
			   if (dynamic_cast<FileNotFoundException^>(e))
				   Console::WriteLine("file '{0}' not found", fileName);
			   else
				   Console::WriteLine("problem reading file '{0}'", fileName);
		   }
	   }

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		saveButton->Enabled = tbWorkSpaceName->Text != "";
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void main_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void chooseApplication_Click(System::Object^ sender, System::EventArgs^ e) {
	if (selectApplicationDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		applicationPath->Text = selectApplicationDialog->FileName;
	}
}
private: System::Void testApplication_Click(System::Object^ sender, System::EventArgs^ e) {
	if (applicationPath->Text == "")
	{
		MessageBox::Show("Please select application", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
	}
	else {
		Process^ myProcess = gcnew Process();
		myProcess->StartInfo->UseShellExecute = false;
		// You can start any process, HelloWorld is a do-nothing example.
		myProcess->StartInfo->FileName = applicationPath->Text;
		if(tbDirectory->Text != "")
		myProcess->StartInfo->Arguments = tbDirectory -> Text;
		myProcess->StartInfo->CreateNoWindow = true;
		myProcess->Start();
	}
}
private: System::Void selectDirectoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (directorySelectDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		tbDirectory->Text = directorySelectDialog->SelectedPath;
	}
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void itemType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	tbDirectory->Text = itemType->SelectedIndex.ToString();
}
};
}
