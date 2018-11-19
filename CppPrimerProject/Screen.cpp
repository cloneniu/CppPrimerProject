#include "Screen.h"
void Screen::some_member() const {
	++access_ctr;
}

size_t Screen::fGiveSomeMember() const {
	return access_ctr;
}

