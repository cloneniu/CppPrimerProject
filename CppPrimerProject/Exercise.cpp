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

std::istream &fReadReturnIstream(std::istream &in) {
	std::string sTemp;
	while (in >> sTemp) {
		std::cout << sTemp << std::endl;
	}
	in.clear();
	return in;
}

bool valid(const std::string &num) {
	if (num[0] == '0') {
		return true;
	} else {
		return false;
	}
}

std::string format(const std::string &num) {
	return "k" + num;
}
