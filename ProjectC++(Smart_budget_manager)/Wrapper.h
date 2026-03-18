#pragma once
#include "sqlite3/sqlite3.h"
#include "API.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "UserClass.h"
#include <chrono>

using namespace System;
using namespace msclr::interop;

void startAll() {
	DbMethods::createUsersTable();
	DbMethods::createCategoriesTable();
	DbMethods::createTransactionsTable();
}
bool log(String^ login, String^ password, double* balance) {
	std::string password1 = marshal_as<std::string>(password);
	std::string login1 = marshal_as<std::string>(login);
	if (!DbMethods::isUserExist(login1, password1)) return 0;
	*balance = DbMethods::getBalance(login1);
	std::cout << "YEAH\n";
	return 1;
}
bool signup(String^ login, String^ password, String^ name, String^ adress, double balance) {
	std::string password1 = marshal_as<std::string>(password);
	std::string login1 = marshal_as<std::string>(login);
	if (!DbMethods::isUserExist(login1)) {
		std::string name1 = marshal_as<std::string>(name);
		std::string adress1 = marshal_as<std::string>(adress);
		std::cout << "YEAH\n";
		User* user = new User(marshal_as<std::string>(name), password1, login1, adress1, balance);
		DbMethods::addUser(user);
		return 1;
	}
	return 0;
}
String^ showTransactions(String^ login) {
	return marshal_as<String^>(DbMethods::getTransactions(marshal_as<std::string>(login)));
}
void addCategory(String^ login, String^ categoryName) {
	std::string categoryName1 = marshal_as<std::string>(categoryName);
	std::string login1 = marshal_as<std::string>(login);
	int id = DbMethods::getUserId(login1);
	Category* category = new Category(categoryName1, id);
	DbMethods::addCategory(category);
}
String^ showCategories(String^ login) {
	return marshal_as<String^>(DbMethods::getCategories(marshal_as<std::string>(login)));
}
void addTransaction(String^ login, String^ transName, double transAmount, int catId) {
	if (!DbMethods::isCategoryExists(catId)) return;
	std::string transName1 = marshal_as<std::string>(transName);
	std::string login1 = marshal_as<std::string>(login);
	int id = DbMethods::getUserId(login1);
	System::DateTime today = System::DateTime::Now;
	std::string year = marshal_as<std::string>(today.ToString("yyyy"));
	std::string month = marshal_as<std::string>(today.ToString("MM"));
	std::string day = marshal_as<std::string>(today.ToString("dd"));
	Transactoin* transaction = new Transactoin(transName1, transAmount, catId, id, year, month, day);
	DbMethods::addTransaction(transaction);
	DbMethods::updateBalance(login1, transAmount);
}
