#include <iostream>
#include <string.h>

int main(int argc, char const *argv[])
{
    std::string s("ab2c3d7R4E6");
    std::string numerics("012345689");
    std::string alphabets("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
    std::string content("Hello world from EyLinGer");
    std::string::size_type pos = 0;

    std::cout << "Position of numerics in string object 's':";

    while((pos = s.find_first_of(numerics, pos)) != std::string::npos)
    {
        std::cout << pos << " ";
        ++pos;
    }
    std::cout << std::endl;

    std::cout << "Position of alphabets in string object 's':";
    pos = 0;

    while((pos = s.find_first_of(alphabets, pos)) != std::string::npos)
    {
        std::cout << pos << " ";
        ++pos;
    }
    std::cout << std::endl;

    //find all words in string object "content"
    std::cout << "Words in string object 'content':" << std::endl;
    std::string::size_type start = 0;
    std::string::size_type end = 0;

    while(start != std::string::npos)
    {
        start = content.find_first_of(alphabets, start);
        end = content.find_first_not_of(alphabets, start);

        std::string word;
        word = content.substr(start, end - start);
        std::cout << word << std::endl;


        start = end;
        ++end;
    }
    
    return 0; 
}
