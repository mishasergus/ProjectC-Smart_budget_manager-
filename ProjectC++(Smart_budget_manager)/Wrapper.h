#pragma once
#include "sqlite3/sqlite3.h"
#include "API.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "UserClass.h"
#include <chrono>

using namespace System;
using namespace msclr::interop;
//isCategoryExists
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
String^ showTransactions(String^ login, std::string orderBy = "ID") {
	return marshal_as<String^>(DbMethods::getTransactions(marshal_as<std::string>(login), orderBy));
}
String^ showTransactionsGroupedBy(String^ login, std::string orderBygroupBy) {
	return marshal_as<String^>(DbMethods::getTransactionsGroupBy(marshal_as<std::string>(login), orderBygroupBy));
}
String^ showTransactionsMaxByDate(String^ login, String^ sDate, String^ eDate) {
	return marshal_as<String^>(DbMethods::getTransactionsByDate(marshal_as<std::string>(login), marshal_as<std::string>(sDate), marshal_as<std::string>(eDate)));
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
	std::string login1 = marshal_as<std::string>(login);
	if (!DbMethods::isCategoryExists(login1, catId)) return;
	std::string transName1 = marshal_as<std::string>(transName);
	int id = DbMethods::getUserId(login1);
	System::DateTime today = System::DateTime::Now;
	std::string year = marshal_as<std::string>(today.ToString("yyyy"));
	std::string month = marshal_as<std::string>(today.ToString("MM"));
	std::string day = marshal_as<std::string>(today.ToString("dd"));
	Transactoin* transaction = new Transactoin(transName1, transAmount, catId, id, year, month, day);
	DbMethods::addTransaction(transaction);
	DbMethods::updateBalance(login1, transAmount);
}
void deleteTransaction(String^ login, int Tranid) {
	std::string login1 = marshal_as<std::string>(login);
	DbMethods::updateBalance(login1, -DbMethods::getTransactionAmount(login1, Tranid));
	DbMethods::deleteTransaction(login1, Tranid);

}
void deleteCategory(String^ login, int catId) {
	std::string login1 = marshal_as<std::string>(login);
	DbMethods::updateBalance(login1, -DbMethods::getSumAmountByCategoryId(catId));
	DbMethods::deleteTransactionByCategoryId(catId);
	DbMethods::deleteCategory(login1, catId);
}
double getBalance(String^ login) {
	return DbMethods::getBalance(marshal_as<std::string>(login));
}
int getTransactionCategoryId(int id, String^ login) {
	std::string login1 = marshal_as<std::string>(login);
	return DbMethods::getTransactionCategoryId(login1, id);
}
double getTransactionAmount(int id, String^ login) {
	std::string login1 = marshal_as<std::string>(login);
	return DbMethods::getTransactionAmount(login1, id);
}
String^ getTransactionName(int id, String^ login) {
	std::string login1 = marshal_as<std::string>(login);
	return marshal_as<String^>(DbMethods::getTransactionName(login1, id));
}
String^ getCategoryName(int id, String^ login) {
	std::string login1 = marshal_as<std::string>(login);
	return marshal_as<String^>(DbMethods::getCategoryName(login1, id));
}
void updateTransaction(String^ login, int id, String^ name, double amount, int categoryId) {
	std::string login1 = marshal_as<std::string>(login);
	std::string name1 = marshal_as<std::string>(name);
	DbMethods::updateBalance(login1, amount - DbMethods::getTransactionAmount(login1, id));
	DbMethods::updateTransaction(login1, id, name1, amount, categoryId);
}
void updateCategory(String^ login, int id, String^ name) {
	std::string login1 = marshal_as<std::string>(login);
	std::string name1 = marshal_as<std::string>(name);
	DbMethods::updateCategory(login1, id, name1);
}