#ifndef EXERCISE_H
#define EXERCISE_H
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
#endif
