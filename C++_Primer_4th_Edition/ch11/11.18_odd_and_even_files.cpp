#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
int main(int argc, char const *argv[])
{
    std::istream_iterator<int> cin_it(std::cin), eos;
    std::vector<int> ivec(cin_it, eos);

    std::ofstream odd("odd");
    std::ofstream even("even");

    std::ostream_iterator<int> odd_it(odd, " ");
    std::ostream_iterator<int> even_it(even, " ");

    for(std::vector<int>::const_iterator it = ivec.begin();
        it != ivec.end(); ++it)
        {
            if((*it % 2) == 0)
            {
                *even_it++ = *it;
            }
            else
            {
                *odd_it++ = *it;
            }
        }
    return 0;
}
