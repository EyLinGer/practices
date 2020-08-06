#ifndef __SMALLINT_H
#define __SMALLINT_H
#include<cctype>
class SmallInt
{
private:
    std::size_t val;
public:
    SmallInt(int i = 0);
    operator int() const;
};

#endif