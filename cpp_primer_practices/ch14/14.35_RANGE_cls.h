#ifndef __1435_RANGE_CLS_H
#define __1435_RANGE_CLS_H
#include<string>
class RANGE_cls
{
private:
    std::string::size_type low;
    std::string::size_type high;

public:
    RANGE_cls(size_t l, size_t h):low(l), high(h){};
    bool operator()(const std::string &s)
    {
        if(s.size() >= low && s.size() <= high)
        {
            return true;
        }
        return false;
    }
};
#endif