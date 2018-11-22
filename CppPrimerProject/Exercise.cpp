#include "Exercise.h"
#include <iostream>
#include <string>

// page 314
std::istream &fE812(std::istream &cinOne) {
	std::string strTemp("");
	while (!cinOne.eof()) {
		cinOne >> strTemp;
		std::cout << strTemp << std::endl;
		std::cout << "one loop" << std::endl;
	}
	// why eof inccur one loop?
	std::cout << "eof occur" << std::endl;
	cinOne.clear();
	return cinOne;
}
