#ifndef COMMAND_H
#define COMMAND_H

#include"Account.h"

class Command
{
protected:
    double amount{0};
    Command(double amount):amount(amount)
    {
    }
public:
    virtual void execute(Account&) = 0;
    virtual void unexecute(Account&) = 0;
    virtual ~Command() = default;
};


class DebitCommand :public Command
{
public:
    DebitCommand(double amount) :Command(amount)
    {
    }
    void execute(Account& acc) override
    {
        acc.debit(amount);
    }
    void unexecute(Account& acc) override
    {
        acc.credit(amount);
    }
};

class CreditCommand :public Command
{
public:
    CreditCommand(double amount) :Command(amount)
    {
    }
    void execute(Account& acc) override
    {
        acc.credit(amount);
    }
    void unexecute(Account& acc) override
    {
        acc.debit(amount);
    }
};


#endif // COMMAND_H
