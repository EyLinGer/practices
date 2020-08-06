#ifndef __158_H
#define __158_H
#include<iostream>
#include<string>
struct base
{
    base(const std::string &name = "default name"):basename(name){};
    std::string name(){return basename;}
    virtual void print(std::ostream &os){ os << basename;}
    private:
        std::string basename;
};

struct derived : public base
{
    derived(int val):mem(val){};
    void print(std::ostream &os)
    {
        this->base::print(os);
        os << " "<< mem;
    }
    private:
        int mem;
};

#endif