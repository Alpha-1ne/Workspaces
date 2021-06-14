#pragma once
#include <cliext/vector>
#include "WorkspaceContainer.h"
#include "NewItemWindow.h"
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
			myWorkpaces.clear();
			panelNewWorkspace->Hide();
		}

		workspaces(array<WorkspaceContainer^>^ data)
		{
			InitializeComponent();
			myWorkpaces.clear();
			panelNewWorkspace->Hide();
			btEditItem->Hide();
			btDeleteItem->Hide();
			try {
				myWorkpaces.empty();
				for (int i = 0; i < data->Length; i++) {
					myWorkpaces.push_back(data[i]);
					listWorkspaces->Items->Add(data[i]->name);
				}
			}
			catch (Exception^ e) {

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

	private: System::Windows::Forms::Button^ btAddWorkspace;
	protected:


	private: System::Windows::Forms::Label^ labelWorkspaces;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;





	private: System::Windows::Forms::Button^ button3;

























	private: cliext::vector<WorkspaceContainer^> myWorkpaces;
	private: WorkspaceContainer^ currentWorkpace;
	private: NewItemWindow^ newItem;






	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ pNoWorkspace;
	private: System::Windows::Forms::ListBox^ listWorkspaces;
	private: System::Windows::Forms::Panel^ panelNewWorkspace;
	private: System::Windows::Forms::ListBox^ listItems;

	private: System::Windows::Forms::TextBox^ workspaceName;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btEditItem;
	private: System::Windows::Forms::Button^ btDeleteItem;


	private: System::Windows::Forms::Button^ btSave;


	private: int selectedIndex = -1;
private: System::Windows::Forms::Button^ btCancel;
private: System::Windows::Forms::Label^ label4;


	private: int selectedItemIndex = -1;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(workspaces::typeid));
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->listWorkspaces = (gcnew System::Windows::Forms::ListBox());
			   this->btAddWorkspace = (gcnew System::Windows::Forms::Button());
			   this->labelWorkspaces = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->pNoWorkspace = (gcnew System::Windows::Forms::Panel());
			   this->panelNewWorkspace = (gcnew System::Windows::Forms::Panel());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->btCancel = (gcnew System::Windows::Forms::Button());
			   this->btSave = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->btEditItem = (gcnew System::Windows::Forms::Button());
			   this->btDeleteItem = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->btDelete = (gcnew System::Windows::Forms::Button());
			   this->listItems = (gcnew System::Windows::Forms::ListBox());
			   this->workspaceName = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->panel1->SuspendLayout();
			   this->pNoWorkspace->SuspendLayout();
			   this->panelNewWorkspace->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::LightGray;
			   this->panel1->Controls->Add(this->listWorkspaces);
			   this->panel1->Controls->Add(this->btAddWorkspace);
			   this->panel1->Controls->Add(this->labelWorkspaces);
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(250, 600);
			   this->panel1->TabIndex = 0;
			   // 
			   // listWorkspaces
			   // 
			   this->listWorkspaces->BackColor = System::Drawing::Color::LightGray;
			   this->listWorkspaces->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->listWorkspaces->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->listWorkspaces->ItemHeight = 23;
			   this->listWorkspaces->Location = System::Drawing::Point(16, 51);
			   this->listWorkspaces->Name = L"listWorkspaces";
			   this->listWorkspaces->Size = System::Drawing::Size(217, 483);
			   this->listWorkspaces->TabIndex = 3;
			   this->listWorkspaces->SelectedIndexChanged += gcnew System::EventHandler(this, &workspaces::listWorkspaces_SelectedIndexChanged);
			   // 
			   // btAddWorkspace
			   // 
			   this->btAddWorkspace->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			   this->btAddWorkspace->FlatAppearance->BorderSize = 0;
			   this->btAddWorkspace->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightGray;
			   this->btAddWorkspace->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			   this->btAddWorkspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btAddWorkspace->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btAddWorkspace->ForeColor = System::Drawing::Color::DimGray;
			   this->btAddWorkspace->Location = System::Drawing::Point(0, 550);
			   this->btAddWorkspace->Name = L"btAddWorkspace";
			   this->btAddWorkspace->Size = System::Drawing::Size(250, 45);
			   this->btAddWorkspace->TabIndex = 1;
			   this->btAddWorkspace->Text = L"Add Workspace";
			   this->btAddWorkspace->UseVisualStyleBackColor = true;
			   this->btAddWorkspace->Click += gcnew System::EventHandler(this, &workspaces::btAddWorkspace_Click);
			   // 
			   // labelWorkspaces
			   // 
			   this->labelWorkspaces->AutoSize = true;
			   this->labelWorkspaces->BackColor = System::Drawing::Color::Transparent;
			   this->labelWorkspaces->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelWorkspaces->ForeColor = System::Drawing::Color::Black;
			   this->labelWorkspaces->Location = System::Drawing::Point(11, 7);
			   this->labelWorkspaces->Name = L"labelWorkspaces";
			   this->labelWorkspaces->Size = System::Drawing::Size(155, 35);
			   this->labelWorkspaces->TabIndex = 0;
			   this->labelWorkspaces->Text = L"Workspaces";
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
			   this->button3->Location = System::Drawing::Point(872, 9);
			   this->button3->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(16, 16);
			   this->button3->TabIndex = 6;
			   this->button3->UseMnemonic = false;
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &workspaces::button3_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			   this->label2->Location = System::Drawing::Point(0, 22);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(332, 41);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"No workspace selected";
			   // 
			   // pNoWorkspace
			   // 
			   this->pNoWorkspace->BackColor = System::Drawing::Color::Transparent;
			   this->pNoWorkspace->Controls->Add(this->label2);
			   this->pNoWorkspace->Location = System::Drawing::Point(257, 31);
			   this->pNoWorkspace->Name = L"pNoWorkspace";
			   this->pNoWorkspace->Size = System::Drawing::Size(631, 560);
			   this->pNoWorkspace->TabIndex = 1;
			   // 
			   // panelNewWorkspace
			   // 
			   this->panelNewWorkspace->BackColor = System::Drawing::Color::Transparent;
			   this->panelNewWorkspace->Controls->Add(this->label4);
			   this->panelNewWorkspace->Controls->Add(this->btCancel);
			   this->panelNewWorkspace->Controls->Add(this->btSave);
			   this->panelNewWorkspace->Controls->Add(this->button5);
			   this->panelNewWorkspace->Controls->Add(this->btEditItem);
			   this->panelNewWorkspace->Controls->Add(this->btDeleteItem);
			   this->panelNewWorkspace->Controls->Add(this->button1);
			   this->panelNewWorkspace->Controls->Add(this->btDelete);
			   this->panelNewWorkspace->Controls->Add(this->listItems);
			   this->panelNewWorkspace->Controls->Add(this->workspaceName);
			   this->panelNewWorkspace->Controls->Add(this->label3);
			   this->panelNewWorkspace->Location = System::Drawing::Point(256, 9);
			   this->panelNewWorkspace->Name = L"panelNewWorkspace";
			   this->panelNewWorkspace->Size = System::Drawing::Size(610, 579);
			   this->panelNewWorkspace->TabIndex = 10;
			   this->panelNewWorkspace->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &workspaces::panelNewWorkspace_Paint);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(12, 93);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(49, 23);
			   this->label4->TabIndex = 19;
			   this->label4->Text = L"Tasks";
			   // 
			   // btCancel
			   // 
			   this->btCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->btCancel->Location = System::Drawing::Point(330, 546);
			   this->btCancel->Name = L"btCancel";
			   this->btCancel->Size = System::Drawing::Size(125, 30);
			   this->btCancel->TabIndex = 18;
			   this->btCancel->Text = L"Cancel";
			   this->btCancel->UseVisualStyleBackColor = true;
			   this->btCancel->Click += gcnew System::EventHandler(this, &workspaces::btCancel_Click);
			   // 
			   // btSave
			   // 
			   this->btSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->btSave->Location = System::Drawing::Point(461, 546);
			   this->btSave->Name = L"btSave";
			   this->btSave->Size = System::Drawing::Size(125, 30);
			   this->btSave->TabIndex = 17;
			   this->btSave->Text = L"Save";
			   this->btSave->UseVisualStyleBackColor = true;
			   this->btSave->Click += gcnew System::EventHandler(this, &workspaces::btSave_Click);
			   // 
			   // button5
			   // 
			   this->button5->BackColor = System::Drawing::Color::Transparent;
			   this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			   this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			   this->button5->FlatAppearance->BorderSize = 0;
			   this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button5->ForeColor = System::Drawing::Color::Transparent;
			   this->button5->Location = System::Drawing::Point(16, 143);
			   this->button5->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(22, 22);
			   this->button5->TabIndex = 16;
			   this->button5->UseMnemonic = false;
			   this->button5->UseVisualStyleBackColor = false;
			   this->button5->Click += gcnew System::EventHandler(this, &workspaces::button5_Click);
			   // 
			   // btEditItem
			   // 
			   this->btEditItem->BackColor = System::Drawing::Color::Transparent;
			   this->btEditItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btEditItem.BackgroundImage")));
			   this->btEditItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btEditItem->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			   this->btEditItem->FlatAppearance->BorderSize = 0;
			   this->btEditItem->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btEditItem->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btEditItem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btEditItem->ForeColor = System::Drawing::Color::Transparent;
			   this->btEditItem->Location = System::Drawing::Point(17, 187);
			   this->btEditItem->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btEditItem->Name = L"btEditItem";
			   this->btEditItem->Size = System::Drawing::Size(21, 25);
			   this->btEditItem->TabIndex = 15;
			   this->btEditItem->UseMnemonic = false;
			   this->btEditItem->UseVisualStyleBackColor = false;
			   this->btEditItem->Click += gcnew System::EventHandler(this, &workspaces::button4_Click);
			   // 
			   // btDeleteItem
			   // 
			   this->btDeleteItem->BackColor = System::Drawing::Color::Transparent;
			   this->btDeleteItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btDeleteItem.BackgroundImage")));
			   this->btDeleteItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btDeleteItem->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			   this->btDeleteItem->FlatAppearance->BorderSize = 0;
			   this->btDeleteItem->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btDeleteItem->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btDeleteItem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btDeleteItem->ForeColor = System::Drawing::Color::Transparent;
			   this->btDeleteItem->Location = System::Drawing::Point(16, 238);
			   this->btDeleteItem->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btDeleteItem->Name = L"btDeleteItem";
			   this->btDeleteItem->Size = System::Drawing::Size(22, 29);
			   this->btDeleteItem->TabIndex = 14;
			   this->btDeleteItem->UseMnemonic = false;
			   this->btDeleteItem->UseVisualStyleBackColor = false;
			   this->btDeleteItem->Click += gcnew System::EventHandler(this, &workspaces::button2_Click);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			   this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->button1->Location = System::Drawing::Point(506, 15);
			   this->button1->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(80, 30);
			   this->button1->TabIndex = 13;
			   this->button1->Text = L"Launch";
			   this->button1->UseMnemonic = false;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &workspaces::button1_Click);
			   // 
			   // btDelete
			   // 
			   this->btDelete->BackColor = System::Drawing::Color::Transparent;
			   this->btDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btDelete->FlatAppearance->BorderColor = System::Drawing::Color::White;
			   this->btDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btDelete->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->btDelete->ForeColor = System::Drawing::Color::White;
			   this->btDelete->Location = System::Drawing::Point(413, 15);
			   this->btDelete->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btDelete->Name = L"btDelete";
			   this->btDelete->Size = System::Drawing::Size(80, 30);
			   this->btDelete->TabIndex = 11;
			   this->btDelete->Text = L"Delete";
			   this->btDelete->UseMnemonic = false;
			   this->btDelete->UseVisualStyleBackColor = false;
			   this->btDelete->Click += gcnew System::EventHandler(this, &workspaces::btDelete_Click);
			   // 
			   // listItems
			   // 
			   this->listItems->BackColor = System::Drawing::SystemColors::Window;
			   this->listItems->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->listItems->FormattingEnabled = true;
			   this->listItems->ItemHeight = 23;
			   this->listItems->Location = System::Drawing::Point(51, 129);
			   this->listItems->Name = L"listItems";
			   this->listItems->Size = System::Drawing::Size(534, 395);
			   this->listItems->TabIndex = 2;
			   this->listItems->SelectedIndexChanged += gcnew System::EventHandler(this, &workspaces::listItems_SelectedIndexChanged);
			   // 
			   // workspaceName
			   // 
			   this->workspaceName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->workspaceName->ForeColor = System::Drawing::Color::Black;
			   this->workspaceName->Location = System::Drawing::Point(16, 51);
			   this->workspaceName->Name = L"workspaceName";
			   this->workspaceName->Size = System::Drawing::Size(569, 30);
			   this->workspaceName->TabIndex = 1;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(12, 15);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(145, 23);
			   this->label3->TabIndex = 0;
			   this->label3->Text = L"Workspace Name";
			   // 
			   // workspaces
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(900, 600);
			   this->ControlBox = false;
			   this->Controls->Add(this->panelNewWorkspace);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->pNoWorkspace);
			   this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"workspaces";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"workspaces";
			   this->Load += gcnew System::EventHandler(this, &workspaces::workspaces_Load);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->pNoWorkspace->ResumeLayout(false);
			   this->pNoWorkspace->PerformLayout();
			   this->panelNewWorkspace->ResumeLayout(false);
			   this->panelNewWorkspace->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void workspaces_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		currentWorkpace = gcnew WorkspaceContainer();
		currentWorkpace->id = myWorkpaces.size();
		pNoWorkspace->Hide();
		panelNewWorkspace->Show();

	}
	private: System::Void btAddWorkspace_Click(System::Object^ sender, System::EventArgs^ e) {
		clearData();
		selectedIndex = -1;
		currentWorkpace = gcnew WorkspaceContainer();
		currentWorkpace->id = myWorkpaces.size();
		btSave->Text = "Save";
		pNoWorkspace->Hide();
		panelNewWorkspace->Show();
	}

	private: System::Void clearData() {
		workspaceName->Text = "";
		listItems->ClearSelected();
		listItems->Items->Clear();
		btDelete->Hide();
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("text.json", false);
		Newtonsoft::Json::JsonSerializer^ serializer = gcnew Newtonsoft::Json::JsonSerializer();
		serializer->Serialize(sw, myWorkpaces);
		sw->Close();
		Application::Exit();
	}

	private: System::Void treeView_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		//btAddItem->Enabled = true;
	}

	private: System::Void labelTitle_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void listWorkspaces_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listWorkspaces->SelectedItems->Count > 0) {
			selectedIndex = listWorkspaces->SelectedIndex;
			currentWorkpace = myWorkpaces[listWorkspaces->SelectedIndex];
			pNoWorkspace->Hide();
			panelNewWorkspace->Show();
			btSave->Text = "Update";
			workspaceName->Text = currentWorkpace->name;
			btDelete->Show();
			setUpList();
		}
	}
		   System::Void Workspace::workspaces::OnFormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
		   {
			   if (newItem != nullptr) {
				   Item^ data = newItem->getItemData();
				   if (selectedItemIndex != -1)
				   {
					   Item^ cItem = currentWorkpace->items[selectedItemIndex];
					   cItem->name = data->name;
					   cItem->application = data->application;
					   cItem->directory = data->directory;
					   cItem->url = data->url;
					   cItem->type = data->type;
				   }
				   else {
					   currentWorkpace->items.push_back(data);
				   }
				   setUpList();
				   newItem = nullptr;
			   }
		   }

	private: System::Void setUpList() {
		listItems->Items->Clear();
		for (int i = 0; i < currentWorkpace->items.size(); i++) {
			listItems->Items->Add(currentWorkpace->items[i]->name);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		newItem = gcnew NewItemWindow(currentWorkpace->items.size(), currentWorkpace->id);
		newItem->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Workspace::workspaces::OnFormClosed);
		newItem->ShowDialog();
	}
	private: System::Void btSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (workspaceName->Text == "") {
			MessageBox::Show("Please enter valid name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			workspaceName->Focus();
			return;
		}
		else if (selectedIndex == -1) {
			currentWorkpace->name = workspaceName->Text;
			myWorkpaces.push_back(currentWorkpace);
			listWorkspaces->Items->Add(workspaceName->Text);
		}
		pNoWorkspace->Show();
		panelNewWorkspace->Hide();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < currentWorkpace->items.size(); i++) {
			Item^ currentItem = currentWorkpace->items[i];
			if (currentItem->type == 2)
			{
				Process::Start(currentItem->url);
			}
			else {
				Process^ myProcess = gcnew Process();
				myProcess->StartInfo->UseShellExecute = false;
				// You can start any process, HelloWorld is a do-nothing example.
				myProcess->StartInfo->FileName = currentItem->application;
				if (currentItem->type == 1 && currentItem->directory != "")
					myProcess->StartInfo->Arguments = currentItem->directory;
				myProcess->StartInfo->CreateNoWindow = true;
				myProcess->Start();
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		newItem = gcnew NewItemWindow(currentWorkpace->items[selectedItemIndex]);
		newItem->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Workspace::workspaces::OnFormClosed);
		newItem->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedItemIndex != -1)
		{
			int j = 0;
			for (auto i = currentWorkpace->items.begin(); i != currentWorkpace->items.end(); ) {
				if (j == selectedItemIndex)
				{
					currentWorkpace->items.erase(i);
					break;
				}
				j++;
			}
			setUpList();
		}
	}
	private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedIndex != -1 && myWorkpaces.size()>=selectedIndex)
		{
			int j = 0;
			for (auto i = myWorkpaces.begin(); i != myWorkpaces.end(); i++) {
				if (j == selectedIndex)
				{
					myWorkpaces.erase(i);
					break;
				}
				j++;
			}
			selectedIndex = -1;
			listWorkspaces->Items->Clear();
			for (int i = 0; i < myWorkpaces.size(); i++) {
				listWorkspaces->Items->Add(myWorkpaces[i]->name);
			}
		}
	}
	private: System::Void listItems_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listItems->SelectedItems->Count > 0) {
			selectedItemIndex = listItems->SelectedIndex;
			btEditItem->Show();
			btDeleteItem->Show();
		}
		else {
			btEditItem->Hide();
			btDeleteItem->Hide();
		}
	}
	private: System::Void panelNewWorkspace_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		pNoWorkspace->Show();
		panelNewWorkspace->Hide();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}



