#include "Bulk_item.h"
inline Bulk_item::Bulk_item(std::size_t mq, double dsc) : min_qty(mq), discount(dsc)
{
}

Bulk_item::~Bulk_item()
{}

double Bulk_item::net_price(std::size_t cnt) const
{
    if(cnt >= min_qty)
    {
        return cnt * (1 - discount) * price;
    }
    else
    {
        return cnt * price;
    }
}

