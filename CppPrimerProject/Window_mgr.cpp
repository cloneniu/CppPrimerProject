#ifndef SCREEN
#include "Screen.h"
#endif
#include "Window_mgr.h"

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::fPushNew(Screen newItem) {
    screens.push_back(newItem);
    return screens.size();
}

const Screen &Window_mgr::fGetItem(const ScreenIndex i) const {
	return screens[i];
}
