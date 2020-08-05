#include<string>
#include<list>
#include<map>
#include<vector>
#include<utility>
#include<iostream>
#include<fstream>
#include<sstream>
#include<error.h>

std::ifstream &open_file(std::ifstream &in, const std::string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

int main(int argc, char const *argv[])
{
    std::map<std::string, std::string> trans_map;
    std::string key, value;
    if(argc != 3)
    {
        throw  std::runtime_error("wrong number of arguments");
    }
    else
    {
        std::ifstream map_file;
        if(!open_file(map_file, argv[1]))
        {
            throw std::runtime_error("no transformation file");
        }
        else
        {
            while(map_file >> key >> value)
            {
                trans_map.insert(std::make_pair(key,value));
            }
        }
        std::ifstream input;
        if(!open_file(input, argv[2]))
        {
            throw std::runtime_error("no input file");
        }
        else
        {
            std::string line;
            while(getline(input, line))
            {
                std::istringstream stream(line);
                std::string word;
                bool firstword = true;
                while(stream >> word)
                {
                    std::map<std::string, std::string>::const_iterator map_it = 
                        trans_map.find(word);
                    if(map_it != trans_map.end())
                    {
                        word = map_it->second;
                    }

                    if(firstword)
                    {
                        firstword = false;
                    }

                    else
                    {
                        std::cout << " ";
                    }
                    std::cout << word;
                }
                std::cout << std::endl;
            }
        }
    }
    
    return 0;
}
