#ifndef __1430_CHECKEDPTR_H
#define __1430_CHECKEDPTR_H
#include <iostream>
#include "../ch12/Screen.h"
class CheckedPtr
{
private:
    Screen *beg;
    Screen *end;
    Screen *curr;

public:
    // no default constructor;CheckedPtrs must be bound to an object
    CheckedPtr(Screen *b, Screen *e);
    // prefix type
    CheckedPtr &operator++();
    CheckedPtr &operator--();
    // postfix type
    CheckedPtr operator++(int);
    CheckedPtr operator--(int);

    Screen *operator[](const size_t index);

    Screen *operator->();
    Screen &operator*();

};

#endif