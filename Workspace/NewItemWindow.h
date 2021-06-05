#pragma once

namespace Workspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for NewItemWindow
	/// </summary>
	public ref class NewItemWindow : public System::Windows::Forms::Form
	{
	public:
		NewItemWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			urlPanel->Hide();
			applicationPanel->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewItemWindow()
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
	private: System::Windows::Forms::GroupBox^ taskGroup;

	private: System::Windows::Forms::Panel^ urlPanel;
	private: System::Windows::Forms::TextBox^ webURL;

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
	private: System::Windows::Forms::FolderBrowserDialog^ directorySelectDialog;
	private: System::Windows::Forms::OpenFileDialog^ selectApplicationDialog;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: int selectedIndex = -1;

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
			this->testApplication = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->taskGroup = (gcnew System::Windows::Forms::GroupBox());
			this->urlPanel = (gcnew System::Windows::Forms::Panel());
			this->webURL = (gcnew System::Windows::Forms::TextBox());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->applicationPanel = (gcnew System::Windows::Forms::Panel());
			this->tbDirectory = (gcnew System::Windows::Forms::TextBox());
			this->selectDirectoryButton = (gcnew System::Windows::Forms::Button());
			this->applicationPath = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chooseApplication = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->itemName = (gcnew System::Windows::Forms::TextBox());
			this->directorySelectDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->selectApplicationDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->addItem->SuspendLayout();
			this->taskGroup->SuspendLayout();
			this->urlPanel->SuspendLayout();
			this->applicationPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// addItem
			// 
			this->addItem->Controls->Add(this->label6);
			this->addItem->Controls->Add(this->itemType);
			this->addItem->Controls->Add(this->testApplication);
			this->addItem->Controls->Add(this->button1);
			this->addItem->Controls->Add(this->btCancel);
			this->addItem->Controls->Add(this->taskGroup);
			this->addItem->Controls->Add(this->label7);
			this->addItem->Controls->Add(this->itemName);
			this->addItem->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addItem->Location = System::Drawing::Point(0, 0);
			this->addItem->Name = L"addItem";
			this->addItem->Size = System::Drawing::Size(599, 362);
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
			this->itemType->SelectedIndexChanged += gcnew System::EventHandler(this, &NewItemWindow::itemType_SelectedIndexChanged);
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
			this->testApplication->Location = System::Drawing::Point(468, 330);
			this->testApplication->Name = L"testApplication";
			this->testApplication->Size = System::Drawing::Size(119, 25);
			this->testApplication->TabIndex = 12;
			this->testApplication->Text = L"Save";
			this->testApplication->UseVisualStyleBackColor = true;
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
			this->button1->Location = System::Drawing::Point(318, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 25);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Test";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewItemWindow::button1_Click);
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
			this->btCancel->Location = System::Drawing::Point(12, 330);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(119, 25);
			this->btCancel->TabIndex = 16;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			this->btCancel->Click += gcnew System::EventHandler(this, &NewItemWindow::btCancel_Click);
			// 
			// taskGroup
			// 
			this->taskGroup->Controls->Add(this->urlPanel);
			this->taskGroup->Controls->Add(this->applicationPanel);
			this->taskGroup->ForeColor = System::Drawing::Color::Black;
			this->taskGroup->Location = System::Drawing::Point(28, 156);
			this->taskGroup->Name = L"taskGroup";
			this->taskGroup->Size = System::Drawing::Size(545, 151);
			this->taskGroup->TabIndex = 15;
			this->taskGroup->TabStop = false;
			this->taskGroup->Text = L"Task Settings";
			// 
			// urlPanel
			// 
			this->urlPanel->BackColor = System::Drawing::Color::Transparent;
			this->urlPanel->Controls->Add(this->webURL);
			this->urlPanel->Controls->Add(this->labelTitle);
			this->urlPanel->Location = System::Drawing::Point(6, 16);
			this->urlPanel->Name = L"urlPanel";
			this->urlPanel->Size = System::Drawing::Size(520, 103);
			this->urlPanel->TabIndex = 18;
			// 
			// webURL
			// 
			this->webURL->Location = System::Drawing::Point(7, 55);
			this->webURL->Name = L"webURL";
			this->webURL->Size = System::Drawing::Size(375, 25);
			this->webURL->TabIndex = 12;
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Location = System::Drawing::Point(3, 23);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(34, 19);
			this->labelTitle->TabIndex = 0;
			this->labelTitle->Text = L"URL";
			// 
			// applicationPanel
			// 
			this->applicationPanel->BackColor = System::Drawing::Color::Transparent;
			this->applicationPanel->Controls->Add(this->tbDirectory);
			this->applicationPanel->Controls->Add(this->selectDirectoryButton);
			this->applicationPanel->Controls->Add(this->applicationPath);
			this->applicationPanel->Controls->Add(this->label5);
			this->applicationPanel->Controls->Add(this->chooseApplication);
			this->applicationPanel->Location = System::Drawing::Point(6, 21);
			this->applicationPanel->Name = L"applicationPanel";
			this->applicationPanel->Size = System::Drawing::Size(522, 114);
			this->applicationPanel->TabIndex = 17;
			// 
			// tbDirectory
			// 
			this->tbDirectory->Location = System::Drawing::Point(8, 73);
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
			this->selectDirectoryButton->Location = System::Drawing::Point(389, 73);
			this->selectDirectoryButton->Name = L"selectDirectoryButton";
			this->selectDirectoryButton->Size = System::Drawing::Size(119, 25);
			this->selectDirectoryButton->TabIndex = 13;
			this->selectDirectoryButton->Text = L"Choose Directory";
			this->selectDirectoryButton->UseVisualStyleBackColor = false;
			this->selectDirectoryButton->Click += gcnew System::EventHandler(this, &NewItemWindow::selectDirectoryButton_Click);
			// 
			// applicationPath
			// 
			this->applicationPath->Location = System::Drawing::Point(8, 32);
			this->applicationPath->Name = L"applicationPath";
			this->applicationPath->ReadOnly = true;
			this->applicationPath->Size = System::Drawing::Size(375, 25);
			this->applicationPath->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 5);
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
			this->chooseApplication->Location = System::Drawing::Point(389, 32);
			this->chooseApplication->Name = L"chooseApplication";
			this->chooseApplication->Size = System::Drawing::Size(119, 25);
			this->chooseApplication->TabIndex = 9;
			this->chooseApplication->Text = L"Select Application";
			this->chooseApplication->UseVisualStyleBackColor = true;
			this->chooseApplication->Click += gcnew System::EventHandler(this, &NewItemWindow::chooseApplication_Click);
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
			this->selectApplicationDialog->InitialDirectory = L"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs";
			// 
			// NewItemWindow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(599, 362);
			this->ControlBox = false;
			this->Controls->Add(this->addItem);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"NewItemWindow";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"New Workspace Item";
			this->TopMost = true;
			this->addItem->ResumeLayout(false);
			this->addItem->PerformLayout();
			this->taskGroup->ResumeLayout(false);
			this->urlPanel->ResumeLayout(false);
			this->urlPanel->PerformLayout();
			this->applicationPanel->ResumeLayout(false);
			this->applicationPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
	}
private: System::Void itemType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedIndex = itemType->SelectedIndex;
	switch (selectedIndex) {
	case 0:
		urlPanel->Hide();
		selectDirectoryButton->Hide();
		tbDirectory->Hide();
		applicationPanel->Show();
		break;
	case 1:
		urlPanel->Hide();
		selectDirectoryButton->Show();
		tbDirectory->Show();
		applicationPanel->Show();
		break;
	case 2:
		applicationPanel->Hide();
		urlPanel->Show();
		break;
	}
}
private: System::Void chooseApplication_Click(System::Object^ sender, System::EventArgs^ e) {
	if (selectApplicationDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		applicationPath->Text = selectApplicationDialog->FileName;
	}
}

private: System::Void selectDirectoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (directorySelectDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		tbDirectory->Text = directorySelectDialog->SelectedPath;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (selectedIndex == 2) {
		if(webURL->Text=="")
			MessageBox::Show("Please enter a valid URL", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		Process::Start(webURL->Text);
	}
	else {
		if (applicationPath->Text == "")
		{
			MessageBox::Show("Please select application", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {
			Process^ myProcess = gcnew Process();
			myProcess->StartInfo->UseShellExecute = false;
			// You can start any process, HelloWorld is a do-nothing example.
			myProcess->StartInfo->FileName = applicationPath->Text;
			if (selectedIndex == 1 && tbDirectory->Text != "")
				myProcess->StartInfo->Arguments = tbDirectory->Text;
			myProcess->StartInfo->CreateNoWindow = true;
			myProcess->Start();
		}
	}
}
};
}
