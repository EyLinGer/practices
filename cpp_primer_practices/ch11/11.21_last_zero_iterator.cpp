#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
int main(int argc, char const *argv[])
{
    std::istream_iterator<int> cin_it(std::cin), eos;
    std::list<int> ilist(cin_it, eos);
    std::list<int>::reverse_iterator last_zero_it =
        std::find(ilist.rbegin(), ilist.rend(), 0);
    
    return 0;
}
