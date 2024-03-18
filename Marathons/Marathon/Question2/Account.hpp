#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include<iostream>

class Account
{
    int m_accId{0};
    double m_balance{0};

    public :
        Account(int id, double amount) : m_accId(id), m_balance(amount)
        {

        }

        double getBalance() const
        {
            return m_balance;
        }

        void debit(double amount)
        {
            if(m_balance < amount)
            {
                throw "Insufficient amount\n";
            }
            m_balance -= amount;
        }

        void credit(double amount)
        {
            m_balance += amount;
        }

        

        ~Account() noexcept = default;
};
#endif