#include "15.7_Limited_item.h"
Limited_item::Limited_item(std::size_t max, double dsc, double sales_price) : max_qty(max), discount(dsc)
{
    price = sales_price;
}

Limited_item::~Limited_item()
{
}

double Limited_item::net_price(std::size_t cnt) const
{
    if (cnt <= max_qty && cnt >= 0)
    {
        return cnt * (1 - discount) * price;
    }
    else
    {
        return max_qty * (1 - discount) * price +
               (cnt - max_qty) * price;
    }
}