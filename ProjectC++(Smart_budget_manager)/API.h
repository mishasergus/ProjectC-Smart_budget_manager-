#pragma once
#include <string>
#include "D:/ITSTEP/C++/ProjectC++(Smart_budget_manager)/ProjectC++(Smart_budget_manager)/sqlite3/sqlite3.h"
#include "UserClass.h"
#include "TransactionClass.h"
#include "CategoryClass.h"

#ifndef Methods_App
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif



class API DbMethods {
private:
	static int callbackShow(void* info, int size, char** arg, char** col_name);
	static int callbackIsAnyExist(void* info, int size, char** arg, char** col_name);
	static int callbackGetBalance(void* info, int size, char** arg, char** col_name);
	static int callbackGetInf(void* info, int size, char** arg, char** col_name);
	static int callbackGetId(void* info, int size, char** arg, char** col_name);
	static int callbackGetName(void* info, int size, char** arg, char** col_name);
public:
	static void updateTransaction(std::string login, int id, std::string name, double amount, int categoryId);
	static void updateCategory(std::string login, int id, std::string name);
	static double getSumAmountByCategoryId(int id);
	static void deleteTransactionByCategoryId(int id);
	static void deleteTransaction(std::string login, int id);
	static void deleteCategory(std::string login, int id);
	static bool isTransactionExist(std::string login, int id);
	static bool isUserExist(std::string login);
	static bool isUserExist(std::string login, std::string password);
	static bool isCategoryExists(std::string login, int id);
	static void createUsersTable();
	static void createTransactionsTable();
	static void createCategoriesTable();
	static void addUser(User* user);
	static void addTransaction(Transactoin* transaction);
	static void addCategory(Category* category);
	static int getUserId(std::string login);
	static double getBalance(std::string login);
	static std::string getTransactions(std::string login, std::string orderBy = "ID");
	static std::string getTransactionsGroupBy(std::string login, std::string groupBy);
	static std::string getTransactionsByDate(std::string login, std::string date1, std::string date2);
	static std::string getCategories(std::string login);
	static double getTransactionAmount(std::string login, int id);
	static int getTransactionCategoryId(std::string login, int id);
	static std::string getTransactionName(std::string login, int id);
	static std::string getCategoryName(std::string login, int id);
	static void updateBalance(std::string login, double change);
};