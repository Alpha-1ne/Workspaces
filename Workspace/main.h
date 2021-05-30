#pragma once

namespace Workspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ itemType;
	private: System::Windows::Forms::GroupBox^ applicationGroup;
	private: System::Windows::Forms::TextBox^ tbDirectory;
	private: System::Windows::Forms::Button^ selectDirectoryButton;
	private: System::Windows::Forms::Panel^ newWSDialog;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::Button^ cancelBox;
	private: System::Windows::Forms::TextBox^ tbWorkSpaceName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ testApplication;
	private: System::Windows::Forms::TextBox^ applicationPath;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ chooseApplication;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ itemName;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::OpenFileDialog^ selectApplicationDialog;
	private: System::Windows::Forms::FolderBrowserDialog^ directorySelectDialog;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->itemType = (gcnew System::Windows::Forms::ComboBox());
			this->applicationGroup = (gcnew System::Windows::Forms::GroupBox());
			this->tbDirectory = (gcnew System::Windows::Forms::TextBox());
			this->selectDirectoryButton = (gcnew System::Windows::Forms::Button());
			this->newWSDialog = (gcnew System::Windows::Forms::Panel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelBox = (gcnew System::Windows::Forms::Button());
			this->tbWorkSpaceName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->SuspendLayout();
			this->applicationGroup->SuspendLayout();
			this->newWSDialog->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->itemType);
			this->panel1->Controls->Add(this->applicationGroup);
			this->panel1->Controls->Add(this->treeView1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->itemName);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 600);
			this->panel1->TabIndex = 5;
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
			// 
			// applicationGroup
			// 
			this->applicationGroup->Controls->Add(this->tbDirectory);
			this->applicationGroup->Controls->Add(this->selectDirectoryButton);
			this->applicationGroup->Controls->Add(this->newWSDialog);
			this->applicationGroup->Controls->Add(this->testApplication);
			this->applicationGroup->Controls->Add(this->applicationPath);
			this->applicationGroup->Controls->Add(this->label5);
			this->applicationGroup->Controls->Add(this->chooseApplication);
			this->applicationGroup->ForeColor = System::Drawing::Color::White;
			this->applicationGroup->Location = System::Drawing::Point(325, 205);
			this->applicationGroup->Name = L"applicationGroup";
			this->applicationGroup->Size = System::Drawing::Size(545, 371);
			this->applicationGroup->TabIndex = 10;
			this->applicationGroup->TabStop = false;
			this->applicationGroup->Text = L"Application Settings";
			// 
			// tbDirectory
			// 
			this->tbDirectory->Location = System::Drawing::Point(30, 105);
			this->tbDirectory->Name = L"tbDirectory";
			this->tbDirectory->ReadOnly = true;
			this->tbDirectory->Size = System::Drawing::Size(375, 22);
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
			this->selectDirectoryButton->Text = L"Choose Directory";
			this->selectDirectoryButton->UseVisualStyleBackColor = true;
			// 
			// newWSDialog
			// 
			this->newWSDialog->BackColor = System::Drawing::SystemColors::InfoText;
			this->newWSDialog->Controls->Add(this->saveButton);
			this->newWSDialog->Controls->Add(this->cancelBox);
			this->newWSDialog->Controls->Add(this->tbWorkSpaceName);
			this->newWSDialog->Controls->Add(this->label4);
			this->newWSDialog->ForeColor = System::Drawing::Color::White;
			this->newWSDialog->Location = System::Drawing::Point(65, 179);
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
			// testApplication
			// 
			this->testApplication->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->testApplication->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->testApplication->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->testApplication->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->testApplication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->testApplication->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->testApplication->ForeColor = System::Drawing::Color::White;
			this->testApplication->Location = System::Drawing::Point(411, 333);
			this->testApplication->Name = L"testApplication";
			this->testApplication->Size = System::Drawing::Size(119, 25);
			this->testApplication->TabIndex = 12;
			this->testApplication->Text = L"Test";
			this->testApplication->UseVisualStyleBackColor = true;
			// 
			// applicationPath
			// 
			this->applicationPath->Location = System::Drawing::Point(30, 64);
			this->applicationPath->Name = L"applicationPath";
			this->applicationPath->ReadOnly = true;
			this->applicationPath->Size = System::Drawing::Size(375, 22);
			this->applicationPath->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 17);
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
			// 
			// treeView1
			// 
			this->treeView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->treeView1->Location = System::Drawing::Point(19, 88);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(281, 424);
			this->treeView1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(23, 19);
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
			this->button2->Text = L"Add Item";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(19, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add Workspace";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// selectApplicationDialog
			// 
			this->selectApplicationDialog->Filter = L"\"EXE|*.exe|All files|*.*\"";
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"main";
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->applicationGroup->ResumeLayout(false);
			this->applicationGroup->PerformLayout();
			this->newWSDialog->ResumeLayout(false);
			this->newWSDialog->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
