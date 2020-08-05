#ifndef __U_PTR_H
#define __U_PTR_H
#include <cstddef>
#include "SmartPtr.h"
class U_Ptr
{
private:
    friend class SmartPtr;
    int *ip;
    size_t use;
    U_Ptr(int *p) : ip(p), use(1){};
    ~U_Ptr() { delete ip; }
};

#endif