#include <string>
#include <vector>
#ifndef SCREEN
#include "Screen.h"
#endif

#define WINDOW_MGR
class Window_mgr {
  public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    ScreenIndex fPushNew(Screen newItem);
    const Screen &fGetItem(const ScreenIndex i) const;
  private:
    std::vector<Screen> screens{};
};
