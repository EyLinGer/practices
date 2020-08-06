#include <iostream>
#include <iterator>
#include <vector>
#include <list>

int main(int argc, char const *argv[])
{
    std::vector<int> from;
    for(int i = 0; i < 10; ++i)
    {
        from.push_back(i);
    }

    std::list<int> to(from.rbegin() + 3, from.rbegin() + 8);
    
    std::ostream_iterator<int> cout_it(std::cout, " ");
    std::copy(to.begin(), to.end(), cout_it);
    std::cout << std::endl;
    return 0;
}
