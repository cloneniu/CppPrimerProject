#include "Example.h"
#include <vector>

double Example::rate = 5.6;

void Example::initRate(double newRate) {
	rate = newRate;
}

std::vector<double> Example::vec(10);
