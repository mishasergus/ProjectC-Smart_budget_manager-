#pragma once
#include <iostream>
#include <string>
#include <fstream>

void logInf(std::string message) {
	std::ofstream logFile("log.txt", std::ios::app);
	if (logFile.is_open()) {
		logFile << message << std::endl;
		logFile.close();
	}
	else {
		std::cerr << "Unable to open log file." << std::endl;
	}
}