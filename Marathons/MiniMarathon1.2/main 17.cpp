#include"commandrepo.h"
#define line(msg) std::cout<<"***********************"#msg"*********************\n"



class Transaction
{
    Account& acc;
    Repository repository;
public:
    Transaction(Account& acc):acc(acc)
    {
    }
    double getBalance() const
    {
        return acc.getBalance();
    }
    void debit(double amount)
    {
        DebitCommand* cmd = new DebitCommand(amount);
        cmd->execute(acc);
        repository.Register(cmd);
    }
    void credit(double amount)
    {
        CreditCommand* cmd = new CreditCommand(amount);
        cmd->execute(acc);
        repository.Register(cmd);
    }
    void undo()
    {
        Command* cmd = repository.Retrieve();
        cmd->unexecute(acc);
        delete cmd;
    }
    ~Transaction()
    {
        while (!repository.IsEmpty())
        {
            Command* cmd = repository.Retrieve();
            delete cmd;
        }
    }
};

int main()
{
    Account acc(1, 1500);
    Transaction trans(acc);
    line(Orignal Balance);
    std::cout << "Balance : " << trans.getBalance() << '\n';
    trans.credit(100);
    trans.credit(200);
    trans.credit(500);
    line(Credited Amount);
    std::cout << "Balance : " << trans.getBalance() << '\n';
    trans.debit(20);
    trans.debit(200);
    line(Debited);
    std::cout << "Balance : " << trans.getBalance() << '\n';
    trans.undo();
    trans.undo();
    trans.undo();
    line(Undo) ;
    std::cout << "Balance : " << trans.getBalance() << '\n';;
    std::cout << "Balance : " << trans.getBalance() << '\n';
    return 0;
}
