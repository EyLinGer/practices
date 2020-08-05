#include "Value_Type.h"
Value_Type::Value_Type(const int &p, int i) : ptr(new int(p)), val(i)
{
}

Value_Type::Value_Type(const Value_Type &orig) : ptr(new int(*orig.ptr)), val(orig.val)
{
}

Value_Type &Value_Type::operator=(const Value_Type &rhs)
{
    *ptr = *rhs.ptr;
    val = rhs.val;
    return *this;
}

Value_Type::~Value_Type()
{
    delete ptr;
}