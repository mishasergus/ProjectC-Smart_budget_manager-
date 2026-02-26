#include "API.h"
#include <string>
#include <iostream>
#include "D:/ITSTEP/C++/ProjectC++(Smart_budget_manager)/ProjectC++(Smart_budget_manager)/sqlite3/sqlite3.h"
#include "UserClass.h"






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
void DbMethods::createUsersTable(sqlite3* db) {
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
}
void DbMethods::addUser(sqlite3* db, User* user) {
	std::string sql = "INSERT INTO USERS (USERNAME, PASSWORD, EMAIL, ADRESS, BALANCE) VALUES ('" +
		username + "', '" + user->getPassword() + "', '" + user->getEmail() + "', '" + adress + "', " + std::to_string(balance) + ");";
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
}

