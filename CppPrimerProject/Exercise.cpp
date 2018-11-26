#include "Exercise.h"
#include <iostream>
#include <string>
#include <forward_list>

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

// page 352 exercise 9.28
void fInsertStringIntoForwardList(std::forward_list<std::string> &s, std::string loc, std::string ins) {
	std::forward_list<std::string>::iterator prev = s.before_begin();
	std::forward_list<std::string>::iterator curr = s.begin();
	while (curr != s.end()) {
		std::cout << "current element " << *curr << std::endl;
		if (*curr == loc) {
			std::cout << "find and insert" << std::endl;
			curr = s.insert_after(curr, ins);
			++prev;
			for (auto t: s) {
				std::cout << t + " ";
			}
			std::cout << std::endl;
			std::cout << "current position " << *curr << std::endl;
		} else {
			++curr;
			++prev;
		}
	}
	s.insert_after(prev, ins);
	for (auto t: s) {
		std::cout << t + " ";
	}
}
