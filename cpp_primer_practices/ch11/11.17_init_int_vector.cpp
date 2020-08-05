#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main(int argc, char const *argv[])
{
    std::istream_iterator<int> cin_it(std::cin), eos;
    std::vector<int> ivec(cin_it, eos);

    std::ostream_iterator<int> cout_it(std::cout, " ");
    std::copy(ivec.begin(), ivec.end(), cout_it);
    return 0;
}
