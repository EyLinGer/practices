#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::ifstream &open_file(std::ifstream &in, const std::string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

int read_file(std::ifstream &in, const std::string &file)
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
            std::cout << s << std::endl;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    std::ifstream input;
    std::vector<std::string> files;
    std::string file;
    while (std::cin >> file)
    {
        files.push_back(file);
    }

    std::vector<std::string>::const_iterator it = files.begin();
    while (it != files.end())
    {
        open_file(input, it->c_str());
        read_file(input, it->c_str());
        ++it;
    }

    return 0;
}
