#include "ScreenPtr.h"

ScreenPtr::ScreenPtr(Screen *p) : ptr(new ScrPtr(p))
{
}

ScreenPtr::ScreenPtr(const ScreenPtr &orig) : ptr(orig.ptr)
{
    ++ptr->use;
}

ScreenPtr::~ScreenPtr()
{
    if (--ptr->use == 0)
    {
        delete ptr;
    }
}

Screen &ScreenPtr::operator*()
{
    return *ptr->sp;
}

Screen *ScreenPtr::operator->()
{
    return ptr->sp;
}

const Screen &ScreenPtr::operator*() const
{
    return *ptr->sp;
}

const Screen *ScreenPtr::operator->() const
{
    return ptr->sp;
}


// 14.20
ScreenPtr &ScreenPtr::operator=(const ScreenPtr &rhs)
{
    if(--ptr->use == 0)
    {
        delete ptr;
    }
    ptr = rhs.ptr;
    return *this;
}

// 14.22
bool operator==(ScreenPtr &lhs, ScreenPtr &rhs)
{
    if(lhs.operator->() == rhs.operator->())
    {
        return true;
    }
    return false;
}
bool operator!=(ScreenPtr &lhs, ScreenPtr &rhs)
{
    return !operator==(lhs, rhs);
}