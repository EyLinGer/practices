#include <string>
class Person
{
private:
    std::string _addr;
    std::string _name;
public:
    Person(const std::string &name, const std::string &addr);
    ~Person();
    const std::string & get_name() const;
    const std::string & get_addr() const;
};


