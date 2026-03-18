#pragma once
#include <string>
#include "ShifrClass.h"

class User {
private:
	std::string username;
	std::string password;
	std::string email;
	std::string adress;
	double balance;
public:
	User(std::string username, std::string password, std::string email, std::string adress, double balance) {
		this->username = username;
		this->email = email;
		this->adress = adress;
		this->balance = balance;
		this->password = password;
		Shifr::shifr(this->password);
	}
	std::string getUsername();
	std::string getPassword();
	std::string getEmail();
	std::string getAdress();
	double getBalance();
};