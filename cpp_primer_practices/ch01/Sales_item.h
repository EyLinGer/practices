#ifndef __SALES_ITEM_H
#define __SALES_ITEM_H
#include <iostream>
#include <string>

class Sales_item
{
private:
    /* data */
    std::string isbn;
    unsigned units_sold;
    double revenue;

public:
    Sales_item(/* void */):isbn("0-00000-00000-0"),units_sold(0), revenue(0.0){};
    Sales_item(std::istream &in);
    const std::string &read_isbn() const;
    std::string &write_isbn(const std::string &t_isbn);
    inline bool same_isbn(const Sales_item &item) const;
};
#endif
