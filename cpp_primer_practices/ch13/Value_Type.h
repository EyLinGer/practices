#ifndef __VALUE_TYPE_H
#define __VALUE_TYPE_H
class Value_Type
{
private:
    int *ptr;
    int val;
public:
    Value_Type(const int &p, int i);
    Value_Type(const Value_Type &orig);
    Value_Type &operator=(const Value_Type &rhs);
    ~Value_Type();
};

#endif