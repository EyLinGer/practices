#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> ivec;
    std::list<int> ilist;
    int x;
    while (std::cin >> x)
    {
        ilist.push_back(x);
    }

    std::unique_copy(ilist.begin(), ilist.end(),
                     std::back_inserter(ivec));

    for (std::vector<int>::const_iterator it = ivec.begin();
         it != ivec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
