#ifndef __CONDITIONOBJ_H
#define __CONDITIONOBJ_H
struct ConditionObj
{
    int operator()(int con1, int con2, int con3)
    {
        if(con1 == 0)
        {
            return con2;
        }
        else
        {
            return con3;
        }
    }
};

#endif