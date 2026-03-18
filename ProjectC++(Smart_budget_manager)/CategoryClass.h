#pragma once

#include <string>

class Category {
private:
	std::string name;
	int userId;
public:
	Category(std::string name, int userId)
		: name(name), userId(userId) {
	}
	std::string getName();
	int getUserId();
};
