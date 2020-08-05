#include <iostream>
#include "../../CheckedPtr.h"

int main(int argc, char const *argv[])
{
    int nums1[10];
    for (int i = 0; i < 10; ++i)
    {
        nums1[i] = i;
    }
    CheckedPtr cp1(nums1, nums1 + 9);
    for (int i = 0; i < 10; ++i)
    {
        std::cout << *(cp1 + i) << std::endl;
    }
    return 0;
}
