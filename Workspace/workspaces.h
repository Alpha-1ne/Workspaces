#pragma once
#include <cliext/vector>
#include "WorkspaceContainer.h"
#include "Item.h"
#include "JsonRoot.h"

namespace Workspace {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;
	using namespace Newtonsoft;
	/// <summary>
	/// Summary for workspaces
	/// </summary>
	public ref class workspaces : public System::Windows::Forms::Form
	{
	public:
		workspaces(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			newWSDialog->Hide();
			addItem->Hide();
			StreamReader^ din = File::OpenText("text.json");
			myWorkpaces.clear();
			array<WorkspaceContainer^>^ root = Newtonsoft::Json::JsonConvert::DeserializeObject<array<WorkspaceContainer^>^>(din->ReadLine());
			din->Close();
			for (int i = 0; i < root->Length; i++) {
				TreeNode^ node = gcnew TreeNode(root[i]->name);
				for (int j = 0; j < root[i]->items.size(); j++)
				{
					node->Nodes->Add(gcnew TreeNode(root[i]->items[j]->name));
				}
				treeView->Nodes->Add(node);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~workspaces()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btAddItem;
	private: System::Windows::Forms::Button^ btAddWorkspace;
	protected:


	private: System::Windows::Forms::Label^ labelWorkspaces;
	private: System::Windows::Forms::TreeView^ treeView;

	private: System::Windows::Forms::Panel^ pNoWorkspace;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ newWSDialog;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::Button^ cancelBox;
	private: System::Windows::Forms::TextBox^ tbWorkSpaceName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Panel^ addItem;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ itemType;
	private: System::Windows::Forms::GroupBox^ applicationGroup;
	private: System::Windows::Forms::TextBox^ tbDirectory;
	private: System::Windows::Forms::Button^ selectDirectoryButton;
	private: System::Windows::Forms::Button^ testApplication;
	private: System::Windows::Forms::TextBox^ applicationPath;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ chooseApplication;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ itemName;
	private: System::Windows::Forms::FolderBrowserDialog^ directorySelectDialog;
	private: System::Windows::Forms::OpenFileDialog^ selectApplicationDialog;
		   cliext::vector<WorkspaceContainer^> myWorkpaces;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(workspaces::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btAddItem = (gcnew System::Windows::Forms::Button());
			this->btAddWorkspace = (gcnew System::Windows::Forms::Button());
			this->labelWorkspaces = (gcnew System::Windows::Forms::Label());
			this->treeView = (gcnew System::Windows::Forms::TreeView());
			this->pNoWorkspace = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->newWSDialog = (gcnew System::Windows::Forms::Panel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelBox = (gcnew System::Windows::Forms::Button());
			this->tbWorkSpaceName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->addItem = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->itemType = (gcnew System::Windows::Forms::ComboBox());
			this->applicationGroup = (gcnew System::Windows::Forms::GroupBox());
			this->tbDirectory = (gcnew System::Windows::Forms::TextBox());
			this->selectDirectoryButton = (gcnew System::Windows::Forms::Button());
			this->testApplication = (gcnew System::Windows::Forms::Button());
			this->applicationPath = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chooseApplication = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->itemName = (gcnew System::Windows::Forms::TextBox());
			this->directorySelectDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->selectApplicationDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->pNoWorkspace->SuspendLayout();
			this->newWSDialog->SuspendLayout();
			this->addItem->SuspendLayout();
			this->applicationGroup->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->btAddItem);
			this->panel1->Controls->Add(this->btAddWorkspace);
			this->panel1->Controls->Add(this->labelWorkspaces);
			this->panel1->Controls->Add(this->treeView);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 600);
			this->panel1->TabIndex = 0;
			// 
			// btAddItem
			// 
			this->btAddItem->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btAddItem->Enabled = false;
			this->btAddItem->Location = System::Drawing::Point(131, 558);
			this->btAddItem->Name = L"btAddItem";
			this->btAddItem->Size = System::Drawing::Size(116, 34);
			this->btAddItem->TabIndex = 2;
			this->btAddItem->Text = L"Add Item";
			this->btAddItem->UseVisualStyleBackColor = true;
			this->btAddItem->Click += gcnew System::EventHandler(this, &workspaces::button2_Click);
			// 
			// btAddWorkspace
			// 
			this->btAddWorkspace->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btAddWorkspace->Location = System::Drawing::Point(3, 558);
			this->btAddWorkspace->Name = L"btAddWorkspace";
			this->btAddWorkspace->Size = System::Drawing::Size(123, 34);
			this->btAddWorkspace->TabIndex = 1;
			this->btAddWorkspace->Text = L"Add Workspace";
			this->btAddWorkspace->UseVisualStyleBackColor = true;
			this->btAddWorkspace->Click += gcnew System::EventHandler(this, &workspaces::btAddWorkspace_Click);
			// 
			// labelWorkspaces
			// 
			this->labelWorkspaces->AutoSize = true;
			this->labelWorkspaces->BackColor = System::Drawing::Color::Transparent;
			this->labelWorkspaces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->labelWorkspaces->Location = System::Drawing::Point(3, 3);
			this->labelWorkspaces->Name = L"labelWorkspaces";
			this->labelWorkspaces->Size = System::Drawing::Size(102, 20);
			this->labelWorkspaces->TabIndex = 0;
			this->labelWorkspaces->Text = L"Workspaces";
			// 
			// treeView
			// 
			this->treeView->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->treeView->HideSelection = false;
			this->treeView->Location = System::Drawing::Point(7, 26);
			this->treeView->Name = L"treeView";
			this->treeView->ShowLines = false;
			this->treeView->Size = System::Drawing::Size(231, 525);
			this->treeView->TabIndex = 3;
			this->treeView->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &workspaces::treeView_AfterSelect);
			// 
			// pNoWorkspace
			// 
			this->pNoWorkspace->Controls->Add(this->linkLabel1);
			this->pNoWorkspace->Controls->Add(this->label2);
			this->pNoWorkspace->Controls->Add(this->label1);
			this->pNoWorkspace->Location = System::Drawing::Point(257, 29);
			this->pNoWorkspace->Name = L"pNoWorkspace";
			this->pNoWorkspace->Size = System::Drawing::Size(620, 550);
			this->pNoWorkspace->TabIndex = 1;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->linkLabel1->Location = System::Drawing::Point(230, 302);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(128, 23);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Add Workspace";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &workspaces::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(171, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"No workspace selected";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(185, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Workspaces";
			// 
			// newWSDialog
			// 
			this->newWSDialog->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->newWSDialog->Controls->Add(this->saveButton);
			this->newWSDialog->Controls->Add(this->cancelBox);
			this->newWSDialog->Controls->Add(this->tbWorkSpaceName);
			this->newWSDialog->Controls->Add(this->label4);
			this->newWSDialog->ForeColor = System::Drawing::Color::White;
			this->newWSDialog->Location = System::Drawing::Point(8, 363);
			this->newWSDialog->Name = L"newWSDialog";
			this->newWSDialog->Size = System::Drawing::Size(395, 187);
			this->newWSDialog->TabIndex = 9;
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->saveButton->Enabled = false;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->ForeColor = System::Drawing::Color::White;
			this->saveButton->Location = System::Drawing::Point(167, 134);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(93, 34);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &workspaces::saveButton_Click);
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
			this->cancelBox->Click += gcnew System::EventHandler(this, &workspaces::cancelBox_Click);
			// 
			// tbWorkSpaceName
			// 
			this->tbWorkSpaceName->BackColor = System::Drawing::Color::LightGray;
			this->tbWorkSpaceName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbWorkSpaceName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbWorkSpaceName->ForeColor = System::Drawing::Color::White;
			this->tbWorkSpaceName->Location = System::Drawing::Point(31, 73);
			this->tbWorkSpaceName->Name = L"tbWorkSpaceName";
			this->tbWorkSpaceName->Size = System::Drawing::Size(331, 34);
			this->tbWorkSpaceName->TabIndex = 1;
			this->tbWorkSpaceName->TextChanged += gcnew System::EventHandler(this, &workspaces::tbWorkSpaceName_TextChanged);
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
			this->button3->Location = System::Drawing::Point(868, 5);
			this->button3->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(18, 18);
			this->button3->TabIndex = 6;
			this->button3->UseMnemonic = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &workspaces::button3_Click);
			// 
			// addItem
			// 
			this->addItem->Controls->Add(this->label6);
			this->addItem->Controls->Add(this->itemType);
			this->addItem->Controls->Add(this->applicationGroup);
			this->addItem->Controls->Add(this->label7);
			this->addItem->Controls->Add(this->itemName);
			this->addItem->Location = System::Drawing::Point(260, 29);
			this->addItem->Name = L"addItem";
			this->addItem->Size = System::Drawing::Size(614, 524);
			this->addItem->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(27, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 23);
			this->label6->TabIndex = 17;
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
			this->itemType->Location = System::Drawing::Point(28, 113);
			this->itemType->Name = L"itemType";
			this->itemType->Size = System::Drawing::Size(545, 23);
			this->itemType->TabIndex = 16;
			// 
			// applicationGroup
			// 
			this->applicationGroup->Controls->Add(this->tbDirectory);
			this->applicationGroup->Controls->Add(this->selectDirectoryButton);
			this->applicationGroup->Controls->Add(this->testApplication);
			this->applicationGroup->Controls->Add(this->applicationPath);
			this->applicationGroup->Controls->Add(this->label5);
			this->applicationGroup->Controls->Add(this->chooseApplication);
			this->applicationGroup->ForeColor = System::Drawing::Color::Black;
			this->applicationGroup->Location = System::Drawing::Point(28, 156);
			this->applicationGroup->Name = L"applicationGroup";
			this->applicationGroup->Size = System::Drawing::Size(545, 371);
			this->applicationGroup->TabIndex = 15;
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
			this->selectDirectoryButton->BackColor = System::Drawing::Color::Transparent;
			this->selectDirectoryButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->selectDirectoryButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->selectDirectoryButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->selectDirectoryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->selectDirectoryButton->ForeColor = System::Drawing::Color::Black;
			this->selectDirectoryButton->Location = System::Drawing::Point(411, 105);
			this->selectDirectoryButton->Name = L"selectDirectoryButton";
			this->selectDirectoryButton->Size = System::Drawing::Size(119, 25);
			this->selectDirectoryButton->TabIndex = 13;
			this->selectDirectoryButton->Text = L"Choose Directory";
			this->selectDirectoryButton->UseVisualStyleBackColor = false;
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
			this->applicationPath->Size = System::Drawing::Size(375, 25);
			this->applicationPath->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Application to launch";
			// 
			// chooseApplication
			// 
			this->chooseApplication->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->chooseApplication->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->chooseApplication->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->chooseApplication->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chooseApplication->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->chooseApplication->ForeColor = System::Drawing::Color::Black;
			this->chooseApplication->Location = System::Drawing::Point(411, 64);
			this->chooseApplication->Name = L"chooseApplication";
			this->chooseApplication->Size = System::Drawing::Size(119, 25);
			this->chooseApplication->TabIndex = 9;
			this->chooseApplication->Text = L"Select Application";
			this->chooseApplication->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(27, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 23);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Display Name";
			// 
			// itemName
			// 
			this->itemName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->itemName->Location = System::Drawing::Point(28, 43);
			this->itemName->Name = L"itemName";
			this->itemName->Size = System::Drawing::Size(545, 41);
			this->itemName->TabIndex = 13;
			// 
			// selectApplicationDialog
			// 
			this->selectApplicationDialog->Filter = L"\"EXE|*.exe|All files|*.*\"";
			// 
			// workspaces
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->newWSDialog);
			this->Controls->Add(this->addItem);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pNoWorkspace);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"workspaces";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"workspaces";
			this->Load += gcnew System::EventHandler(this, &workspaces::workspaces_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pNoWorkspace->ResumeLayout(false);
			this->pNoWorkspace->PerformLayout();
			this->newWSDialog->ResumeLayout(false);
			this->newWSDialog->PerformLayout();
			this->addItem->ResumeLayout(false);
			this->addItem->PerformLayout();
			this->applicationGroup->ResumeLayout(false);
			this->applicationGroup->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		addItem->Show();
	}
	private: System::Void workspaces_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		newWSDialog->Show();
	}
	private: System::Void btAddWorkspace_Click(System::Object^ sender, System::EventArgs^ e) {
		newWSDialog->Show();
	}
private: System::Void cancelBox_Click(System::Object^ sender, System::EventArgs^ e) {
	newWSDialog->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("text.json", false);
	Newtonsoft::Json::JsonSerializer^ serializer = gcnew Newtonsoft::Json::JsonSerializer();
	serializer->Serialize(sw, myWorkpaces);
	sw->Close();
	Application::Exit();
}
private: System::Void tbWorkSpaceName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	saveButton->Enabled = tbWorkSpaceName->Text != "";
}
private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	newWSDialog->Hide();
	WorkspaceContainer^ container = gcnew WorkspaceContainer();
	int index = myWorkpaces.size() + 1;
	container->setData(index, tbWorkSpaceName->Text);
	int itemIndex = container->items.size() + 1;
	container->items.push_back(gcnew Item(itemIndex,"Test1 Item"));
	treeView->Nodes->Add(gcnew TreeNode(tbWorkSpaceName->Text));
	myWorkpaces.push_back(container);
	tbWorkSpaceName->Text = "";
	// serialize JSON directly to a file
}
private: System::Void setTree() {
	for (int i = 0; i < myWorkpaces.size(); i++) {
		
	}
}
private: System::Void treeView_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	btAddItem->Enabled = true;
}
};
}