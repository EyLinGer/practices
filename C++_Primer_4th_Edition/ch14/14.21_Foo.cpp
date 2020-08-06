#include "14.21_Foo.h"
Foo::Foo(Screen *p) : psp(new ScreenPtr(p))
{
}

ScreenPtr *Foo::operator->()
{
    return psp;
}