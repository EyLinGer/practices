#include "Person.h"

Person::Person(const std::string &name, const std::string &addr)
{
    _name = name;
    _addr = addr;
}

Person::~Person()
{
}

const std::string & Person::get_name() const
{
    return _name;
}
const std::string & Person::get_addr() const
{
    return _addr;
}