#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>
int main(void)
{
    std::vector<int> ivec;
    int x;
    std::vector<std::string> svec;
    std::string s;
    std::multiplies<int> mul;

    while (std::cin >> x)
    {
        ivec.push_back(x);
    }

    std::cin.clear();

    while (std::cin >> s)
    {
        svec.push_back(s);
    }

    std::cout << std::count_if(ivec.begin(), ivec.end(), std::bind2nd(std::greater_equal<int>(), 1024))
              << " values greater than 1024" << std::endl;
    std::cout << std::count_if(svec.begin(), svec.end(), std::bind2nd(std::equal_to<std::string>(), "pooh"))
              << " words not equal to 'pooh'" << std::endl;
    for (std::vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it = mul(*it, 2);
    }

    for (std::vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
