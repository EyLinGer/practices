#ifndef __LIMITED_ITEM_H
#define __LIMITED_ITEM_H
#include "Item_base.h"
class Limited_item : public Item_base
{
private:
    std::size_t max_qty;
    double discount;

public:
    Limited_item(std::size_t max, double dsc, double sales_price);
    double net_price(std::size_t cnt) const;
    virtual ~Limited_item();
};

#endif