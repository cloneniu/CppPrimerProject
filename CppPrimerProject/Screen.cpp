#include "Screen.h"
void Screen::some_member() const {
	++access_ctr;
}

size_t Screen::fGiveSomeMember() const {
	return access_ctr;
}

inline
Screen &Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const {
	pos row = r * width;
	return contents[row + c];
}
