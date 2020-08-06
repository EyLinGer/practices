#ifndef __1434_EQ_CLS_H
#define __1434_EQ_CLS_H
class EQ_cls
{
private:
    int target;

public:
    EQ_cls(int val) : target(val){};
    bool operator()(int val)
    {
        if (val == target)
        {
            return true;
        }
        return false;
    }
};
#endif