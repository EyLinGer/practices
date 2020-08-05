#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "GT_cls.h"
#include "14.35_RANGE_cls.h"
int main(void)
{
    std::string word;
    std::vector<std::string> words;
    std::string line("--------------------");
    std::string::size_type low = 1;
    std::string::size_type high = 9;
    std::string::size_type bound = 10;
    while (std::cin >> word)
    {
        words.push_back(word);
    }

    std::cout << std::endl
              << line << std::endl;

    std::cout << std::count_if(words.begin(), words.end(), RANGE_cls(low, high))
              << " words's length are between " << low << " to " << high << " characters" << std::endl;
    std::cout << line << std::endl;

    std::cout << std::endl
              << line << std::endl;

    std::cout << std::count_if(words.begin(), words.end(), GT_cls(bound))
                  << " words " << bound << " characters or longer" << std::endl;
    std::cout << line << std::endl;

    return 0;
}
