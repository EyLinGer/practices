#include <iostream>
#include <string>
#include "../../ScreenPtr.h"

int main(void)
{
    Screen::index height = 10;
    Screen::index width = 10;
    std::string content = "Test for 14.22";
    Screen s(height, width, content);
    Screen *p = &s;
    ScreenPtr s1(p);
    ScreenPtr s2(s1);
    std::cout << (s2 == s1) << std::endl;
    return 0;
}

