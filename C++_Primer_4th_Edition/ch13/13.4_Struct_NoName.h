#ifndef __STRUCT_NONAME_H
#define __STRUCT_NONAME_H
#include <string>
struct NoName
{
    NoName():pstring(new std::string), i(0), d(0){};
    NoName(const NoName &orig);
    NoName(const std::string &sval, int ival, double dval);
    NoName &operator=(const NoName &orig);
    int get_i();
    private:
        std::string *pstring;
        int i;
        double d;
};

#endif