#ifndef __BULK_ITEM_H
#define __BULK_ITEM_H
#include "Item_base.h"
// discount kicks in when a specified number of copies of same book are sold
// the discount is expressed as a fraction used to reduce the normal price
class Bulk_item : public Item_base
{
private:
    // redefines base version so as to implement bulk purchase discount policy
    std::size_t min_qty; // minimum purchase for discount to apply
    double discount; // fractional discount to apply
public:
    Bulk_item(std::size_t mq, double dsc);
    double net_price(std::size_t cnt) const;
    ~Bulk_item();
};
#endif