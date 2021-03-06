#pragma once
#include "workspaces.h"
#include "DataRepository.h"

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
	using namespace  Microsoft::Win32;

	public ref class home : public System::Windows::Forms::Form
	{
	public:
		home(void)
		{
			InitializeComponent();
			dataRepository = gcnew DataRepository(Application::UserAppDataPath, Application::ExecutablePath);
			checkBoxStartup->Checked = dataRepository->launchAtStartup();
			labelVersion->Text = String::Concat("Version ", Application::ProductVersion);
			this->startButton->Text = "Loading...";
			readFile->RunWorkerAsync();
		}

	protected:
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
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::CheckBox^ checkBoxStartup;
	private: System::ComponentModel::BackgroundWorker^ readFile;
	private: System::Windows::Forms::Label^ labelVersion;
	private: System::Windows::Forms::ProgressBar^ readingProgress;
	private: DataRepository^ dataRepository;

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
			   this->checkBoxStartup = (gcnew System::Windows::Forms::CheckBox());
			   this->readFile = (gcnew System::ComponentModel::BackgroundWorker());
			   this->labelVersion = (gcnew System::Windows::Forms::Label());
			   this->readingProgress = (gcnew System::Windows::Forms::ProgressBar());
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
			   this->close->TabIndex = 2;
			   this->close->TabStop = false;
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
			   this->label1->Location = System::Drawing::Point(495, 195);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(388, 89);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Workspaces";
			   // 
			   // startButton
			   // 
			   this->startButton->BackColor = System::Drawing::SystemColors::Highlight;
			   this->startButton->Enabled = false;
			   this->startButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			   this->startButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			   this->startButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			   this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->startButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			   this->startButton->ForeColor = System::Drawing::Color::White;
			   this->startButton->Location = System::Drawing::Point(335, 440);
			   this->startButton->Name = L"startButton";
			   this->startButton->Size = System::Drawing::Size(223, 60);
			   this->startButton->TabIndex = 0;
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
			   // checkBoxStartup
			   // 
			   this->checkBoxStartup->AutoSize = true;
			   this->checkBoxStartup->BackColor = System::Drawing::Color::Transparent;
			   this->checkBoxStartup->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			   this->checkBoxStartup->ForeColor = System::Drawing::Color::White;
			   this->checkBoxStartup->Location = System::Drawing::Point(561, 297);
			   this->checkBoxStartup->Name = L"checkBoxStartup";
			   this->checkBoxStartup->Size = System::Drawing::Size(246, 27);
			   this->checkBoxStartup->TabIndex = 4;
			   this->checkBoxStartup->Text = L"Launch on Windows startup";
			   this->checkBoxStartup->UseVisualStyleBackColor = false;
			   this->checkBoxStartup->CheckedChanged += gcnew System::EventHandler(this, &home::checkBoxStartup_CheckedChanged);
			   // 
			   // readFile
			   // 
			   this->readFile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &home::readFile_DoWork);
			   this->readFile->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &home::OnRunWorkerCompleted);
			   // 
			   // labelVersion
			   // 
			   this->labelVersion->AutoSize = true;
			   this->labelVersion->BackColor = System::Drawing::Color::Transparent;
			   this->labelVersion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->labelVersion->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			   this->labelVersion->ForeColor = System::Drawing::Color::White;
			   this->labelVersion->Location = System::Drawing::Point(12, 565);
			   this->labelVersion->Name = L"labelVersion";
			   this->labelVersion->Size = System::Drawing::Size(39, 23);
			   this->labelVersion->TabIndex = 5;
			   this->labelVersion->Text = L"V1.1";
			   // 
			   // readingProgress
			   // 
			   this->readingProgress->Location = System::Drawing::Point(335, 500);
			   this->readingProgress->MarqueeAnimationSpeed = 20;
			   this->readingProgress->Name = L"readingProgress";
			   this->readingProgress->Size = System::Drawing::Size(223, 23);
			   this->readingProgress->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			   this->readingProgress->TabIndex = 6;
			   // 
			   // home
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::White;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(900, 600);
			   this->Controls->Add(this->readingProgress);
			   this->Controls->Add(this->labelVersion);
			   this->Controls->Add(this->checkBoxStartup);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->startButton);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->close);
			   this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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

	private: System::Void checkBoxStartup_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		RegistryKey^ rk = Registry::CurrentUser->OpenSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", true);
		if (checkBoxStartup->Checked) {
			rk->SetValue("Workspaces", Application::ExecutablePath);
		}
		else {
			rk->DeleteValue("Workspaces", false);
		}
	}

	private: System::Void readFile_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		dataRepository->readDataFile();
		workspace = gcnew Workspace::workspaces(dataRepository);
	}

	private: System::Void Workspace::home::OnRunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e)
	{
		this->startButton->Enabled = true;
		this->startButton->Text = "Get Started";
		readingProgress->Hide();
	}

	};
}



