#include <iostream>
#include <fstream>
#include <string>
#include "TextQuery.h"

std::ifstream &open_file(std::ifstream &in, const std::string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

void print_results(const std::set<TextQuery::line_no> loc, const std::string &word,
                   const TextQuery tq)
{
    std::cout << word << " occurs " << loc.size() << " times" << std::endl;
    for (std::set<TextQuery::line_no>::const_iterator it = loc.begin();
         it != loc.end(); ++it)
    {
        std::cout << "(line " << *it << ")" << tq.text_line(*it) << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    std::ifstream infile;
    if (argc < 2 || !open_file(infile, argv[1]))
    {
        std::cerr << "No input file!" << std::endl;
        return EXIT_FAILURE;
    }
    TextQuery tq;
    tq.read_file(infile); // builds query map
    // iterate with the user:prompt for a word to find and print results
    // loop indefinitely;the loop exit is inside the wihle
    while (true)
    {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        std::cin >> s;
        // stop if hit eof on input or a 'q' is entered
        if (!std::cin || s == "q")
        {
            break;
        }
        std::set<TextQuery::line_no> loc = tq.run_query(s);
        //print count and ll occurrences, if any
        print_results(loc, s, tq);
    }
    return 0;
}
