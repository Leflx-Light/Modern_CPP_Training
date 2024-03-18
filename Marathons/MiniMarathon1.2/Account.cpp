#include "Account.h"

double Account::getBalance() const
{
    return total_balance;
}

void Account::debit(double amount)
{
    total_balance -= amount;
}

void Account::credit(double amount)
{
    total_balance += amount;
}
