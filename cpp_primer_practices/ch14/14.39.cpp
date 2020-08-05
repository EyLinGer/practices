#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
#include <string>
int main(void)
{
    std::string word;
    std::string::size_type target = 10;
    std::vector<std::string> words;
    std::vector<std::string::size_type> words_size;
    while (std::cin >> word)
    {
        words.push_back(word);
        words_size.push_back(word.size());
    }
    std::cin.clear();
    std::cout << std::count_if(words_size.begin(), words_size.end(), std::bind2nd(std::equal_to<std::string::size_type>(), target))
        << " words have " << target << " characters" << std::endl;
    return 0;
}
