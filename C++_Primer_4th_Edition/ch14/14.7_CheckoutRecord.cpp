#include "14.7_CheckoutRecord.h"

CheckoutRecord::CheckoutRecord(/* args */) : book_id(0.0), title("None")
{
    ;
}

std::ostream &operator<<(std::ostream &out, const CheckoutRecord &chkrcd)
{
    out << chkrcd.book_id << "\t" << chkrcd.title << "\n"
        << chkrcd.borrower.first << " " << chkrcd.borrower.second;
    for (std::vector<std::pair<std::string, std::string> *>::const_iterator it = chkrcd.wait_list.begin();
         it != chkrcd.wait_list.end(); ++it)
    {
        out << "\n"
            << (*it)->first << " " << (*it)->second;
    }
    return out;
}

std::istream &operator>>(std::istream &in, CheckoutRecord &chkrcd)
{
    if (in >> chkrcd.book_id)
    {
        in >> chkrcd.title >> chkrcd.borrower.first >> chkrcd.borrower.second;
    }
    else
    {
        chkrcd = CheckoutRecord();
    }
    return in;
}

void CheckoutRecord::add_waiter(wait_list_item_t waiter)
{
    wait_list.push_back(waiter);
}

// 14.15
CheckoutRecord &CheckoutRecord::operator=(const CheckoutRecord &rhs)
{
    book_id = rhs.book_id;
    title = rhs.title;
    borrower = rhs.borrower;
    wait_list = rhs.wait_list;
    return *this;
}

// 14.17
CheckoutRecord::wait_list_item_t &CheckoutRecord::operator[](const size_t index)
{
    return wait_list[index];
}

const CheckoutRecord::wait_list_item_t &CheckoutRecord::operator[](const size_t index) const
{
    return wait_list[index];
}

// 14.19
CheckoutRecord::wait_list_item_t & CheckoutRecord::get_n_waiter(const size_t n)
{
    return wait_list[n];
}

// 14.42
// whether the book is lent or not
CheckoutRecord::operator bool() const
{
    if(borrower != std::pair<std::string, std::string>())
    {
        return true;
    }
    return false;
}