#pragma once
#include "API.h"
#include <string>
#include "Wrapper.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>


namespace ProjectCSmartbudgetmanager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Globalization;

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
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_login;
	private: System::Windows::Forms::TextBox^ textBox_adress;
	private: System::Windows::Forms::TextBox^ textBox_name;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ DISPLAY;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ BalanceL;
	private: System::Windows::Forms::ListBox^ categories;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox_nameCategory;
	private: System::Windows::Forms::Button^ button_addCategoty;
	private: System::Windows::Forms::TextBox^ textBox_transactionName;
	private: System::Windows::Forms::TextBox^ textBox_transactionAmount;
	private: System::Windows::Forms::TextBox^ textBox_TransactionCatId;

	private: System::Windows::Forms::Button^ button_addTransaction;





	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->singout_button = (gcnew System::Windows::Forms::Button());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_adress = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->DISPLAY = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->BalanceL = (gcnew System::Windows::Forms::Label());
			this->categories = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox_nameCategory = (gcnew System::Windows::Forms::TextBox());
			this->button_addCategoty = (gcnew System::Windows::Forms::Button());
			this->textBox_transactionName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_transactionAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBox_TransactionCatId = (gcnew System::Windows::Forms::TextBox());
			this->button_addTransaction = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(121, 8);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(102, 38);
			this->login_button->TabIndex = 0;
			this->login_button->Text = L"Log in";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &LogForm::login_button_Click);
			// 
			// singout_button
			// 
			this->singout_button->Location = System::Drawing::Point(13, 8);
			this->singout_button->Name = L"singout_button";
			this->singout_button->Size = System::Drawing::Size(102, 38);
			this->singout_button->TabIndex = 1;
			this->singout_button->Text = L"Sing out";
			this->singout_button->UseVisualStyleBackColor = true;
			this->singout_button->Click += gcnew System::EventHandler(this, &LogForm::singout_button_Click);
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(12, 52);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(210, 22);
			this->textBox_password->TabIndex = 2;
			this->textBox_password->Text = L"password";
			// 
			// textBox_login
			// 
			this->textBox_login->Location = System::Drawing::Point(13, 80);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(210, 22);
			this->textBox_login->TabIndex = 3;
			this->textBox_login->Text = L"login";
			// 
			// textBox_adress
			// 
			this->textBox_adress->Location = System::Drawing::Point(13, 136);
			this->textBox_adress->Name = L"textBox_adress";
			this->textBox_adress->Size = System::Drawing::Size(103, 22);
			this->textBox_adress->TabIndex = 5;
			this->textBox_adress->Text = L"adress";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(12, 108);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(103, 22);
			this->textBox_name->TabIndex = 4;
			this->textBox_name->Text = L"name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(253, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 7;
			this->label1->Click += gcnew System::EventHandler(this, &LogForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(256, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(332, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Update transactions";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LogForm::button1_Click);
			// 
			// DISPLAY
			// 
			this->DISPLAY->FormattingEnabled = true;
			this->DISPLAY->HorizontalExtent = 500;
			this->DISPLAY->HorizontalScrollbar = true;
			this->DISPLAY->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->DISPLAY->ItemHeight = 16;
			this->DISPLAY->Location = System::Drawing::Point(256, 8);
			this->DISPLAY->Name = L"DISPLAY";
			this->DISPLAY->ScrollAlwaysVisible = true;
			this->DISPLAY->Size = System::Drawing::Size(332, 164);
			this->DISPLAY->Sorted = true;
			this->DISPLAY->TabIndex = 23;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &LogForm::timer1_Tick);
			// 
			// BalanceL
			// 
			this->BalanceL->AutoSize = true;
			this->BalanceL->Location = System::Drawing::Point(9, 307);
			this->BalanceL->Name = L"BalanceL";
			this->BalanceL->Size = System::Drawing::Size(60, 16);
			this->BalanceL->TabIndex = 24;
			this->BalanceL->Text = L"Balance:";
			// 
			// categories
			// 
			this->categories->FormattingEnabled = true;
			this->categories->ItemHeight = 16;
			this->categories->Location = System::Drawing::Point(620, 9);
			this->categories->Name = L"categories";
			this->categories->ScrollAlwaysVisible = true;
			this->categories->Size = System::Drawing::Size(212, 164);
			this->categories->Sorted = true;
			this->categories->TabIndex = 26;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(620, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 23);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Update categories";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LogForm::button2_Click);
			// 
			// textBox_nameCategory
			// 
			this->textBox_nameCategory->Location = System::Drawing::Point(620, 208);
			this->textBox_nameCategory->Name = L"textBox_nameCategory";
			this->textBox_nameCategory->Size = System::Drawing::Size(212, 22);
			this->textBox_nameCategory->TabIndex = 27;
			this->textBox_nameCategory->Text = L"name";
			this->textBox_nameCategory->TextChanged += gcnew System::EventHandler(this, &LogForm::textBox_nameCategory_TextChanged);
			// 
			// button_addCategoty
			// 
			this->button_addCategoty->Location = System::Drawing::Point(620, 236);
			this->button_addCategoty->Name = L"button_addCategoty";
			this->button_addCategoty->Size = System::Drawing::Size(212, 23);
			this->button_addCategoty->TabIndex = 28;
			this->button_addCategoty->Text = L"Add categoty";
			this->button_addCategoty->UseVisualStyleBackColor = true;
			this->button_addCategoty->Click += gcnew System::EventHandler(this, &LogForm::button_addCategoty_Click);
			// 
			// textBox_transactionName
			// 
			this->textBox_transactionName->Location = System::Drawing::Point(256, 207);
			this->textBox_transactionName->Name = L"textBox_transactionName";
			this->textBox_transactionName->Size = System::Drawing::Size(332, 22);
			this->textBox_transactionName->TabIndex = 29;
			this->textBox_transactionName->Text = L"name";
			// 
			// textBox_transactionAmount
			// 
			this->textBox_transactionAmount->Location = System::Drawing::Point(256, 236);
			this->textBox_transactionAmount->Name = L"textBox_transactionAmount";
			this->textBox_transactionAmount->Size = System::Drawing::Size(332, 22);
			this->textBox_transactionAmount->TabIndex = 30;
			this->textBox_transactionAmount->Text = L"amount";
			// 
			// textBox_TransactionCatId
			// 
			this->textBox_TransactionCatId->Location = System::Drawing::Point(256, 264);
			this->textBox_TransactionCatId->Name = L"textBox_TransactionCatId";
			this->textBox_TransactionCatId->Size = System::Drawing::Size(332, 22);
			this->textBox_TransactionCatId->TabIndex = 31;
			this->textBox_TransactionCatId->Text = L"category id";
			// 
			// button_addTransaction
			// 
			this->button_addTransaction->Location = System::Drawing::Point(256, 292);
			this->button_addTransaction->Name = L"button_addTransaction";
			this->button_addTransaction->Size = System::Drawing::Size(332, 23);
			this->button_addTransaction->TabIndex = 32;
			this->button_addTransaction->Text = L"Add transaction";
			this->button_addTransaction->UseVisualStyleBackColor = true;
			this->button_addTransaction->Click += gcnew System::EventHandler(this, &LogForm::button_addTransaction_Click);
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 332);
			this->Controls->Add(this->button_addTransaction);
			this->Controls->Add(this->textBox_TransactionCatId);
			this->Controls->Add(this->textBox_transactionAmount);
			this->Controls->Add(this->textBox_transactionName);
			this->Controls->Add(this->button_addCategoty);
			this->Controls->Add(this->textBox_nameCategory);
			this->Controls->Add(this->categories);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->BalanceL);
			this->Controls->Add(this->DISPLAY);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_adress);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->textBox_login);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->singout_button);
			this->Controls->Add(this->login_button);
			this->Name = L"LogForm";
			this->Text = L"LogForm";
			this->Load += gcnew System::EventHandler(this, &LogForm::LogForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private:
		bool isLoggedIn = false;
		System::String^ login;
		System::String^ password;
		double balannce = 0;
	private: System::Void LogForm_Load(System::Object^ sender, System::EventArgs^ e) {
		startAll();
	}
	private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {
		login = textBox_password->Text;
		password = textBox_login->Text;
		double b = balannce;
		isLoggedIn = log(login, password, &b);
		balannce = b;
	}
	private: System::Void singout_button_Click(System::Object^ sender, System::EventArgs^ e) {
		login = textBox_password->Text;
		password = textBox_login->Text;
		
		isLoggedIn = signup(login, password, textBox_name->Text, textBox_adress->Text, 0);
		balannce = 0;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(!isLoggedIn) return;
		DISPLAY->Items->Clear();
		String^ result = showTransactions(login);
		String^ row = "";
		for (int i = 0; i < result->Length; i++) {
			row += result[i];
			if (result[i] == '|') {
				DISPLAY->Items->Add(row);
				row = "";
			}
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	BalanceL->Text = "Balance" + marshal_as<String^>(std::to_string(balannce));
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	categories->Items->Clear();
	String^ result = showCategories(login);
	String^ row = "";
	for (int i = 0; i < result->Length; i++) {
		row += result[i];
		if (result[i] == '|') {
			categories->Items->Add(row);
			row = "";
		}
	}
}
private: System::Void button_addCategoty_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	String^ categoryName = textBox_nameCategory->Text;
	addCategory(login, categoryName);
}
private: System::Void textBox_nameCategory_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_addTransaction_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	String^ transName = textBox_transactionName->Text;
	try {
		double transAmount = Double::Parse(textBox_transactionAmount->Text, CultureInfo::InvariantCulture);
		int catId = Int32::Parse(textBox_TransactionCatId->Text);
		addTransaction(login, transName, transAmount, catId);
		balannce += transAmount;
	}
	catch (...) {
	}

}
};
}
