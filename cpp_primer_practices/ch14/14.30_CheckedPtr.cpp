#include <iostream>
#include <stdexcept>
#include "14.30_CheckedPtr.h"
CheckedPtr::CheckedPtr(Screen *b, Screen *e) : beg(b), end(e), curr(b)
{
}

CheckedPtr &CheckedPtr::operator++()
{
    if (curr == end)
    {
        throw std::out_of_range("increment past the end of CheckedPtr");
    }
    ++curr;
    return *this;
}

CheckedPtr &CheckedPtr::operator--()
{
    if (curr == beg)
    {
        throw std::out_of_range("decrement past the beginning of CheckedPtr");
    }
    --curr;
    return *this;
}

CheckedPtr CheckedPtr::operator++(int)
{
    CheckedPtr ret(*this);
    ++*this;
    return ret;
}
CheckedPtr CheckedPtr::operator--(int)
{
    CheckedPtr ret(*this);
    --*this;
    return ret;
}

Screen *CheckedPtr::operator[](const size_t index)
{
    if ((beg + index) != end)
    {
        return beg + index;
    }
    return end;
}

Screen *CheckedPtr::operator->()
{
    return curr;
}

Screen &CheckedPtr::operator*()
{
    return *curr;
}
