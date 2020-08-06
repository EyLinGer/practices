#ifndef __CHECKEDPTR_H
#define __CHECKEDPTR_H
#include <iostream>
class CheckedPtr
{
private:
    int *beg;
    int *end;
    int *curr;

public:
    // no default constructor;CheckedPtrs must be bound to an object
    CheckedPtr(int *b, int *e);
    // prefix type
    CheckedPtr &operator++();
    CheckedPtr &operator--();
    // postfix type
    CheckedPtr operator++(int);
    CheckedPtr operator--(int);

    int *operator[](const size_t index);
    int &operator*();

    friend bool operator==(CheckedPtr &lhs, CheckedPtr &rhs);
    friend bool operator!=(CheckedPtr &lhs, CheckedPtr &rhs);
    friend bool operator<(CheckedPtr &lhs, CheckedPtr &rhs);
    friend bool operator>(CheckedPtr &lhs, CheckedPtr &rhs);
    friend bool operator<=(CheckedPtr &lhs, CheckedPtr &rhs);
    friend bool operator>=(CheckedPtr &lhs, CheckedPtr &rhs);

    friend int *operator+(CheckedPtr &lhs, int offset);
    friend int *operator-(CheckedPtr &lhs, int offset);

    friend std::ostream &operator<<(std::ostream &out, const CheckedPtr &cp);
};

bool operator==(CheckedPtr &lhs, CheckedPtr &rhs);
bool operator!=(CheckedPtr &lhs, CheckedPtr &rhs);
bool operator<(CheckedPtr &lhs, CheckedPtr &rhs);
bool operator>(CheckedPtr &lhs, CheckedPtr &rhs);
bool operator<=(CheckedPtr &lhs, CheckedPtr &rhs);
bool operator>=(CheckedPtr &lhs, CheckedPtr &rhs);
int *operator+(CheckedPtr &lhs, int offset);
int *operator-(CheckedPtr &lhs, int offset);
std::ostream &operator<<(std::ostream &out, const CheckedPtr &cp);

#endif