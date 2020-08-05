#include "Account.h"

double Account::initRate()
{
    return 0.01;
}

double Account::interestRate = initRate();

double Account::rate()
{
    return interestRate;
}

void Account::rate(double newRate)
{
    interestRate = newRate;
}