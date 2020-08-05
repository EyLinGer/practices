#include<iostream>
#include"../../14.31_ConditionObj.h"
int main(int argc, char const *argv[])
{
    ConditionObj conObj;
    std::cout << conObj(0, 1, 2) << std::endl;
    std::cout << conObj(1, 1, 2) << std::endl;
    return 0;
}
