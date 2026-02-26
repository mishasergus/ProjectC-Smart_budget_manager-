#pragma once
#include <string>

class User{
private:
	std::string username;
	std::string password;
	std::string email;
	std::string adress;
	double balance;
public:
	User(std::string username, std::string password, std::string email, std::string adress, double balance)
		: username(username), email(email), adress(adress), balance(balance) {
		this->password = password;
	}
	std::string getUsername();
	std::string getPassword();
	std::string getEmail();
	std::string getAdress();
	double getBalance();
};