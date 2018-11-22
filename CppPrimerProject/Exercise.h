#ifndef EXERCISE_H
#define EXERCISE_H
<<<<<<< HEAD

#include <iostream>

// page 314
std::istream &fE812(std::istream &cinOne);

=======
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
>>>>>>> refs/remotes/origin/master
#endif
