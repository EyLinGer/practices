#include "SmartPtr.h"
SmartPtr::SmartPtr(int *p, int i) : ptr(new U_Ptr(p)), val(i)
{
    ;
}

SmartPtr::SmartPtr(const SmartPtr &orig) : ptr(orig.ptr), val(orig.val)
{
    ++ptr->use;
}

SmartPtr &SmartPtr::operator=(const SmartPtr &rhs)
{
    ++rhs.ptr->use; // increment use count on rhs first
    if (--ptr->use == 0)
    {
        delete ptr; // if use count goes to zero one this object, delete it
    }
    ptr = rhs.ptr; // copy the U_Ptr object
    val = rhs.val; // copy the int member
    return *this;
}

SmartPtr::~SmartPtr()
{
    if (--ptr->use == 0)
    {
        delete ptr;
    }
}

inline int *SmartPtr::get_ptr() const
{
    return ptr->ip;
}
inline int SmartPtr::get_int() const
{
    return val;
}

inline void SmartPtr::set_ptr(int *p)
{
    ptr->ip = p;
}
inline void SmartPtr::set_int(int i)
{
    val = i;
}

inline int SmartPtr::get_ptr_val() const
{
    return *ptr->ip;
}
inline void SmartPtr::set_ptr_val(int i)
{
    *ptr->ip =i;
}