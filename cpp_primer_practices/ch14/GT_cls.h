#ifndef __GT_CLS_H
#define __GT_CLS_H
#include <string>
class GT_cls
{
private:
    std::string::size_type bound;
public:
    GT_cls(size_t val = 0):bound(val){};
    bool operator()(const std::string &s)
    {
        return s.size() >= bound;
    }
};

#endif