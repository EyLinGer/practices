#include <iostream>
#include <stdexcept>
#include "CheckedPtr.h"
CheckedPtr::CheckedPtr(int *b, int *e) : beg(b), end(e), curr(b)
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

// 14.23
int *CheckedPtr::operator[](const size_t index)
{
    if ((beg + index) != end)
    {
        return beg + index;
    }
    return end;
}

int &CheckedPtr::operator*()
{
    return *curr;
}

// 14.25
bool operator==(CheckedPtr &lhs, CheckedPtr &rhs)
{
    int *p = lhs.beg;
    int *q = rhs.beg;
    while (p != lhs.end && q != rhs.end)
    {
        if (*p != *q)
        {
            return false;
        }
        ++p;
        ++q;
    }
    if (p != lhs.end || q != rhs.end)
    {
        return false;
    }
    return true;
}
bool operator!=(CheckedPtr &lhs, CheckedPtr &rhs)
{
    return !operator==(lhs, rhs);
}
bool operator<(CheckedPtr &lhs, CheckedPtr &rhs)
{
    int *p = lhs.beg;
    int *q = rhs.beg;
    if (lhs == rhs)
    {
        return false;
    }
    while (p != lhs.end && q != rhs.end)
    {
        if (*p > *q)
        {
            return false;
        }
        ++p;
        ++q;
    }
    if (p != lhs.end && q == rhs.end)
    {
        return false;
    }
    return true;
}
bool operator>(CheckedPtr &lhs, CheckedPtr &rhs)
{
    if (lhs == rhs)
    {
        return false;
    }
    return !operator<(lhs, rhs);
}

// !(<=) = >
bool operator<=(CheckedPtr &lhs, CheckedPtr &rhs)
{
    return !operator>(lhs, rhs);
}
// !(>=) = <
bool operator>=(CheckedPtr &lhs, CheckedPtr &rhs)
{
    return !operator<(lhs, rhs);
}

int *operator+(CheckedPtr &lhs, int offset)
{
    if (lhs.curr + offset > lhs.end)
    {
        throw std::out_of_range("Try to visit element over end");
    }
    return lhs.curr + offset;
}

int *operator-(CheckedPtr &lhs, int offset)
{
    if (lhs.curr - offset < lhs.beg)
    {
        throw std::out_of_range("Try to visit element over begin");
    }
    return lhs.curr - offset;
}

// helper for 14.26
std::ostream &operator<<(std::ostream &out, const CheckedPtr &cp)
{
    int *p = cp.beg;
    while (p != cp.end)
    {
        out << *p << "\t";
        ++p;
    }
    return out;
}