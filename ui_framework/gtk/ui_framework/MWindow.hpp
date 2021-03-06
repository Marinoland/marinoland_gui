#ifndef __MWindow_hpp__
#define __MWindow_hpp__
#include "ui_framework/MWidget.hpp"

class MWindow : public MWidget
{
public:
    MWindow(GtkApplication *app);
    void Show();
    void SetTitle(const char *title);
    void SetDimensions(const int w, const int h);
    virtual void AddChild(MWidget & child);
    virtual void GetClientRect(int & w, int & h);
private:
    GtkWidget *gtkcontainer;
};

#endif