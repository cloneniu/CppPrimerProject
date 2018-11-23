#include "Example.h"
#include <vector>

double Example::rate = 5.6;

void Example::initRate(double newRate) {
	rate = newRate;
}

std::vector<double> Example::vec(10);

// page 332 9.4
bool fFind(std::vector<int>::iterator beg, std::vector<int>::iterator end, int val) {
	while (beg != end) {
		if (*beg == val) {
			return true;
		} else {
			++beg;
		}
	}
	return false;
}

// page 332 9.5
std::vector<int>::iterator fFindIter(std::vector<int>::iterator beg, std::vector<int>::iterator end, int val) {
	while (beg != end) {
		if (*beg == val) {
			return beg;
		} else {
			++beg;
		}
	}
	return end;
}
