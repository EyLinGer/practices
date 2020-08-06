#include<iostream>
#include"../../14.7_CheckoutRecord.h"
int main(void)
{
    CheckoutRecord cr1;
    std::cout << (bool)cr1 << std::endl;
    std::cin >> cr1;
    std::cout << (bool)cr1 << std::endl;
    return 0;
}
