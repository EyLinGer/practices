#ifndef __FOO_H
#define __FOO_H
#include "ScreenPtr.h"
class Foo
{
private:
    ScreenPtr *psp;

public:
    Foo(Screen *p);
    ScreenPtr *operator->();
    const ScreenPtr *operator->() const;
    ~Foo();
};
#endif