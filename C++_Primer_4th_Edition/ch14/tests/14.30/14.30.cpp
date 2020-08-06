#include <iostream>
#include "../../14.30_CheckedPtr.h"

int main(int argc, char const *argv[])
{
    Screen screens[10];
    CheckedPtr cp(screens, screens + 9);
    for (int i = 0; i < 10; ++i)
    {
        char c = 'A' + i;
        cp[i]->set(c);
    }

    for (int i = 0; i < 10; ++i)
    {
        cp[i]->display(std::cout);
        std::cout << std::endl;
    }

    std::cout << "----------" << std::endl;

    for (int i = 0; i < 10; ++i, ++cp)
    {
        (*cp).display(std::cout);
        std::cout << std::endl;
    }
    return 0;
}
