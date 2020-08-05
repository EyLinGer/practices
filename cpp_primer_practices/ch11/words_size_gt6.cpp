#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>

bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

bool GT6(const std::string &s)
{
    return s.size() >= 6;
}

int main(int argc, char const *argv[])
{
    std::vector<std::string> story;
    std::vector<std::string> words;
    std::string line;
    while (getline(std::cin, line))
    {
        story.push_back(line);
    }

    for (std::vector<std::string>::const_iterator it = story.begin();
         it != story.end(); ++it)
    {
        std::stringstream _line(*it);
        std::string word;
        while (_line >> word)
        {
            words.push_back(word);
        }
    }

    std::stable_sort(words.begin(), words.end(), isShorter);
    std::vector<std::string>::iterator end_unique =
        std::unique(words.begin(), words.end());

    words.erase(end_unique, words.end());

    std::vector<int>::size_type wc = std::count_if(words.begin(), words.end(), GT6);
    std::cout << wc << std::endl;
    return 0;
}
