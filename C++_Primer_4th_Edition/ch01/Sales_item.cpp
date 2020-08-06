#include <iostream>
#include <string>
#include "Sales_item.h"
Sales_item::Sales_item(std::istream &in = std::cin)
{
    std::cout << "isbn:" << std::flush;
    in >> isbn;

    std::cout << "units sold:" << std::flush;
    in >> units_sold;

    std::cout << "revenue:" << std::flush;
    in >> revenue;
}

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