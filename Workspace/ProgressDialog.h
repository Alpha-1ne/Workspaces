#pragma once

namespace Workspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProgressDialog
	/// </summary>
	public ref class ProgressDialog : public System::Windows::Forms::Form
	{
	public:
		ProgressDialog(void)
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
		~ProgressDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ dialogProgressBar;
	protected:
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProgressDialog::typeid));
			this->dialogProgressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dialogProgressBar
			// 
			this->dialogProgressBar->Location = System::Drawing::Point(17, 47);
			this->dialogProgressBar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dialogProgressBar->MarqueeAnimationSpeed = 20;
			this->dialogProgressBar->Name = L"dialogProgressBar";
			this->dialogProgressBar->Size = System::Drawing::Size(514, 23);
			this->dialogProgressBar->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->dialogProgressBar->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Saving workspaces...";
			// 
			// ProgressDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(549, 87);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dialogProgressBar);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::Color::LightBlue;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ProgressDialog";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Please wait...";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &ProgressDialog::ProgressDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProgressDialog_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
