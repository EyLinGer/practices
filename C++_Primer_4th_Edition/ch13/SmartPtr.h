#ifndef __SMARTPTR_H
#define __SMARTPTR_H
#include "U_Ptr.h"
class SmartPtr
{
private:
    U_Ptr *ptr; // points to use-counted U_Ptr class
    int val;

public:
    // SmartPtr owns the pointer; p must have been dynamically allocated
    SmartPtr(int *p, int i);
    // copy memebers and increment the use count
    SmartPtr(const SmartPtr &orig);
    SmartPtr &operator=(const SmartPtr &rhs);
    ~SmartPtr();

    // accessors must change to fetch value from U_Ptr object
    int *get_ptr() const;
    int get_int() const;

    // change the appropriate data member
    void set_ptr(int *p);
    void set_int(int i);

    // return or change the value pointed to, so ok for const objects
    // Note:*ptr->ip is equivalent to *(ptr->ip)
    int get_ptr_val() const;
    void set_ptr_val(int i);
};

#endif