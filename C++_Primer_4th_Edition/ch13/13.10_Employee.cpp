#include "13.10_Employee.h"

unsigned int Employee::_new_id = 0;

Employee::Employee(const std::string &name)
{
    _name = name;
    _id = _new_id++;
}

unsigned int Employee::get_id()
{
    return _id;
}
