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

    friend std::istream &operator>>(std::istream &in, Sales_item &item);
    friend std::ostream &operator<<(std::ostream &out, const Sales_item &item);
    friend Sales_item operator+(Sales_item &lhs, const Sales_item &rhs);

public:
    Sales_item(/* void */) : isbn("0-00000-00000-0"), units_sold(0), revenue(0.0){};
    Sales_item(std::istream &in);
    const std::string &read_isbn() const;
    std::string &write_isbn(const std::string &t_isbn);
    bool same_isbn(const Sales_item &item) const;
    Sales_item &operator+=(const Sales_item &item);
    Sales_item &operator=(const std::string &t_isbn);
    // 14.40
    operator double() const;
    operator std::string() const;
};
#endif
