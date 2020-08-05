#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
std::istream &myread(std::istream &in)
{
    std::string s;
    while (in >> s)
    {
        std::cout << s << std::endl;
    }
    return in;
}

std::ifstream &open_file(std::ifstream &in, const std::string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

int file_to_vector(std::ifstream &in, const std::string &file, std::vector<std::string> &svec)
{
    std::string s;
    if (!in)
    {
        std::cerr << "Open file: " << file.c_str() << " failed." << std::endl;
    }
    else
    {
        while (getline(in, s))
        {
            svec.push_back(s);
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    std::string file;
    std::vector<std::string> file_content;
    std::ifstream infile;

    std::cin >> file;

    open_file(infile, file);
    file_to_vector(infile, file, file_content);

    for (std::vector<std::string>::const_iterator it = file_content.begin();
         it != file_content.end(); ++it)
    {
        std::string word;
        std::istringstream in(*it);
        while (in >> word)
        {
            std::cout << word << std::endl;
        }
    }
    return 0;
}
