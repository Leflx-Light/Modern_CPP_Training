#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP

#include<iostream>
#include "Account.hpp"
#include "Command.hpp"
#include "CommandRepo.hpp"

class TransHelper
{
    Account& acc;
    CommandRepository repository;

    public :
        TransHelper(Account& acc);  

        double getBalance() const;

        void debit(double amount);

        void credit(double amount);

        void undo();

        ~TransHelper();
};

#endif