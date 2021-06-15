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









	private: System::Windows::Forms::ListBox^ listWorkspaces;

















	private: int selectedIndex = -1;
	private: System::Windows::Forms::Panel^ panelNewWorkspace;
	private: System::Windows::Forms::Button^ btCloseApp;

	private: System::Windows::Forms::Label^ labelTasks;


	private: System::Windows::Forms::Button^ btSaveWorkspace;

	private: System::Windows::Forms::Button^ btAddTask;

	private: System::Windows::Forms::Button^ btEditItem;
	private: System::Windows::Forms::Button^ btDeleteItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::ListBox^ listItems;
	private: System::Windows::Forms::TextBox^ tbWorkspaceName;

	private: System::Windows::Forms::Label^ labelWorkspaceName;
	private: System::ComponentModel::BackgroundWorker^ saveData;
private: System::Windows::Forms::Label^ labelNoWorkspace;







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
			   this->panelNewWorkspace = (gcnew System::Windows::Forms::Panel());
			   this->btCloseApp = (gcnew System::Windows::Forms::Button());
			   this->labelTasks = (gcnew System::Windows::Forms::Label());
			   this->btSaveWorkspace = (gcnew System::Windows::Forms::Button());
			   this->btAddTask = (gcnew System::Windows::Forms::Button());
			   this->btEditItem = (gcnew System::Windows::Forms::Button());
			   this->btDeleteItem = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->btDelete = (gcnew System::Windows::Forms::Button());
			   this->listItems = (gcnew System::Windows::Forms::ListBox());
			   this->tbWorkspaceName = (gcnew System::Windows::Forms::TextBox());
			   this->labelWorkspaceName = (gcnew System::Windows::Forms::Label());
			   this->saveData = (gcnew System::ComponentModel::BackgroundWorker());
			   this->labelNoWorkspace = (gcnew System::Windows::Forms::Label());
			   this->panel1->SuspendLayout();
			   this->panelNewWorkspace->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				   static_cast<System::Int32>(static_cast<System::Byte>(26)));
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
			   this->listWorkspaces->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				   static_cast<System::Int32>(static_cast<System::Byte>(26)));
			   this->listWorkspaces->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->listWorkspaces->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->listWorkspaces->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->listWorkspaces->ItemHeight = 23;
			   this->listWorkspaces->Location = System::Drawing::Point(17, 74);
			   this->listWorkspaces->Name = L"listWorkspaces";
			   this->listWorkspaces->Size = System::Drawing::Size(216, 460);
			   this->listWorkspaces->TabIndex = 3;
			   this->listWorkspaces->SelectedIndexChanged += gcnew System::EventHandler(this, &workspaces::listWorkspaces_SelectedIndexChanged);
			   // 
			   // btAddWorkspace
			   // 
			   this->btAddWorkspace->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			   this->btAddWorkspace->FlatAppearance->BorderSize = 0;
			   this->btAddWorkspace->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->btAddWorkspace->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->btAddWorkspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btAddWorkspace->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btAddWorkspace->ForeColor = System::Drawing::Color::DodgerBlue;
			   this->btAddWorkspace->Location = System::Drawing::Point(2, 550);
			   this->btAddWorkspace->Name = L"btAddWorkspace";
			   this->btAddWorkspace->Size = System::Drawing::Size(247, 45);
			   this->btAddWorkspace->TabIndex = 1;
			   this->btAddWorkspace->Text = L"Add Workspace";
			   this->btAddWorkspace->UseVisualStyleBackColor = true;
			   this->btAddWorkspace->Click += gcnew System::EventHandler(this, &workspaces::btAddWorkspace_Click);
			   // 
			   // labelWorkspaces
			   // 
			   this->labelWorkspaces->AutoSize = true;
			   this->labelWorkspaces->BackColor = System::Drawing::Color::Transparent;
			   this->labelWorkspaces->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			   this->labelWorkspaces->ForeColor = System::Drawing::Color::White;
			   this->labelWorkspaces->Location = System::Drawing::Point(23, 16);
			   this->labelWorkspaces->Name = L"labelWorkspaces";
			   this->labelWorkspaces->Size = System::Drawing::Size(201, 46);
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
			   // panelNewWorkspace
			   // 
			   this->panelNewWorkspace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				   static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			   this->panelNewWorkspace->Controls->Add(this->btCloseApp);
			   this->panelNewWorkspace->Controls->Add(this->labelTasks);
			   this->panelNewWorkspace->Controls->Add(this->btSaveWorkspace);
			   this->panelNewWorkspace->Controls->Add(this->btAddTask);
			   this->panelNewWorkspace->Controls->Add(this->btEditItem);
			   this->panelNewWorkspace->Controls->Add(this->btDeleteItem);
			   this->panelNewWorkspace->Controls->Add(this->button1);
			   this->panelNewWorkspace->Controls->Add(this->btDelete);
			   this->panelNewWorkspace->Controls->Add(this->listItems);
			   this->panelNewWorkspace->Controls->Add(this->tbWorkspaceName);
			   this->panelNewWorkspace->Controls->Add(this->labelWorkspaceName);
			   this->panelNewWorkspace->Location = System::Drawing::Point(251, 0);
			   this->panelNewWorkspace->Name = L"panelNewWorkspace";
			   this->panelNewWorkspace->Size = System::Drawing::Size(650, 600);
			   this->panelNewWorkspace->TabIndex = 10;
			   this->panelNewWorkspace->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &workspaces::panelNewWorkspace_Paint);
			   // 
			   // btCloseApp
			   // 
			   this->btCloseApp->BackColor = System::Drawing::Color::Transparent;
			   this->btCloseApp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btCloseApp.BackgroundImage")));
			   this->btCloseApp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btCloseApp->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			   this->btCloseApp->FlatAppearance->BorderSize = 0;
			   this->btCloseApp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btCloseApp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btCloseApp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btCloseApp->ForeColor = System::Drawing::Color::Transparent;
			   this->btCloseApp->Location = System::Drawing::Point(622, 10);
			   this->btCloseApp->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btCloseApp->Name = L"btCloseApp";
			   this->btCloseApp->Size = System::Drawing::Size(16, 16);
			   this->btCloseApp->TabIndex = 20;
			   this->btCloseApp->UseMnemonic = false;
			   this->btCloseApp->UseVisualStyleBackColor = false;
			   this->btCloseApp->Click += gcnew System::EventHandler(this, &workspaces::btCloseApp_Click);
			   // 
			   // labelTasks
			   // 
			   this->labelTasks->AutoSize = true;
			   this->labelTasks->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelTasks->ForeColor = System::Drawing::Color::White;
			   this->labelTasks->Location = System::Drawing::Point(12, 93);
			   this->labelTasks->Name = L"labelTasks";
			   this->labelTasks->Size = System::Drawing::Size(49, 23);
			   this->labelTasks->TabIndex = 19;
			   this->labelTasks->Text = L"Tasks";
			   // 
			   // btSaveWorkspace
			   // 
			   this->btSaveWorkspace->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->btSaveWorkspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btSaveWorkspace->ForeColor = System::Drawing::SystemColors::ButtonFace;
			   this->btSaveWorkspace->Location = System::Drawing::Point(480, 560);
			   this->btSaveWorkspace->Name = L"btSaveWorkspace";
			   this->btSaveWorkspace->Size = System::Drawing::Size(125, 30);
			   this->btSaveWorkspace->TabIndex = 17;
			   this->btSaveWorkspace->Text = L"Save";
			   this->btSaveWorkspace->UseVisualStyleBackColor = true;
			   this->btSaveWorkspace->Click += gcnew System::EventHandler(this, &workspaces::btSave_Click);
			   // 
			   // btAddTask
			   // 
			   this->btAddTask->BackColor = System::Drawing::Color::Transparent;
			   this->btAddTask->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btAddTask.BackgroundImage")));
			   this->btAddTask->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btAddTask->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			   this->btAddTask->FlatAppearance->BorderSize = 0;
			   this->btAddTask->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btAddTask->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btAddTask->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btAddTask->ForeColor = System::Drawing::Color::Transparent;
			   this->btAddTask->Location = System::Drawing::Point(615, 147);
			   this->btAddTask->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btAddTask->Name = L"btAddTask";
			   this->btAddTask->Size = System::Drawing::Size(15, 15);
			   this->btAddTask->TabIndex = 16;
			   this->btAddTask->UseMnemonic = false;
			   this->btAddTask->UseVisualStyleBackColor = false;
			   this->btAddTask->Click += gcnew System::EventHandler(this, &workspaces::button5_Click);
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
			   this->btEditItem->Location = System::Drawing::Point(615, 185);
			   this->btEditItem->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btEditItem->Name = L"btEditItem";
			   this->btEditItem->Size = System::Drawing::Size(15, 20);
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
			   this->btDeleteItem->Location = System::Drawing::Point(615, 234);
			   this->btDeleteItem->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btDeleteItem->Name = L"btDeleteItem";
			   this->btDeleteItem->Size = System::Drawing::Size(15, 19);
			   this->btDeleteItem->TabIndex = 14;
			   this->btDeleteItem->UseMnemonic = false;
			   this->btDeleteItem->UseVisualStyleBackColor = false;
			   this->btDeleteItem->Click += gcnew System::EventHandler(this, &workspaces::button2_Click);
			   // 
			   // button1
			   // 
			   this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			   this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->button1->Location = System::Drawing::Point(387, 560);
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
			   this->btDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->btDelete->BackColor = System::Drawing::Color::Red;
			   this->btDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btDelete->FlatAppearance->BorderColor = System::Drawing::Color::White;
			   this->btDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btDelete->ForeColor = System::Drawing::Color::White;
			   this->btDelete->Location = System::Drawing::Point(16, 560);
			   this->btDelete->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
			   this->btDelete->Name = L"btDelete";
			   this->btDelete->Size = System::Drawing::Size(152, 30);
			   this->btDelete->TabIndex = 11;
			   this->btDelete->Text = L"Delete Workspace";
			   this->btDelete->UseMnemonic = false;
			   this->btDelete->UseVisualStyleBackColor = false;
			   this->btDelete->Click += gcnew System::EventHandler(this, &workspaces::btDelete_Click);
			   // 
			   // listItems
			   // 
			   this->listItems->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->listItems->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->listItems->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->listItems->FormattingEnabled = true;
			   this->listItems->ItemHeight = 23;
			   this->listItems->Location = System::Drawing::Point(16, 129);
			   this->listItems->Name = L"listItems";
			   this->listItems->Size = System::Drawing::Size(589, 418);
			   this->listItems->TabIndex = 2;
			   this->listItems->SelectedIndexChanged += gcnew System::EventHandler(this, &workspaces::listItems_SelectedIndexChanged);
			   // 
			   // tbWorkspaceName
			   // 
			   this->tbWorkspaceName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				   static_cast<System::Int32>(static_cast<System::Byte>(26)));
			   this->tbWorkspaceName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tbWorkspaceName->ForeColor = System::Drawing::SystemColors::Control;
			   this->tbWorkspaceName->Location = System::Drawing::Point(16, 51);
			   this->tbWorkspaceName->Name = L"tbWorkspaceName";
			   this->tbWorkspaceName->Size = System::Drawing::Size(610, 34);
			   this->tbWorkspaceName->TabIndex = 1;
			   // 
			   // labelWorkspaceName
			   // 
			   this->labelWorkspaceName->AutoSize = true;
			   this->labelWorkspaceName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelWorkspaceName->ForeColor = System::Drawing::Color::White;
			   this->labelWorkspaceName->Location = System::Drawing::Point(12, 15);
			   this->labelWorkspaceName->Name = L"labelWorkspaceName";
			   this->labelWorkspaceName->Size = System::Drawing::Size(145, 23);
			   this->labelWorkspaceName->TabIndex = 0;
			   this->labelWorkspaceName->Text = L"Workspace Name";
			   // 
			   // saveData
			   // 
			   this->saveData->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &workspaces::saveData_DoWork);
			   this->saveData->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &workspaces::OnRunWorkerCompleted);
			   // 
			   // labelNoWorkspace
			   // 
			   this->labelNoWorkspace->AutoSize = true;
			   this->labelNoWorkspace->BackColor = System::Drawing::Color::Transparent;
			   this->labelNoWorkspace->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			   this->labelNoWorkspace->ForeColor = System::Drawing::Color::White;
			   this->labelNoWorkspace->Location = System::Drawing::Point(357, 32);
			   this->labelNoWorkspace->Name = L"labelNoWorkspace";
			   this->labelNoWorkspace->Size = System::Drawing::Size(384, 46);
			   this->labelNoWorkspace->TabIndex = 11;
			   this->labelNoWorkspace->Text = L"No Workspace Selected";
			   this->labelNoWorkspace->TextAlign = System::Drawing::ContentAlignment::TopCenter;
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
			   this->Controls->Add(this->labelNoWorkspace);
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
			   this->panelNewWorkspace->ResumeLayout(false);
			   this->panelNewWorkspace->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void workspaces_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		currentWorkpace = gcnew WorkspaceContainer();
		currentWorkpace->id = myWorkpaces.size();
		panelNewWorkspace->Show();

	}
	private: System::Void btAddWorkspace_Click(System::Object^ sender, System::EventArgs^ e) {
		clearData();
		selectedIndex = -1;
		currentWorkpace = gcnew WorkspaceContainer();
		currentWorkpace->id = myWorkpaces.size();
		btSaveWorkspace->Text = "Save";
		panelNewWorkspace->Show();
	}

	private: System::Void clearData() {
		tbWorkspaceName->Text = "";
		listItems->ClearSelected();
		listItems->Items->Clear();
		btDelete->Hide();
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
		saveData->RunWorkerAsync();
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
			panelNewWorkspace->Show();
			btSaveWorkspace->Text = "Update";
			tbWorkspaceName->Text = currentWorkpace->name;
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
		if (tbWorkspaceName->Text == "") {
			MessageBox::Show("Please enter valid name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbWorkspaceName->Focus();
			return;
		}
		else if (selectedIndex == -1) {
			currentWorkpace->name = tbWorkspaceName->Text;
			myWorkpaces.push_back(currentWorkpace);
			listWorkspaces->Items->Add(tbWorkspaceName->Text);
		}
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
			listItems->Items->RemoveAt(selectedItemIndex);
			selectedItemIndex = -1;
		}
	}
	private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedIndex != -1 && myWorkpaces.size() >= selectedIndex)
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
			listWorkspaces->Items->RemoveAt(selectedIndex);
			selectedIndex = -1;
			panelNewWorkspace->Hide();
		}
	}
	private: System::Void listItems_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listItems->SelectedItems->Count > 0) {
			selectedItemIndex = listItems->SelectedIndex;
			btEditItem->Show();
			btDeleteItem->Show();
		}
		else {
			selectedItemIndex = -1;
			btEditItem->Hide();
			btDeleteItem->Hide();
		}
	}
	private: System::Void panelNewWorkspace_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		panelNewWorkspace->Hide();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void saveData_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(String::Concat(Application::UserAppDataPath, "\\appdata.json"), false);
		Newtonsoft::Json::JsonSerializer^ serializer = gcnew Newtonsoft::Json::JsonSerializer();
		serializer->Serialize(sw, myWorkpaces);
		sw->Close();
	}

	private:	System::Void Workspace::workspaces::OnRunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e)
	{
		Application::Exit();
	}
	private: System::Void btCloseApp_Click(System::Object^ sender, System::EventArgs^ e) {
		panelNewWorkspace->Hide();

	}
};
}






