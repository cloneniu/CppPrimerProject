#include "Exercise.h"
#include <string>
#include <iostream>

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
