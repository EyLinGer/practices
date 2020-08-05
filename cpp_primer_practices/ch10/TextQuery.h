#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <set>

class TextQuery
{
public:
    //typedef to make declarations easier
    typedef std::vector<std::string>::size_type line_no;
    /*interface:
     *  read_file bulids internal data structures for the given file
     *  run_query finds the given word and returns set of lines on which it appears
     *  text_line returns a requested line from the input file
     */
    void read_file(std::ifstream &is)
    {
        store_file(is);
        build_map();
    };
    std::set<line_no> run_query(const std::string &word) const;
    std::string text_line(line_no no) const;

private:
    void store_file(std::ifstream &in)
    {
        std::string line;
        while (getline(in, line))
        {
            lines_of_text.push_back(line);
        }
    } // store input file
    void build_map()
    {
        line_no no = 0;
        std::string alphabets("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
        for (std::vector<std::string>::const_iterator it = lines_of_text.begin();
             it != lines_of_text.end(); ++it)
        {
            std::string word;
            std::string::size_type beg = 0;
            std::string::size_type end = 0;
            while (true)
            {
                beg = it->find_first_of(alphabets, beg);
                end = it->find_first_not_of(alphabets, beg);
                if(beg == std::string::npos || end == std::string::npos)
                {
                    break;
                }
                word = it->substr(beg, end - beg);
                beg = end;
                ++end;
                word_map[word].insert(no);
            }
            ++no;
        }
    } // associated each word with a set of line numbers
    // remember the whole input file
    std::vector<std::string> lines_of_text;
    // map word to set of the lines on which it occurs
    std::map<std::string, std::set<line_no>> word_map;
};
