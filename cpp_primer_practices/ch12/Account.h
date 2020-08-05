#ifndef __ACCOUNT_H
#define __ACCOUNT_H
#include <string>
class Account
{
private:
    std::string owner;
    double amount;
    static double initRate();
    static double interestRate;

public:
    Account(/* args */) : owner("Nobody"), amount(0.0) {}
    static double rate();
    static void rate(double newRate);
};
#endif