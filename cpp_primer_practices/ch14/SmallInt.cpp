#include"SmallInt.h"
#include<stdexcept>
SmallInt::SmallInt(int i = 0):val(i)
{
    if( i < 0 || i > 255)
    {
        throw std::out_of_range("Bad SmallInt initializer");
    }
}

SmallInt::operator int() const
{
    return val;
}