#include "Screen.h"
void Screen::some_member() const {
	++access_ctr;
}

size_t Screen::fGiveSomeMember() const {
	return access_ctr;
}

void Screen::fPrintContents() const {
	for (pos posRow = 0; posRow < height; ++posRow) {
		for (pos posCol = 0; posCol < width; ++posCol) {
			std::cout << contents[posRow * width + posCol];
		}
		std::cout << std::endl;
	}
}

// page 283
Screen::pos Screen::size() const {
	return height * width;
}
