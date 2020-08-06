#include <iostream>
#include <string>
#include <vector>
int main(int argc, char const *argv[])
{
    std::vector<std::string *> svec;
    std::string s;
    while (std::cin >> s)
    {
        std::string *ps = (std::string *)malloc(sizeof(std::string));
        *ps = s;
        svec.push_back(ps);
    }

    for (std::vector<std::string *>::iterator iter = svec.begin();
         iter != svec.end(); ++iter)
    {
        std::cout << **iter << ' ' << (*iter)->size() << std::endl;
    }
    return 0;
}
