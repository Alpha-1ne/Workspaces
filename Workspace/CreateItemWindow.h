#pragma once

namespace Workspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateItemWindow
	/// </summary>
	public ref class CreateItemWindow : public System::Windows::Forms::Form
	{
	public:
		CreateItemWindow(void)
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
		~CreateItemWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ addItem;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ itemType;
	private: System::Windows::Forms::GroupBox^ applicationGroup;
	private: System::Windows::Forms::Panel^ urlPanel;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::Panel^ applicationPanel;
	private: System::Windows::Forms::TextBox^ tbDirectory;
	private: System::Windows::Forms::Button^ selectDirectoryButton;
	private: System::Windows::Forms::TextBox^ applicationPath;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ chooseApplication;
	private: System::Windows::Forms::Button^ btCancel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ testApplication;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ itemName;

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
			this->addItem = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->itemType = (gcnew System::Windows::Forms::ComboBox());
			this->applicationGroup = (gcnew System::Windows::Forms::GroupBox());
			this->urlPanel = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->applicationPanel = (gcnew System::Windows::Forms::Panel());
			this->tbDirectory = (gcnew System::Windows::Forms::TextBox());
			this->selectDirectoryButton = (gcnew System::Windows::Forms::Button());
			this->applicationPath = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chooseApplication = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->testApplication = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->itemName = (gcnew System::Windows::Forms::TextBox());
			this->addItem->SuspendLayout();
			this->applicationGroup->SuspendLayout();
			this->urlPanel->SuspendLayout();
			this->applicationPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// addItem
			// 
			this->addItem->Controls->Add(this->label6);
			this->addItem->Controls->Add(this->itemType);
			this->addItem->Controls->Add(this->applicationGroup);
			this->addItem->Controls->Add(this->label7);
			this->addItem->Controls->Add(this->itemName);
			this->addItem->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addItem->Location = System::Drawing::Point(0, 0);
			this->addItem->Name = L"addItem";
			this->addItem->Size = System::Drawing::Size(591, 419);
			this->addItem->TabIndex = 12;
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
			this->itemType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Application", L"Application + Directory", L"URL" });
			this->itemType->Location = System::Drawing::Point(28, 113);
			this->itemType->Name = L"itemType";
			this->itemType->Size = System::Drawing::Size(545, 23);
			this->itemType->TabIndex = 16;
			// 
			// applicationGroup
			// 
			this->applicationGroup->Controls->Add(this->urlPanel);
			this->applicationGroup->Controls->Add(this->applicationPanel);
			this->applicationGroup->Controls->Add(this->btCancel);
			this->applicationGroup->Controls->Add(this->button1);
			this->applicationGroup->Controls->Add(this->testApplication);
			this->applicationGroup->ForeColor = System::Drawing::Color::Black;
			this->applicationGroup->Location = System::Drawing::Point(28, 156);
			this->applicationGroup->Name = L"applicationGroup";
			this->applicationGroup->Size = System::Drawing::Size(545, 223);
			this->applicationGroup->TabIndex = 15;
			this->applicationGroup->TabStop = false;
			this->applicationGroup->Text = L"Task Settings";
			// 
			// urlPanel
			// 
			this->urlPanel->Controls->Add(this->textBox1);
			this->urlPanel->Controls->Add(this->labelTitle);
			this->urlPanel->Location = System::Drawing::Point(6, 33);
			this->urlPanel->Name = L"urlPanel";
			this->urlPanel->Size = System::Drawing::Size(520, 103);
			this->urlPanel->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(375, 22);
			this->textBox1->TabIndex = 12;
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Location = System::Drawing::Point(3, 23);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(36, 17);
			this->labelTitle->TabIndex = 0;
			this->labelTitle->Text = L"URL";
			// 
			// applicationPanel
			// 
			this->applicationPanel->Controls->Add(this->tbDirectory);
			this->applicationPanel->Controls->Add(this->selectDirectoryButton);
			this->applicationPanel->Controls->Add(this->applicationPath);
			this->applicationPanel->Controls->Add(this->label5);
			this->applicationPanel->Controls->Add(this->chooseApplication);
			this->applicationPanel->Location = System::Drawing::Point(8, 30);
			this->applicationPanel->Name = L"applicationPanel";
			this->applicationPanel->Size = System::Drawing::Size(522, 114);
			this->applicationPanel->TabIndex = 17;
			// 
			// tbDirectory
			// 
			this->tbDirectory->Location = System::Drawing::Point(8, 73);
			this->tbDirectory->Name = L"tbDirectory";
			this->tbDirectory->ReadOnly = true;
			this->tbDirectory->Size = System::Drawing::Size(375, 22);
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
			this->selectDirectoryButton->Location = System::Drawing::Point(389, 73);
			this->selectDirectoryButton->Name = L"selectDirectoryButton";
			this->selectDirectoryButton->Size = System::Drawing::Size(119, 25);
			this->selectDirectoryButton->TabIndex = 13;
			this->selectDirectoryButton->Text = L"Choose Directory";
			this->selectDirectoryButton->UseVisualStyleBackColor = false;
			// 
			// applicationPath
			// 
			this->applicationPath->Location = System::Drawing::Point(8, 32);
			this->applicationPath->Name = L"applicationPath";
			this->applicationPath->ReadOnly = true;
			this->applicationPath->Size = System::Drawing::Size(375, 22);
			this->applicationPath->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 5);
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
			this->chooseApplication->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chooseApplication->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->chooseApplication->ForeColor = System::Drawing::Color::Black;
			this->chooseApplication->Location = System::Drawing::Point(389, 32);
			this->chooseApplication->Name = L"chooseApplication";
			this->chooseApplication->Size = System::Drawing::Size(119, 25);
			this->chooseApplication->TabIndex = 9;
			this->chooseApplication->Text = L"Select Application";
			this->chooseApplication->UseVisualStyleBackColor = true;
			// 
			// btCancel
			// 
			this->btCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btCancel->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btCancel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->btCancel->ForeColor = System::Drawing::Color::White;
			this->btCancel->Location = System::Drawing::Point(6, 185);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(119, 25);
			this->btCancel->TabIndex = 16;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(286, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 25);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Test";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// testApplication
			// 
			this->testApplication->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->testApplication->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->testApplication->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->testApplication->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->testApplication->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->testApplication->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->testApplication->ForeColor = System::Drawing::Color::White;
			this->testApplication->Location = System::Drawing::Point(411, 185);
			this->testApplication->Name = L"testApplication";
			this->testApplication->Size = System::Drawing::Size(119, 25);
			this->testApplication->TabIndex = 12;
			this->testApplication->Text = L"Save";
			this->testApplication->UseVisualStyleBackColor = true;
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
			// CreateItemWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 419);
			this->Controls->Add(this->addItem);
			this->Name = L"CreateItemWindow";
			this->Text = L"CreateItemWindow";
			this->addItem->ResumeLayout(false);
			this->addItem->PerformLayout();
			this->applicationGroup->ResumeLayout(false);
			this->urlPanel->ResumeLayout(false);
			this->urlPanel->PerformLayout();
			this->applicationPanel->ResumeLayout(false);
			this->applicationPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
