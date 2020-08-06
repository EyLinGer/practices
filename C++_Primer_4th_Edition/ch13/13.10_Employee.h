#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
#include <string>
class Employee
{
private:
    std::string _name;
    unsigned int _id;
    static unsigned int _new_id;
public:
    Employee(/* args */):_name(""), _id(_new_id++){};
    Employee(const std::string &name);
    unsigned int get_id();
};
#endif