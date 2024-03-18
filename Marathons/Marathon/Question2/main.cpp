#include<iostream>
using namespace std;

#include "Account.hpp"
#include "Command.hpp"
#include "CommandRepo.hpp"
#include "Transaction.cpp"

void Executer()
{
    Account acc(101, 10);

    TransHelper trans(acc);

    trans.credit(20);
    trans.credit(90);
    trans.credit(100);

    cout << "Balance : " << trans.getBalance() << "\n";

    trans.debit(20);
    trans.debit(10);

    cout << "Balance : " << trans.getBalance() << "\n";

    trans.undo();
    

    cout << "Balance : " << trans.getBalance() << "\n";
}
  
int main()
{
    Executer();

    return 0;
}