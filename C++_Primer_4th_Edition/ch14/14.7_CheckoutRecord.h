#ifndef __CHECKOUTRECORD_H
#define __CHECKOUTRECORD_H
#include <string>
#include <utility>
#include <vector>
#include <iostream>

class CheckoutRecord
{
private:
    double book_id;
    std::string title;
    std::pair<std::string, std::string> borrower;
    std::vector<std::pair<std::string, std::string> *> wait_list;

    friend std::ostream &operator<<(std::ostream &out, const CheckoutRecord &chkrcd);
    friend std::istream &operator>>(std::istream &in, CheckoutRecord &chkrcd);

public:
    CheckoutRecord(/* args */);
    typedef std::pair<std::string, std::string> *wait_list_item_t;
    CheckoutRecord &operator=(const CheckoutRecord &rhs);
    void add_waiter(wait_list_item_t waiter);
    wait_list_item_t &operator[](const size_t index);
    const wait_list_item_t &operator[](const size_t index) const;
    wait_list_item_t &get_n_waiter(const size_t n);
    // 14.42
    operator bool() const;
};
#endif