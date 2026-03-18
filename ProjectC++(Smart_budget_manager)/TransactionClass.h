#pragma once
#include <string>
#include <vector>

class Transactoin {
private:
	std::string name;
	double amount;
	int categoryId;
	int userId;
	std::vector<std::string> date;
public:
	Transactoin(std::string name, double amount, int categoryId, int userId, std::string year, std::string mounth, std::string day)
		: name(name), amount(amount), categoryId(categoryId), userId(userId) {
		date.push_back(year);
		date.push_back(mounth);
		date.push_back(day);
	}
	std::string getName();
	double getAmount();
	int getCategoryId();
	int getUserId();
	std::string getDate();

};