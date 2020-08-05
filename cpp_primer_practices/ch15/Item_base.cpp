#include "Item_base.h"
Item_base::Item_base(const std::string &book, double sales_price) : isbn(book), price(sales_price)
{
}

Item_base::~Item_base()
{
}

std::string Item_base::book() const
{
    return isbn;
}

double Item_base::net_price(std::size_t n) const
{
    return n * price;
}