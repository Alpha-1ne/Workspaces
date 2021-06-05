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
			//
			//TODO: Add the constructor code here
			//
			panelNewWorkspace->Hide();
			StreamReader^ din = File::OpenText("text.json");
			myWorkpaces.clear();
			array<WorkspaceContainer^>^ root = Newtonsoft::Json::JsonConvert::DeserializeObject<array<WorkspaceContainer^>^>(din->ReadLine());
			din->Close();
			myWorkpaces.empty();
			for (int i = 0; i < root->Length; i++) {
				myWorkpaces.push_back(root[i]);
				listWorkspaces->Items->Add(root[i]->name);
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
















	private: System::Windows::Forms::FolderBrowserDialog^ directorySelectDialog;
	private: System::Windows::Forms::OpenFileDialog^ selectApplicationDialog;







	private: cliext::vector<WorkspaceContainer^> myWorkpaces;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Panel^ pNoWorkspace;
	private: System::Windows::Forms::ListView^ listWorkspaces;
	private: System::Windows::Forms::Panel^ panelNewWorkspace;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: int selectedIndex;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(workspaces::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listWorkspaces = (gcnew System::Windows::Forms::ListView());
			this->btAddWorkspace = (gcnew System::Windows::Forms::Button());
			this->labelWorkspaces = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->directorySelectDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->selectApplicationDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pNoWorkspace = (gcnew System::Windows::Forms::Panel());
			this->panelNewWorkspace = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->pNoWorkspace->SuspendLayout();
			this->panelNewWorkspace->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->listWorkspaces);
			this->panel1->Controls->Add(this->btAddWorkspace);
			this->panel1->Controls->Add(this->labelWorkspaces);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 600);
			this->panel1->TabIndex = 0;
			// 
			// listWorkspaces
			// 
			this->listWorkspaces->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->listWorkspaces->HideSelection = false;
			this->listWorkspaces->Location = System::Drawing::Point(8, 31);
			this->listWorkspaces->Name = L"listWorkspaces";
			this->listWorkspaces->Size = System::Drawing::Size(228, 509);
			this->listWorkspaces->TabIndex = 3;
			this->listWorkspaces->UseCompatibleStateImageBehavior = false;
			this->listWorkspaces->View = System::Windows::Forms::View::List;
			this->listWorkspaces->SelectedIndexChanged += gcnew System::EventHandler(this, &workspaces::listWorkspaces_SelectedIndexChanged);
			// 
			// btAddWorkspace
			// 
			this->btAddWorkspace->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btAddWorkspace->Location = System::Drawing::Point(8, 552);
			this->btAddWorkspace->Name = L"btAddWorkspace";
			this->btAddWorkspace->Size = System::Drawing::Size(228, 34);
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
			// selectApplicationDialog
			// 
			this->selectApplicationDialog->Filter = L"\"EXE|*.exe|All files|*.*\"";
			this->selectApplicationDialog->InitialDirectory = L"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs";
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
			// pNoWorkspace
			// 
			this->pNoWorkspace->Controls->Add(this->linkLabel1);
			this->pNoWorkspace->Controls->Add(this->label2);
			this->pNoWorkspace->Controls->Add(this->label1);
			this->pNoWorkspace->Location = System::Drawing::Point(260, 29);
			this->pNoWorkspace->Name = L"pNoWorkspace";
			this->pNoWorkspace->Size = System::Drawing::Size(620, 550);
			this->pNoWorkspace->TabIndex = 1;
			// 
			// panelNewWorkspace
			// 
			this->panelNewWorkspace->Controls->Add(this->listBox1);
			this->panelNewWorkspace->Controls->Add(this->textBox1);
			this->panelNewWorkspace->Controls->Add(this->label3);
			this->panelNewWorkspace->Location = System::Drawing::Point(263, 29);
			this->panelNewWorkspace->Name = L"panelNewWorkspace";
			this->panelNewWorkspace->Size = System::Drawing::Size(623, 489);
			this->panelNewWorkspace->TabIndex = 10;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(16, 116);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(452, 361);
			this->listBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(553, 25);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Workspace Name";
			// 
			// workspaces
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->panelNewWorkspace);
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
			this->panelNewWorkspace->ResumeLayout(false);
			this->panelNewWorkspace->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Workspace::NewItemWindow^ newItemWindow = gcnew Workspace::NewItemWindow();

		//int itemIndex = container->items.size() + 1;
		//container->items.push_back(gcnew Item(itemIndex, "Test1 Item"));
		newItemWindow->Show();
	}
	private: System::Void workspaces_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		pNoWorkspace->Hide();
		panelNewWorkspace->Show();

	}
	private: System::Void btAddWorkspace_Click(System::Object^ sender, System::EventArgs^ e) {
		panelNewWorkspace->Show();
		pNoWorkspace->Hide();
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("text.json", false);
	Newtonsoft::Json::JsonSerializer^ serializer = gcnew Newtonsoft::Json::JsonSerializer();
	serializer->Serialize(sw, myWorkpaces);
	sw->Close();
	Application::Exit();
}

private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	panelNewWorkspace->Hide();
	WorkspaceContainer^ container = gcnew WorkspaceContainer();
	int index = myWorkpaces.size() + 1;
	//container->setData(index, tbWorkSpaceName->Text);
	//listWorkspaces->Items->Add(tbWorkSpaceName->Text);
	myWorkpaces.push_back(container);
	//tbWorkSpaceName->Text = "";
	// serialize JSON directly to a file
}
private: System::Void setTree() {
	for (int i = 0; i < myWorkpaces.size(); i++) {
		
	}
}
private: System::Void treeView_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	//btAddItem->Enabled = true;
}

private: System::Void labelTitle_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void listWorkspaces_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
