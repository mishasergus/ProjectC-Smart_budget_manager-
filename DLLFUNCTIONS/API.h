#pragma once
#include <string>
#include "D:/ITSTEP/C++/ProjectC++(Smart_budget_manager)/ProjectC++(Smart_budget_manager)/sqlite3/sqlite3.h"
#include "UserClass.h"

#ifndef Methods_App
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif



class API DbMethods {
public:
	static int callbackShow(void* info, int size, char** arg, char** col_name);
	static void createUsersTable(sqlite3* db);
	static void addUser(sqlite3* db, User* user);
};