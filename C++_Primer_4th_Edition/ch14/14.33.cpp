#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "GT_cls.h"
int main(void)
{
    std::string word;
    std::vector<std::string> words;
    std::string line("--------------------");
    while (std::cin >> word)
    {
        words.push_back(word);
    }

    std::cout << std::endl
              << line << std::endl;
    for (std::string::size_type i = 0; i < 10; ++i)
    {
        std::cout << std::count_if(words.begin(), words.end(), GT_cls(i))
                  << " words " << i << " characters or longer" << std::endl;
    }
    std::cout << line  << std::endl;

    return 0;
}
