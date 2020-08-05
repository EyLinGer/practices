#ifndef __HASPTR_H
#define __HASPTR_H
class HasPtr
{
private:
    int *ptr;
    int val;

public:
    // copy of the values we're given
    HasPtr(int *p, int i);
    // const members to return the value of the indicated data member
    int *get_ptr() const;
    int get_int() const;
    // non const member to change the indicated data member
    void set_ptr(int *p);
    void set_int(int i);
    // return or change the value pointed to, so ok for const objects
    int get_ptr_val() const;
    void set_ptr_val(int val) const;
};
#endif