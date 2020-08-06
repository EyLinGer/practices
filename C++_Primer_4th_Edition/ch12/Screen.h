#ifndef __SCREEN_H
#define __SCREEN_h
#include <string>
#include <iostream>
class Screen
{
public:
    typedef std::string::size_type index;
    //return character at the cursor or at a given position
    char get() const { return contents[cursor]; }
    char get(index ht, index wd) const;
    Screen &move(index x, index y);
    Screen &set(char c);
    Screen &set(index x, index y, char c);
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
    Screen();
    Screen(Screen::index h, Screen::index w, const std::string &c);
    ~Screen();

private:
    std::string contents;
    index height, width;
    index cursor;
    void do_display(std::ostream &os) const { os << contents; }
};
#endif