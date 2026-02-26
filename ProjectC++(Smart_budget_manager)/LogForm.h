#pragma once

namespace ProjectCSmartbudgetmanager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogForm
	/// </summary>
	public ref class LogForm : public System::Windows::Forms::Form
	{
	public:
		LogForm(void)
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
		~LogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ login_button;
	protected:
	private: System::Windows::Forms::Button^ singout_button;

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
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->singout_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(93, 55);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(160, 63);
			this->login_button->TabIndex = 0;
			this->login_button->Text = L"Log in";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &LogForm::login_button_Click);
			// 
			// singout_button
			// 
			this->singout_button->Location = System::Drawing::Point(93, 178);
			this->singout_button->Name = L"singout_button";
			this->singout_button->Size = System::Drawing::Size(160, 63);
			this->singout_button->TabIndex = 1;
			this->singout_button->Text = L"Sing out";
			this->singout_button->UseVisualStyleBackColor = true;
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 332);
			this->Controls->Add(this->singout_button);
			this->Controls->Add(this->login_button);
			this->Name = L"LogForm";
			this->Text = L"LogForm";
			this->Load += gcnew System::EventHandler(this, &LogForm::LogForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LogForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
