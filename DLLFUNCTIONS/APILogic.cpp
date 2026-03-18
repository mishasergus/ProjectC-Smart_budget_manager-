#include "API.h"
#include <string>
#include <iostream>
#include "D:/ITSTEP/C++/ProjectC++(Smart_budget_manager)/ProjectC++(Smart_budget_manager)/sqlite3/sqlite3.h"
#include "UserClass.h"
#include "TransactionClass.h"
#include "ShifrClass.h"

bool DbMethods::isCategoryExists(int id) {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	bool isEx = false;
	std::string sql = "SELECT * FROM CATEGORIES "
		"WHERE ID = '" + std::to_string(id) + "';";
	if (sqlite3_exec(db, sql.c_str(), callbackIsAnyExist, &isEx, nullptr) == SQLITE_OK) {
	}
	sqlite3_close(db);
	return isEx;
}

bool DbMethods::isUserExist(std::string login) {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	bool isEx = false;
	std::string sql = "SELECT * FROM USERS "
		"WHERE EMAIL = '" + login + "';";
	if (sqlite3_exec(db, sql.c_str(), callbackIsAnyExist, &isEx, nullptr) == SQLITE_OK) {
	}
	sqlite3_close(db);
	return isEx;
}

bool DbMethods::isUserExist(std::string login, std::string password) {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string passwShifr = password;
	Shifr::shifr(passwShifr);
	bool isEx = false;
	std::string sql = "SELECT * FROM USERS "
		"WHERE EMAIL = '" + login + "' AND PASSWORD = '" + passwShifr + "';";
	if (sqlite3_exec(db, sql.c_str(), callbackIsAnyExist, &isEx, nullptr) == SQLITE_OK) {
	}
	sqlite3_close(db);
	return isEx;
}


int DbMethods::callbackShow(void* info, int size, char** arg, char** col_name) {
	for (int i = 0; i < size; i++) {
		std::cout << "[" << col_name[i] << "]";
		if (arg[i] != nullptr) {
			std::cout << arg[i];
		}
		else {
			std::cout << "NULL";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
int DbMethods::callbackGetInf(void* info, int size, char** arg, char** col_name) {
	std::string* inf = static_cast<std::string*>(info);
	for (int i = 0; i < size; i++) {
		*inf += "[";
		*inf += col_name[i];
		*inf += "]";
		if (arg[i] != nullptr) {
			*inf += arg[i];
		}
		else {
			*inf += "NULL";
		}
		*inf += "\n";
	}
	*inf += "|\n";
	return 0;
}
int DbMethods::callbackIsAnyExist(void* info, int size, char** arg, char** col_name) {
	bool* exists = static_cast<bool*>(info);
	if (size > 0) {
		*exists = true;
	}
	return 0;
}
int DbMethods::callbackGetBalance(void* info, int size, char** arg, char** col_name) {
	double* balance = static_cast<double*>(info);
	*balance = 0.0;
	if (size > 0 && arg[0] != nullptr) {
		*balance = std::stod(arg[0]);
	}
	return 0;
}
int DbMethods::callbackGetId(void* info, int size, char** arg, char** col_name) {
	int* id = static_cast<int*>(info);
	*id = 0;
	if (size > 0 && arg[0] != nullptr) {
		*id = std::stod(arg[0]);
	}
	return 0;
}
void DbMethods::createUsersTable() {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string sql = "CREATE TABLE IF NOT EXISTS USERS ("
		"ID INTEGER PRIMARY KEY AUTOINCREMENT,"
		"USERNAME TEXT NOT NULL,"
		"PASSWORD TEXT NOT NULL,"
		"EMAIL TEXT UNIQUE NOT NULL,"
		"ADRESS TEXT NOT NULL,"
		"BALANCE REAL NOT NULL);";
	char* errMsg = nullptr;
	if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg) == SQLITE_OK) {
		std::cout << "Users table created successfully." << std::endl;
	}
	else {
		if (errMsg != nullptr) {
			std::cerr << "Error creating users table: " << errMsg << std::endl;
			sqlite3_free(errMsg);
		}
	}
	sqlite3_close(db);
}
void DbMethods::createTransactionsTable() {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string sql = "CREATE TABLE IF NOT EXISTS TRANSACTIONS ("
		"ID INTEGER PRIMARY KEY AUTOINCREMENT,"
		"NAME TEXT NOT NULL,"
		"AMOUNT REAL NOT NULL,"
		"CAREGORY_ID INTEGER REFERENCES CATEGORIES(ID),"
		"USER_ID INTEGER REFERENCES USERS(ID),"
		"DATE_OF_TRANSACTION DATE NOT NULL);";
	char* errMsg = nullptr;
	if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg) == SQLITE_OK) {
		std::cout << "Transaction table created successfully." << std::endl;
	}
	else {
		if (errMsg != nullptr) {
			std::cerr << "Error creating transaction table: " << errMsg << std::endl;
			sqlite3_free(errMsg);
		}
	}
	sqlite3_close(db);
}
void DbMethods::createCategoriesTable() {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string sql = "CREATE TABLE IF NOT EXISTS CATEGORIES ("
		"ID INTEGER PRIMARY KEY AUTOINCREMENT,"
		"NAME TEXT UNIQUE NOT NULL,"
		"USER_ID INTEGER REFERENCES USERS(ID));";
	char* errMsg = nullptr;
	if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg) == SQLITE_OK) {
		std::cout << "Categories table created successfully." << std::endl;
	}
	else {
		if (errMsg != nullptr) {
			std::cerr << "Error creating categories table: " << errMsg << std::endl;
			sqlite3_free(errMsg);
		}
	}
	sqlite3_close(db);
}
void DbMethods::addUser(User* user) {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string sql = "INSERT INTO USERS (USERNAME, PASSWORD, EMAIL, ADRESS, BALANCE) VALUES ('" +
		user->getUsername() + "', '" + user->getPassword() + "', '" + user->getEmail() + "', '" + user->getAdress() + "', " + std::to_string(user->getBalance()) + ");";
	char* errMsg = nullptr;
	if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg) == SQLITE_OK) {
		std::cout << "User added successfully." << std::endl;
	}
	else {
		if (errMsg != nullptr) {
			std::cerr << "Error adding user: " << errMsg << std::endl;
			sqlite3_free(errMsg);
		}
	}
	sqlite3_close(db);
}
void DbMethods::addTransaction(Transactoin* transaction) {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string sql = "INSERT INTO TRANSACTIONS (NAME, AMOUNT, CAREGORY_ID, USER_ID, DATE_OF_TRANSACTION) VALUES ('" +
		transaction->getName() + "', '" + std::to_string(transaction->getAmount()) + "', '" + std::to_string(transaction->getCategoryId()) + "', '" + std::to_string(transaction->getUserId()) + "', '" + transaction->getDate() + "');";
	char* errMsg = nullptr;
	if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg) == SQLITE_OK) {
		std::cout << "Transaction added successfully." << std::endl;
	}
	else {
		if (errMsg != nullptr) {
			std::cerr << "Error adding transaction: " << errMsg << std::endl;
			sqlite3_free(errMsg);
		}
	}
	sqlite3_close(db);
}

void DbMethods::addCategory(Category* category) {
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string sql = "INSERT INTO CATEGORIES (NAME, USER_ID) VALUES ('" +
		category->getName() + "', '" + std::to_string(category->getUserId()) + "');";
	char* errMsg = nullptr;
	if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg) == SQLITE_OK) {
		std::cout << "Category added successfully." << std::endl;
	}
	else {
		if (errMsg != nullptr) {
			std::cerr << "Error adding category: " << errMsg << std::endl;
			sqlite3_free(errMsg);
		}
	}
	sqlite3_close(db);
}

int DbMethods::getUserId(std::string login) {
	if (!DbMethods::isUserExist(login)) {
		throw std::exception();
	}
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	int id;
	std::string sql = "SELECT ID FROM USERS WHERE EMAIL = '" + login + "';";
	if (sqlite3_exec(db, sql.c_str(), callbackGetId, &id, nullptr) == SQLITE_OK) {
	}
	sqlite3_close(db);
	return id;
}
double DbMethods::getBalance(std::string login) {
	if (!DbMethods::isUserExist(login)) {
		throw std::exception();
	}
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	double b;
	std::string sql = "SELECT BALANCE FROM USERS WHERE EMAIL = '" + login + "';";
	if (sqlite3_exec(db, sql.c_str(), callbackGetBalance, &b, nullptr) == SQLITE_OK) {
	}
	sqlite3_close(db);
	return b;
}

std::string DbMethods::getTransactions(std::string login) {
	int id;
	try {
		id = getUserId(login);
	}
	catch (...) {
		return "";
	}
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string inf;
	std::string sql = "SELECT * FROM TRANSACTIONS WHERE USER_ID = '" + std::to_string(id) + "';";
	if (sqlite3_exec(db, sql.c_str(), callbackGetInf, &inf, nullptr) == SQLITE_OK) {
	}
	sqlite3_close(db);
	return inf;
}
std::string DbMethods::getCategories(std::string login) {
	int id;
	try {
		id = getUserId(login);
	}
	catch (...) {
		return "";
	}
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string inf;
	std::string sql = "SELECT ID, NAME FROM CATEGORIES WHERE USER_ID = '" + std::to_string(id) + "';";
	if (sqlite3_exec(db, sql.c_str(), callbackGetInf, &inf, nullptr) == SQLITE_OK) {
	}
	sqlite3_close(db);
	return inf;
}

void DbMethods::updateBalance(std::string login, double change) {
	int id;
	try {
		id = getUserId(login);
	}
	catch (...) {
		return ;
	}
	sqlite3* db;
	if (sqlite3_open("SmartBudget.db", &db) == SQLITE_OK) {
		std::cout << "OK\n";
	}
	else
	{
		std::cout << "ERROR\n";
	}
	std::string sql = "UPDATE USERS SET BALANCE = BALANCE + "+ std::to_string(change) +" WHERE ID = " + std::to_string(id) + ";";
	if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
		std::cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
	}
	sqlite3_close(db);
}