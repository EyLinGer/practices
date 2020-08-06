#include "HasPtr.h"
HasPtr::HasPtr(int *p, int i) : ptr(p), val(i) {}

inline int *HasPtr::get_ptr() const
{
    return ptr;
}

inline int HasPtr::get_int() const
{
    return val;
}

inline void HasPtr::set_ptr(int *p)
{
    ptr = p;
}

inline void HasPtr::set_int(int i)
{
    val = i;
}

inline int HasPtr::get_ptr_val() const
{
    return *ptr;
}

void HasPtr::set_ptr_val(int i) const
{
    *ptr = i;
}