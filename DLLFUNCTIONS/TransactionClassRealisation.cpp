#include "TransactionClass.h"

std::string Transactoin::getName() {
	return name;
}
double Transactoin::getAmount() {
	return amount;
}
int Transactoin::getCategoryId() {
	return categoryId;
}
int Transactoin::getUserId() {
	return userId;
}
std::string Transactoin::getDate() {
	return date[0] + "-" + date[1] + "-" + date[2];
}
