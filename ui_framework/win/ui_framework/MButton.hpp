#ifndef __MButton_hpp__
#define __MButton_hpp__
#include "ui_framework/MWidget.hpp"
#include <functional>

typedef std::function<void(void)> ClickHandler;
class MButton : public MWidget
{
public:
    MButton(MWidget & parent, const char *label);
    void OnClick(ClickHandler f);
    ClickHandler HandleClick = [](){};
private:
    int id = 0;
};

#endif