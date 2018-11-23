#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

// page 314
std::istream &fE812(std::istream &cinOne);

#include <iostream>
#include <string>
#include <vector>
std::istream &fReadReturnIstream(std::istream &in);

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

bool valid(const std::string &num);
std::string format(const std::string &num);

class noDefault {
private:
	int k;
public:
	noDefault(int i) {
		k = i;
	}
};

// page 332 9.4
bool fFind(std::vector<int>::iterator beg, std::vector<int>::iterator end, int val);
std::vector<int>::iterator fFindIter(std::vector<int>::iterator beg, std::vector<int>::iterator end, int val);
#endif
