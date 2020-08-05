#include "Screen.h"

Screen::Screen()
{
    height = 0;
    width = 0;
    contents.assign("None");
    cursor = 0;
}


Screen::Screen(Screen::index h, Screen::index w, const std::string &c)
{
    height = h;
    width = w;
    contents = c;
    cursor = 0;
}

Screen::~Screen()
{
}

Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

Screen &Screen::move(index x, index y)
{
    index row = x * width;
    cursor = row + y;
    return *this;
}
Screen &Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

const Screen &Screen::display(std::ostream &os) const
{
    do_display(os);
    return *this;
}