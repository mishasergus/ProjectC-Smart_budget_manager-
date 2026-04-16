#pragma once
#include "API.h"
#include <string>
#include "Wrapper.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "exeptionClasses.h"




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
	private: System::Windows::Forms::Button^ button_orderByDate;
	private: System::Windows::Forms::Button^ button_orderByCategory;
	private: System::Windows::Forms::Button^ button_orderByAmount;
	private: System::Windows::Forms::Button^ button_groupByCategory;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerStart;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEnd;
	private: System::Windows::Forms::Button^ button_maxByTime;
	private: System::Windows::Forms::Button^ button_DeleteTransaction;
	private: System::Windows::Forms::Button^ button_DeleteCategory;
	private: System::Windows::Forms::TextBox^ textBox_idToDel;
	private: System::Windows::Forms::Button^ button_selectForUpdatingCat;
	private: System::Windows::Forms::Button^ button_selectForUpdatingTran;
	private: System::Windows::Forms::TextBox^ textBox_updatingName;
	private: System::Windows::Forms::TextBox^ textBox_updatingAmount;
	private: System::Windows::Forms::TextBox^ textBox_updatingCategoryId;
	private: System::Windows::Forms::Button^ button_updateTransaction;
	private: System::Windows::Forms::Button^ button_updateCategoty;











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
			this->button_orderByDate = (gcnew System::Windows::Forms::Button());
			this->button_orderByCategory = (gcnew System::Windows::Forms::Button());
			this->button_orderByAmount = (gcnew System::Windows::Forms::Button());
			this->button_groupByCategory = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->button_maxByTime = (gcnew System::Windows::Forms::Button());
			this->button_DeleteTransaction = (gcnew System::Windows::Forms::Button());
			this->button_DeleteCategory = (gcnew System::Windows::Forms::Button());
			this->textBox_idToDel = (gcnew System::Windows::Forms::TextBox());
			this->button_selectForUpdatingCat = (gcnew System::Windows::Forms::Button());
			this->button_selectForUpdatingTran = (gcnew System::Windows::Forms::Button());
			this->textBox_updatingName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_updatingAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBox_updatingCategoryId = (gcnew System::Windows::Forms::TextBox());
			this->button_updateTransaction = (gcnew System::Windows::Forms::Button());
			this->button_updateCategoty = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(121, 7);
			this->login_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(101, 38);
			this->login_button->TabIndex = 0;
			this->login_button->Text = L"Log in";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &LogForm::login_button_Click);
			// 
			// singout_button
			// 
			this->singout_button->Location = System::Drawing::Point(13, 7);
			this->singout_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->singout_button->Name = L"singout_button";
			this->singout_button->Size = System::Drawing::Size(101, 38);
			this->singout_button->TabIndex = 1;
			this->singout_button->Text = L"Sing out";
			this->singout_button->UseVisualStyleBackColor = true;
			this->singout_button->Click += gcnew System::EventHandler(this, &LogForm::singout_button_Click);
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(12, 52);
			this->textBox_password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(209, 22);
			this->textBox_password->TabIndex = 2;
			this->textBox_password->Text = L"password";
			// 
			// textBox_login
			// 
			this->textBox_login->Location = System::Drawing::Point(13, 80);
			this->textBox_login->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(209, 22);
			this->textBox_login->TabIndex = 3;
			this->textBox_login->Text = L"login";
			// 
			// textBox_adress
			// 
			this->textBox_adress->Location = System::Drawing::Point(13, 135);
			this->textBox_adress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_adress->Name = L"textBox_adress";
			this->textBox_adress->Size = System::Drawing::Size(103, 22);
			this->textBox_adress->TabIndex = 5;
			this->textBox_adress->Text = L"adress";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(12, 108);
			this->textBox_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(332, 31);
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
			this->DISPLAY->Location = System::Drawing::Point(256, 7);
			this->DISPLAY->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DISPLAY->Name = L"DISPLAY";
			this->DISPLAY->ScrollAlwaysVisible = true;
			this->DISPLAY->Size = System::Drawing::Size(332, 164);
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
			this->BalanceL->Location = System::Drawing::Point(12, 161);
			this->BalanceL->Name = L"BalanceL";
			this->BalanceL->Size = System::Drawing::Size(60, 16);
			this->BalanceL->TabIndex = 24;
			this->BalanceL->Text = L"Balance:";
			// 
			// categories
			// 
			this->categories->FormattingEnabled = true;
			this->categories->ItemHeight = 16;
			this->categories->Location = System::Drawing::Point(803, 9);
			this->categories->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->categories->Name = L"categories";
			this->categories->ScrollAlwaysVisible = true;
			this->categories->Size = System::Drawing::Size(212, 164);
			this->categories->TabIndex = 26;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(803, 178);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 31);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Update categories";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LogForm::button2_Click);
			// 
			// textBox_nameCategory
			// 
			this->textBox_nameCategory->Location = System::Drawing::Point(801, 214);
			this->textBox_nameCategory->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_nameCategory->Name = L"textBox_nameCategory";
			this->textBox_nameCategory->Size = System::Drawing::Size(212, 22);
			this->textBox_nameCategory->TabIndex = 27;
			this->textBox_nameCategory->Text = L"name";
			this->textBox_nameCategory->TextChanged += gcnew System::EventHandler(this, &LogForm::textBox_nameCategory_TextChanged);
			// 
			// button_addCategoty
			// 
			this->button_addCategoty->Location = System::Drawing::Point(803, 251);
			this->button_addCategoty->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_addCategoty->Name = L"button_addCategoty";
			this->button_addCategoty->Size = System::Drawing::Size(212, 31);
			this->button_addCategoty->TabIndex = 28;
			this->button_addCategoty->Text = L"Add categoty";
			this->button_addCategoty->UseVisualStyleBackColor = true;
			this->button_addCategoty->Click += gcnew System::EventHandler(this, &LogForm::button_addCategoty_Click);
			// 
			// textBox_transactionName
			// 
			this->textBox_transactionName->Location = System::Drawing::Point(257, 322);
			this->textBox_transactionName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_transactionName->Name = L"textBox_transactionName";
			this->textBox_transactionName->Size = System::Drawing::Size(332, 22);
			this->textBox_transactionName->TabIndex = 29;
			this->textBox_transactionName->Text = L"name";
			// 
			// textBox_transactionAmount
			// 
			this->textBox_transactionAmount->Location = System::Drawing::Point(257, 351);
			this->textBox_transactionAmount->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_transactionAmount->Name = L"textBox_transactionAmount";
			this->textBox_transactionAmount->Size = System::Drawing::Size(332, 22);
			this->textBox_transactionAmount->TabIndex = 30;
			this->textBox_transactionAmount->Text = L"amount";
			// 
			// textBox_TransactionCatId
			// 
			this->textBox_TransactionCatId->Location = System::Drawing::Point(257, 379);
			this->textBox_TransactionCatId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_TransactionCatId->Name = L"textBox_TransactionCatId";
			this->textBox_TransactionCatId->Size = System::Drawing::Size(332, 22);
			this->textBox_TransactionCatId->TabIndex = 31;
			this->textBox_TransactionCatId->Text = L"category id";
			// 
			// button_addTransaction
			// 
			this->button_addTransaction->Location = System::Drawing::Point(257, 407);
			this->button_addTransaction->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_addTransaction->Name = L"button_addTransaction";
			this->button_addTransaction->Size = System::Drawing::Size(332, 31);
			this->button_addTransaction->TabIndex = 32;
			this->button_addTransaction->Text = L"Add transaction";
			this->button_addTransaction->UseVisualStyleBackColor = true;
			this->button_addTransaction->Click += gcnew System::EventHandler(this, &LogForm::button_addTransaction_Click);
			// 
			// button_orderByDate
			// 
			this->button_orderByDate->Location = System::Drawing::Point(259, 214);
			this->button_orderByDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_orderByDate->Name = L"button_orderByDate";
			this->button_orderByDate->Size = System::Drawing::Size(332, 31);
			this->button_orderByDate->TabIndex = 33;
			this->button_orderByDate->Text = L"Order by date";
			this->button_orderByDate->UseVisualStyleBackColor = true;
			this->button_orderByDate->Click += gcnew System::EventHandler(this, &LogForm::button_orderByDate_Click);
			// 
			// button_orderByCategory
			// 
			this->button_orderByCategory->Location = System::Drawing::Point(259, 251);
			this->button_orderByCategory->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_orderByCategory->Name = L"button_orderByCategory";
			this->button_orderByCategory->Size = System::Drawing::Size(332, 31);
			this->button_orderByCategory->TabIndex = 34;
			this->button_orderByCategory->Text = L"Order by category";
			this->button_orderByCategory->UseVisualStyleBackColor = true;
			this->button_orderByCategory->Click += gcnew System::EventHandler(this, &LogForm::button_orderByCategory_Click);
			// 
			// button_orderByAmount
			// 
			this->button_orderByAmount->Location = System::Drawing::Point(259, 287);
			this->button_orderByAmount->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_orderByAmount->Name = L"button_orderByAmount";
			this->button_orderByAmount->Size = System::Drawing::Size(332, 31);
			this->button_orderByAmount->TabIndex = 35;
			this->button_orderByAmount->Text = L"Order by amount";
			this->button_orderByAmount->UseVisualStyleBackColor = true;
			this->button_orderByAmount->Click += gcnew System::EventHandler(this, &LogForm::button_orderByAmount_Click);
			// 
			// button_groupByCategory
			// 
			this->button_groupByCategory->Location = System::Drawing::Point(597, 251);
			this->button_groupByCategory->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_groupByCategory->Name = L"button_groupByCategory";
			this->button_groupByCategory->Size = System::Drawing::Size(203, 31);
			this->button_groupByCategory->TabIndex = 36;
			this->button_groupByCategory->Text = L"Group by category";
			this->button_groupByCategory->UseVisualStyleBackColor = true;
			this->button_groupByCategory->Click += gcnew System::EventHandler(this, &LogForm::button_groupByCategory_Click);
			// 
			// dateTimePickerStart
			// 
			this->dateTimePickerStart->Location = System::Drawing::Point(597, 287);
			this->dateTimePickerStart->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerStart->Name = L"dateTimePickerStart";
			this->dateTimePickerStart->Size = System::Drawing::Size(201, 22);
			this->dateTimePickerStart->TabIndex = 37;
			// 
			// dateTimePickerEnd
			// 
			this->dateTimePickerEnd->Location = System::Drawing::Point(597, 319);
			this->dateTimePickerEnd->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerEnd->Name = L"dateTimePickerEnd";
			this->dateTimePickerEnd->Size = System::Drawing::Size(201, 22);
			this->dateTimePickerEnd->TabIndex = 38;
			// 
			// button_maxByTime
			// 
			this->button_maxByTime->Location = System::Drawing::Point(596, 350);
			this->button_maxByTime->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_maxByTime->Name = L"button_maxByTime";
			this->button_maxByTime->Size = System::Drawing::Size(203, 31);
			this->button_maxByTime->TabIndex = 39;
			this->button_maxByTime->Text = L"Max by time";
			this->button_maxByTime->UseVisualStyleBackColor = true;
			this->button_maxByTime->Click += gcnew System::EventHandler(this, &LogForm::button_maxByTime_Click);
			// 
			// button_DeleteTransaction
			// 
			this->button_DeleteTransaction->Location = System::Drawing::Point(596, 7);
			this->button_DeleteTransaction->Margin = System::Windows::Forms::Padding(4);
			this->button_DeleteTransaction->Name = L"button_DeleteTransaction";
			this->button_DeleteTransaction->Size = System::Drawing::Size(100, 28);
			this->button_DeleteTransaction->TabIndex = 40;
			this->button_DeleteTransaction->Text = L"Del trans";
			this->button_DeleteTransaction->UseVisualStyleBackColor = true;
			this->button_DeleteTransaction->Click += gcnew System::EventHandler(this, &LogForm::button_DeleteTransaction_Click);
			// 
			// button_DeleteCategory
			// 
			this->button_DeleteCategory->Location = System::Drawing::Point(696, 7);
			this->button_DeleteCategory->Margin = System::Windows::Forms::Padding(4);
			this->button_DeleteCategory->Name = L"button_DeleteCategory";
			this->button_DeleteCategory->Size = System::Drawing::Size(100, 28);
			this->button_DeleteCategory->TabIndex = 42;
			this->button_DeleteCategory->Text = L"Del cat";
			this->button_DeleteCategory->UseVisualStyleBackColor = true;
			this->button_DeleteCategory->Click += gcnew System::EventHandler(this, &LogForm::button_DeleteCategory_Click);
			// 
			// textBox_idToDel
			// 
			this->textBox_idToDel->Location = System::Drawing::Point(596, 43);
			this->textBox_idToDel->Margin = System::Windows::Forms::Padding(4);
			this->textBox_idToDel->Name = L"textBox_idToDel";
			this->textBox_idToDel->Size = System::Drawing::Size(199, 22);
			this->textBox_idToDel->TabIndex = 43;
			this->textBox_idToDel->Text = L"Id";
			// 
			// button_selectForUpdatingCat
			// 
			this->button_selectForUpdatingCat->Location = System::Drawing::Point(696, 72);
			this->button_selectForUpdatingCat->Name = L"button_selectForUpdatingCat";
			this->button_selectForUpdatingCat->Size = System::Drawing::Size(99, 23);
			this->button_selectForUpdatingCat->TabIndex = 44;
			this->button_selectForUpdatingCat->Text = L"Sel cat";
			this->button_selectForUpdatingCat->UseVisualStyleBackColor = true;
			this->button_selectForUpdatingCat->Click += gcnew System::EventHandler(this, &LogForm::button_selectForUpdatingCat_Click);
			// 
			// button_selectForUpdatingTran
			// 
			this->button_selectForUpdatingTran->Location = System::Drawing::Point(591, 72);
			this->button_selectForUpdatingTran->Name = L"button_selectForUpdatingTran";
			this->button_selectForUpdatingTran->Size = System::Drawing::Size(99, 23);
			this->button_selectForUpdatingTran->TabIndex = 45;
			this->button_selectForUpdatingTran->Text = L"Sel tran";
			this->button_selectForUpdatingTran->UseVisualStyleBackColor = true;
			this->button_selectForUpdatingTran->Click += gcnew System::EventHandler(this, &LogForm::button_selectForUpdatingTran_Click);
			// 
			// textBox_updatingName
			// 
			this->textBox_updatingName->Location = System::Drawing::Point(591, 101);
			this->textBox_updatingName->Name = L"textBox_updatingName";
			this->textBox_updatingName->Size = System::Drawing::Size(204, 22);
			this->textBox_updatingName->TabIndex = 46;
			this->textBox_updatingName->Text = L"Name";
			// 
			// textBox_updatingAmount
			// 
			this->textBox_updatingAmount->Location = System::Drawing::Point(592, 129);
			this->textBox_updatingAmount->Name = L"textBox_updatingAmount";
			this->textBox_updatingAmount->Size = System::Drawing::Size(204, 22);
			this->textBox_updatingAmount->TabIndex = 47;
			this->textBox_updatingAmount->Text = L"Amount";
			// 
			// textBox_updatingCategoryId
			// 
			this->textBox_updatingCategoryId->Location = System::Drawing::Point(591, 157);
			this->textBox_updatingCategoryId->Name = L"textBox_updatingCategoryId";
			this->textBox_updatingCategoryId->Size = System::Drawing::Size(204, 22);
			this->textBox_updatingCategoryId->TabIndex = 48;
			this->textBox_updatingCategoryId->Text = L"Cat id";
			// 
			// button_updateTransaction
			// 
			this->button_updateTransaction->Location = System::Drawing::Point(591, 186);
			this->button_updateTransaction->Name = L"button_updateTransaction";
			this->button_updateTransaction->Size = System::Drawing::Size(99, 23);
			this->button_updateTransaction->TabIndex = 50;
			this->button_updateTransaction->Text = L"Upd tran";
			this->button_updateTransaction->UseVisualStyleBackColor = true;
			this->button_updateTransaction->Click += gcnew System::EventHandler(this, &LogForm::button_updateTransaction_Click);
			// 
			// button_updateCategoty
			// 
			this->button_updateCategoty->Location = System::Drawing::Point(696, 186);
			this->button_updateCategoty->Name = L"button_updateCategoty";
			this->button_updateCategoty->Size = System::Drawing::Size(99, 23);
			this->button_updateCategoty->TabIndex = 49;
			this->button_updateCategoty->Text = L"Upd cat";
			this->button_updateCategoty->UseVisualStyleBackColor = true;
			this->button_updateCategoty->Click += gcnew System::EventHandler(this, &LogForm::button_updateCategoty_Click);
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1029, 441);
			this->Controls->Add(this->button_updateTransaction);
			this->Controls->Add(this->button_updateCategoty);
			this->Controls->Add(this->textBox_updatingCategoryId);
			this->Controls->Add(this->textBox_updatingAmount);
			this->Controls->Add(this->textBox_updatingName);
			this->Controls->Add(this->button_selectForUpdatingTran);
			this->Controls->Add(this->button_selectForUpdatingCat);
			this->Controls->Add(this->textBox_idToDel);
			this->Controls->Add(this->button_DeleteCategory);
			this->Controls->Add(this->button_DeleteTransaction);
			this->Controls->Add(this->button_maxByTime);
			this->Controls->Add(this->dateTimePickerEnd);
			this->Controls->Add(this->dateTimePickerStart);
			this->Controls->Add(this->button_groupByCategory);
			this->Controls->Add(this->button_orderByAmount);
			this->Controls->Add(this->button_orderByCategory);
			this->Controls->Add(this->button_orderByDate);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
		try {
			isLoggedIn = log(login, password, &b);
			balannce = b;
		}
		catch (const UserNotFoundException& e) {
			
			isLoggedIn = false;
			MessageBox::Show(marshal_as<String^>(e.what()));
		}
		catch (...){
			
			isLoggedIn = false;
			MessageBox::Show("An error occurred while trying to log in.");
		}
		
		
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
private: System::Void button_orderByDate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	DISPLAY->Items->Clear();
	String^ result = showTransactions(login, "DATE_OF_TRANSACTION");
	String^ row = "";
	for (int i = 0; i < result->Length; i++) {
		row += result[i];
		if (result[i] == '|') {
			DISPLAY->Items->Add(row);
			row = "";
		}
	}
}
private: System::Void button_orderByCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	DISPLAY->Items->Clear();
	String^ result = showTransactions(login, "CAREGORY_ID");
	String^ row = "";
	for (int i = 0; i < result->Length; i++) {
		row += result[i];
		if (result[i] == '|') {
			DISPLAY->Items->Add(row);
			row = "";
		}
	}
}
private: System::Void button_orderByAmount_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	DISPLAY->Items->Clear();
	String^ result = showTransactions(login, "AMOUNT");
	String^ row = "";
	for (int i = 0; i < result->Length; i++) {
		row += result[i];
		if (result[i] == '|') {
			DISPLAY->Items->Add(row);
			row = "";
		}
	}
}
private: System::Void button_groupByCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	DISPLAY->Items->Clear();
	String^ result = showTransactionsGroupedBy(login, "CAREGORY_ID");
	String^ row = "";
	for (int i = 0; i < result->Length; i++) {
		row += result[i];
		if (result[i] == '|') {
			DISPLAY->Items->Add(row);
			row = "";
		}
	}
}
private: System::Void button_maxByTime_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	String^ sDate = dateTimePickerStart->Value.ToString("yyyy-MM-dd");
	String^ eDate = dateTimePickerEnd->Value.ToString("yyyy-MM-dd");
	DISPLAY->Items->Clear();
	String^ result = showTransactionsMaxByDate(login, sDate, eDate);
	String^ row = "";
	for (int i = 0; i < result->Length; i++) {
		row += result[i];
		if (result[i] == '|') {
			DISPLAY->Items->Add(row);
			row = "";
		}
	}
}
private: System::Void button_DeleteTransaction_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	try {
		int Tranid = Int32::Parse(textBox_idToDel->Text);
		deleteTransaction(login, Tranid);
	}
	catch (...) {
	}
}
private: System::Void button_DeleteCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	try {
		int catId = Int32::Parse(textBox_idToDel->Text);
		deleteCategory(login, catId);
	}
	catch (...) {
	}
}
private: System::Void button_selectForUpdatingTran_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	try {
		int tranId = Int32::Parse(textBox_idToDel->Text);
		textBox_updatingName->Text = getTransactionName(tranId, login);
		textBox_updatingAmount->Text = marshal_as<String^>(std::to_string(getTransactionAmount(tranId, login)));
		textBox_updatingCategoryId->Text = marshal_as<String^>(std::to_string(getTransactionCategoryId(tranId, login)));
	}
	catch (...) {
	}
}
private: System::Void button_updateTransaction_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	try {
		int tranId = Int32::Parse(textBox_idToDel->Text);
		String^ name = textBox_updatingName->Text;
		double amount = Double::Parse(textBox_updatingAmount->Text, CultureInfo::InvariantCulture);
		int catId = Int32::Parse(textBox_updatingCategoryId->Text);
		updateTransaction(login, tranId, name, amount, catId);
	}
	catch (...) {
	}
}
private: System::Void button_selectForUpdatingCat_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	try {
		int tranId = Int32::Parse(textBox_idToDel->Text);
		textBox_updatingName->Text = getCategoryName(tranId, login);
	}
	catch (...) {
	}
}
private: System::Void button_updateCategoty_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isLoggedIn) return;
	try {
		int catId = Int32::Parse(textBox_idToDel->Text);
		String^ name = textBox_updatingName->Text;
		updateCategory(login, catId, name);
	}
	catch (...) {}
}
};
}
