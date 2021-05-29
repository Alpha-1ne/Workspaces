#pragma once

namespace Workspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			main->Hide();
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
	private: System::Windows::Forms::Panel^ main;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:

	protected:

	protected:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(home::typeid));
			this->close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->main = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->main->SuspendLayout();
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
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 40));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(285, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 89);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Workspace";
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::Transparent;
			this->startButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->startButton->FlatAppearance->BorderSize = 2;
			this->startButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->startButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->startButton->ForeColor = System::Drawing::Color::White;
			this->startButton->Location = System::Drawing::Point(347, 373);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(200, 60);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Get Started";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &home::startButton_Click);
			// 
			// pictureBox1
			// 
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
			// main
			// 
			this->main->BackColor = System::Drawing::Color::Gainsboro;
			this->main->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"main.BackgroundImage")));
			this->main->Controls->Add(this->label2);
			this->main->Controls->Add(this->textBox1);
			this->main->Controls->Add(this->button2);
			this->main->Controls->Add(this->button1);
			this->main->Controls->Add(this->listBox1);
			this->main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main->Location = System::Drawing::Point(0, 0);
			this->main->Name = L"main";
			this->main->Size = System::Drawing::Size(900, 600);
			this->main->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(332, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 35);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Display Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(338, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(500, 41);
			this->textBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(192, 534);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(19, 22);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(281, 497);
			this->listBox1->TabIndex = 0;
			// 
			// home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->main);
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
			this->Load += gcnew System::EventHandler(this, &home::home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->main->ResumeLayout(false);
			this->main->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://alphaone.me");
}
private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
	main->Show();
}
};
}
