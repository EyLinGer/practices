#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
int main(int argc, char const *argv[])
{
    std::ostream_iterator<std::string>
        output(std::cout, "\n");
    std::ifstream in_file;
    in_file.open("./11.16_copy_file_content_to_cout.cpp");

    std::istream_iterator<std::string> in(in_file), eof;
    std::copy(in, eof, output);
    return 0;
}
