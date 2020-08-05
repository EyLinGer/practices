#ifndef __SCRPTR_H
#define __SCRPTR_H
#include <stddef.h>
#include "ScreenPtr.h"
class ScrPtr
{
private:
    friend class ScreenPtr;
    size_t use;
    Screen *sp;
    ScrPtr(Screen *p) : sp(p), use(1){};
    ~ScrPtr() { delete sp; }
};
#endif