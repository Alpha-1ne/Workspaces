#pragma once
#include "workspaces.h"

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
			
			try {
				StreamReader^ din = File::OpenText("text.json");
				String^ data = din->ReadLine();
				array<WorkspaceContainer^>^ root = Newtonsoft::Json::JsonConvert::DeserializeObject<array<WorkspaceContainer^>^>(data);
				din->Close();
				workspace = gcnew Workspace::workspaces(root);
			}
			catch (Exception^ e) {
				workspace = gcnew Workspace::workspaces();
			}
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



































	protected:

	protected:

	protected:








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		Workspace::workspaces^ workspace;


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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			// home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 600);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion






private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("https://alphaone.me");
}
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
	workspace->Show();
	Hide();
}
};
}
