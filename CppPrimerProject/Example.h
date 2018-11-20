#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <vector>
class Example {
public:
	static double rate;
	static void initRate(double newRate);
	static constexpr int vecSize = 10;
	static std::vector<double> vec;
};

#endif
