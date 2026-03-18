#include "ShifrClass.h"
#include <string>

void Shifr::shifr(std::string& str) {
	for (char& c : str) {
		c += 1;
	}
}