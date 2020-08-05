#include <iostream>
#include <bitset>
#include <stdexcept>
int main(int argc, char const *argv[])
{
    std::bitset<65> b;
    try
    {
        b.flip(); //如果没有把所有比特都设置为1则不会产生overflow_error
        b.to_ulong();
    }
    catch (std::overflow_error e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
