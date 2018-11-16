#include <string>
class Screen {
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
	char get() const {
		return contents[cursor];
	}
	char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
	void some_member() const;
	size_t fGiveSomeMember() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr = 0;
};
