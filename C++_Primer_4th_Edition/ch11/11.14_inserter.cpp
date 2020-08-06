#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
int main(int argc, char const *argv[])
{
    std::vector<int> ivec;
    std::list<int> ilist;
    int x;
    while (std::cin >> x)
    {
        ivec.push_back(x);
    }
    std::replace_copy(ivec.begin(), ivec.end(),
                      std::back_inserter(ilist), 1, 2);

    for (std::list<int>::const_iterator it = ilist.begin();
         it != ilist.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
