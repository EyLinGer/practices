#include "13.4_Struct_NoName.h"

NoName::NoName(const NoName &orig)
{
    pstring = new std::string;
    *pstring = *(orig.pstring);
    i = orig.i;
    d = orig.d;
}

NoName::NoName(const std::string &sval, int ival, double dval)
{
    pstring = new std::string;
    *pstring = sval;
    i = ival;
    d = dval;
}

NoName &NoName::operator=(const NoName &orig)
{
    pstring = new std::string;
    *pstring = *(orig.pstring);
    i = 10;
    d = orig.d;
    return *this;
}

// Method for test
int NoName::get_i()
{
    return i;
}