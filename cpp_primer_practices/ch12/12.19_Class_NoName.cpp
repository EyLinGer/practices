#include <iostream>
#include <string>
#include <iterator>
class NoName
{
private:
    std::string *pstring;
    int ival;
    double dval;

public:
    NoName(/* void */) : pstring(NULL), ival(0), dval(0.0){};
    NoName(std::string *ps, int iv, double dv);
    ~NoName();
};

NoName::NoName(std::string *ps, int iv, double dv)
{
    pstring = ps;
    ival = iv;
    dval = dv;
}

NoName::~NoName()
{
}

