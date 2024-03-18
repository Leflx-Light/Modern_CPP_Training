#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>

class Account
{
    int _account_id{0};
    double total_balance{0};
public:
    Account(int id,double amount):_account_id(id), total_balance(amount)
    {   
    }
    double getBalance() const;
    void debit(double amount);
    void credit(double amount);
};

#endif // ACCOUNT_H
