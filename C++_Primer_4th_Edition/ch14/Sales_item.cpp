#include <iostream>
#include <string>
#include "Sales_item.h"

const std::string &Sales_item::read_isbn() const
{
    return isbn;
}

std::string &Sales_item::write_isbn(const std::string &t_isbn)
{
    return isbn = t_isbn;
}

inline bool Sales_item::same_isbn(const Sales_item &item) const
{
    return isbn == item.isbn;
}

std::ostream &operator<<(std::ostream &out, const Sales_item &item)
{
    out << item.isbn << "\t" << item.units_sold << "\t"
        << item.revenue;
    return out;
}

std::istream &operator>>(std::istream &in, Sales_item &item)
{
    double price;
    in >> item.isbn >> item.units_sold >> price;
    // check that the inputs succeeded
    if (in)
    {
        item.revenue = item.units_sold * price;
    }
    else
    {
        item = Sales_item();
    }
    return in;
}

Sales_item &Sales_item::operator+=(const Sales_item &item)
{
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}

Sales_item operator+(Sales_item &lhs, const Sales_item &rhs)
{
    lhs += rhs;
    return lhs;
}

Sales_item &Sales_item::operator=(const std::string &t_isbn)
{
    isbn = t_isbn;
    return *this;
}
/*
// bad practices below
// first define "operator+, then implement "operator+= rely on "operator+"
Sales_item operator+(const Sales_item &lhs, const Sales_item &rhs)
{
    Sales_item res;
    res.isbn = lhs.isbn + rhs.isbn;
    res.units_sold = lhs.units_sold + rhs.units_sold;
    res.revenue = lhs.revenue + rhs.revenue;
    return res;
}

Sales_item &Sales_item::operator+=(const Sales_item &item)
{
    *this = *this + item;
    return *this;
}*/

// 14.40
Sales_item::operator double() const
{
    return revenue;
}

Sales_item::operator std::string() const
{
    return isbn;
}