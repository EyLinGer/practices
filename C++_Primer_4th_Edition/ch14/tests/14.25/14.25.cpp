#include <iostream>
#include "../../CheckedPtr.h"
void comp(CheckedPtr &lhs, CheckedPtr &rhs);
void show(CheckedPtr &cp1, CheckedPtr &cp2);

int main(int argc, char const *argv[])
{
    int nums1[10];
    int nums2[10];
    int nums3[10];
    int nums4[9];
    for (int i = 0; i < 10; ++i)
    {
        nums1[i] = nums2[i] = i;
    }
    CheckedPtr cp1(nums1, nums1 + 9);
    CheckedPtr cp2(nums2, nums2 + 9);
    comp(cp1, cp2);

    for (int i = 0; i < 10; ++i)
    {
        nums1[i] = i;
        nums2[i] = i + 1;
    }
    CheckedPtr cp3(nums1, nums1 + 9);
    CheckedPtr cp4(nums2, nums2 + 9);
    comp(cp3, cp4);

    for (int i = 0; i < 10; ++i)
    {
        nums3[i] = i;
    }

    for (int i = 0; i < 9; ++i)
    {
        nums4[i] = i;
    }

    CheckedPtr cp5(nums3, nums3 + 9);
    CheckedPtr cp6(nums4, nums4 + 8);
    comp(cp5, cp6);
    return 0;
}

void comp(CheckedPtr &lhs, CheckedPtr &rhs)
{
    std::cout << "----------" << std::endl;

    show(lhs, rhs);

    std::cout << "<:" << (lhs < rhs) << std::endl;
    std::cout << ">:" << (lhs > rhs) << std::endl;

    std::cout << "==:" << (lhs == rhs) << std::endl;
    std::cout << "!=:" << (lhs != rhs) << std::endl;
    std::cout << ">=:" << (lhs >= rhs) << std::endl;
    std::cout << "<=:" << (lhs <= rhs) << std::endl;
}

void show(CheckedPtr &cp1, CheckedPtr &cp2)
{
    std::cout << cp1 << std::endl;
    std::cout << cp2 << std::endl;
}