#include <iostream>
#include <algorithm>
#include <vector>
#include "14.34_EQ_cls.h"
int main(void)
{
    int x = 0;
    std::vector<int> ivec;
    std::cout<< ">";
    while (std::cin >> x)
    {
        ivec.push_back(x);
    }
    std::replace_if(ivec.begin(), ivec.end(), EQ_cls(1), 0);

    for(std::vector<int>::const_iterator it = ivec.begin(); it != ivec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
