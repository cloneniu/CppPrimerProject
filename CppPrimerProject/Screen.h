#include <iostream>
#include <string>
#define SCREEN
class Screen {
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
	Screen &move(pos r, pos c);
	char get() const {
		return contents[cursor];
	}
	char get(pos ht, pos wd) const;
	void some_member() const;
	size_t fGiveSomeMember() const;
	Screen &set(char);
	Screen &set(pos, pos, char);
	friend class Window_mgr;
	void fPrintContents() const;
	// page 283
	pos size() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr = 0;
};

inline
Screen &Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

inline
char Screen::get(pos r, pos c) const {
	pos row = r * width;
	return contents[row + c];
}

inline
Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline
Screen &Screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}

