#pragma once

namespace Workspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TreeView^ treeView1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(workspaces::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelWorkspaces = (gcnew System::Windows::Forms::Label());
			this->btAddWorkspace = (gcnew System::Windows::Forms::Button());
			this->btAddItem = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->treeView1);
			this->panel1->Controls->Add(this->btAddItem);
			this->panel1->Controls->Add(this->btAddWorkspace);
			this->panel1->Controls->Add(this->labelWorkspaces);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 600);
			this->panel1->TabIndex = 0;
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
			// btAddWorkspace
			// 
			this->btAddWorkspace->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btAddWorkspace->Location = System::Drawing::Point(3, 558);
			this->btAddWorkspace->Name = L"btAddWorkspace";
			this->btAddWorkspace->Size = System::Drawing::Size(123, 34);
			this->btAddWorkspace->TabIndex = 1;
			this->btAddWorkspace->Text = L"Add Workspace";
			this->btAddWorkspace->UseVisualStyleBackColor = true;
			// 
			// btAddItem
			// 
			this->btAddItem->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btAddItem->Location = System::Drawing::Point(131, 558);
			this->btAddItem->Name = L"btAddItem";
			this->btAddItem->Size = System::Drawing::Size(116, 34);
			this->btAddItem->TabIndex = 2;
			this->btAddItem->Text = L"Add Item";
			this->btAddItem->UseVisualStyleBackColor = true;
			this->btAddItem->Click += gcnew System::EventHandler(this, &workspaces::button2_Click);
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(8, 27);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(231, 525);
			this->treeView1->TabIndex = 3;
			// 
			// workspaces
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"workspaces";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"workspaces";
			this->Load += gcnew System::EventHandler(this, &workspaces::workspaces_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void workspaces_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
