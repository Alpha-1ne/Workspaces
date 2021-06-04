#pragma once
#include <cliext/vector>
#include "WorkspaceContainer.h"
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
			progressBarDialog->Hide();
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
	private: System::Windows::Forms::Panel^ progressBarDialog;
	private: System::Windows::Forms::ProgressBar^ progressBar;
	private: System::Windows::Forms::Label^ label3;
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
			this->treeView = (gcnew System::Windows::Forms::TreeView());
			this->btAddItem = (gcnew System::Windows::Forms::Button());
			this->btAddWorkspace = (gcnew System::Windows::Forms::Button());
			this->labelWorkspaces = (gcnew System::Windows::Forms::Label());
			this->pNoWorkspace = (gcnew System::Windows::Forms::Panel());
			this->newWSDialog = (gcnew System::Windows::Forms::Panel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelBox = (gcnew System::Windows::Forms::Button());
			this->tbWorkSpaceName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->progressBarDialog = (gcnew System::Windows::Forms::Panel());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->pNoWorkspace->SuspendLayout();
			this->newWSDialog->SuspendLayout();
			this->progressBarDialog->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->treeView);
			this->panel1->Controls->Add(this->btAddItem);
			this->panel1->Controls->Add(this->btAddWorkspace);
			this->panel1->Controls->Add(this->labelWorkspaces);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 600);
			this->panel1->TabIndex = 0;
			// 
			// treeView
			// 
			this->treeView->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->treeView->HideSelection = false;
			this->treeView->Location = System::Drawing::Point(8, 27);
			this->treeView->Name = L"treeView";
			this->treeView->ShowLines = false;
			this->treeView->Size = System::Drawing::Size(231, 525);
			this->treeView->TabIndex = 3;
			this->treeView->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &workspaces::treeView_AfterSelect);
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
			// pNoWorkspace
			// 
			this->pNoWorkspace->Controls->Add(this->linkLabel1);
			this->pNoWorkspace->Controls->Add(this->label2);
			this->pNoWorkspace->Controls->Add(this->label1);
			this->pNoWorkspace->Location = System::Drawing::Point(381, 343);
			this->pNoWorkspace->Name = L"pNoWorkspace";
			this->pNoWorkspace->Size = System::Drawing::Size(631, 525);
			this->pNoWorkspace->TabIndex = 1;
			// 
			// newWSDialog
			// 
			this->newWSDialog->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->newWSDialog->Controls->Add(this->saveButton);
			this->newWSDialog->Controls->Add(this->cancelBox);
			this->newWSDialog->Controls->Add(this->tbWorkSpaceName);
			this->newWSDialog->Controls->Add(this->label4);
			this->newWSDialog->ForeColor = System::Drawing::Color::White;
			this->newWSDialog->Location = System::Drawing::Point(657, 97);
			this->newWSDialog->Name = L"newWSDialog";
			this->newWSDialog->Size = System::Drawing::Size(407, 186);
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
			// progressBarDialog
			// 
			this->progressBarDialog->Controls->Add(this->label3);
			this->progressBarDialog->Controls->Add(this->progressBar);
			this->progressBarDialog->Location = System::Drawing::Point(275, 170);
			this->progressBarDialog->Name = L"progressBarDialog";
			this->progressBarDialog->Size = System::Drawing::Size(407, 123);
			this->progressBarDialog->TabIndex = 10;
			// 
			// progressBar
			// 
			this->progressBar->Location = System::Drawing::Point(31, 62);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(348, 34);
			this->progressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Please wait...";
			// 
			// workspaces
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->progressBarDialog);
			this->Controls->Add(this->newWSDialog);
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
			this->progressBarDialog->ResumeLayout(false);
			this->progressBarDialog->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
	progressBarDialog->Show();
	progressBar->PerformStep();
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
	container->setData(myWorkpaces.size()+1, tbWorkSpaceName->Text);
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
