#ifndef __ITEM_BASE_H
#define __ITEM_BASE_H
#include <string>
class Item_base
{
private:
    std::string isbn; // identifier for the item
protected:
    double price; // normal, undiscounted price
public:
    Item_base(const std::string &book = "", double sales_price = 0.0);
    std::string book() const;
    // returns total sales price for a specified number for items
    // derived class will override and apply different discount algorithms
    virtual double net_price(std::size_t n) const;
    virtual ~Item_base();
};
#endif