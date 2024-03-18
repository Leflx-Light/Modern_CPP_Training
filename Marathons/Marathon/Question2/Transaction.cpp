
#include "Transaction.hpp"

TransHelper::TransHelper(Account& acc) : acc(acc)
{
}

double TransHelper::getBalance() const
{
    return acc.getBalance();
}

void TransHelper::debit(double amount)
{
    DebitCommand* cmd = new DebitCommand(amount);
    try  
    {
        cmd->execute(acc);
        repository.Register(cmd);
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
    
}

void TransHelper::credit(double amount)
{
    CreditCommand* cmd = new CreditCommand(amount);
    cmd->execute(acc);
    repository.Register(cmd);
}

void TransHelper::undo()
{
    Command* cmd = repository.Retrieve();
    try
    {
        cmd->unexecute(acc);
        delete cmd;
    }
    catch(const char* e)
    {
        std::cout << e << '\n';
    }
    
    
}

TransHelper::~TransHelper()
{
    while(!repository.IsEmpty())
    {
        Command*cmd = repository.Retrieve();
        delete cmd;
    }
}