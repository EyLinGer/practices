#ifndef __SCREENPTR_H
#define __SCREENPTR_H
#include "../ch12/Screen.h"
#include "ScrPtr.h"
/*
 * smart pointer:Users pass to a pointer to a dynamically allocated Screen, which
 *               is automatically destroyed when the last ScreenPtr goes away
 */
class ScreenPtr
{
private:
    ScrPtr *ptr;

public:
    // no default constructor:ScreenPtrs must be bound to an object
    ScreenPtr(Screen *p);
    // copy member and increment the use count
    ScreenPtr(const ScreenPtr &orig);
    ScreenPtr &operator=(const ScreenPtr &rhs);
    // if use count goes zero, delete the ScrPtr object
    ~ScreenPtr();
    Screen &operator*();
    Screen *operator->();

    const Screen &operator*() const;
    const Screen *operator->() const;

    friend bool operator==(ScreenPtr &lhs, ScreenPtr &rhs);
    friend bool operator!=(ScreenPtr &lhs, ScreenPtr &rhs);
};
bool operator==(ScreenPtr &lhs, ScreenPtr &rhs);
bool operator!=(ScreenPtr &lhs, ScreenPtr &rhs);
#endif