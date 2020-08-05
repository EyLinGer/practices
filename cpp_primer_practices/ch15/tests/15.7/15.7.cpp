#include<iostream>
#include"../../Item_base.h"
#include"../../15.7_Limited_item.h"

int main(void)
{
    std::size_t max = 10;
    double dsc = 0.2;
    double price = 20;
    std::size_t qty = 20;
    Limited_item li(max, dsc, price);
    std::cout << li.net_price(qty) << std::endl;
    return 0;
}
