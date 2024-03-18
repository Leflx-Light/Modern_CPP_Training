#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
#include<cstring>
/*
   _id
   _name
   static counter
   disable all special member except destructor
   << out operator
   RegisterAccount()=0;
*/

class Account
{
private:
    static unsigned long counter;
    std::string _username;
    unsigned long _userId;

public:
    Account()=delete;
    Account(const Account&)=delete;
    Account& operator=(const Account&)=delete;
    Account&& operator=(const Account&&)=delete;
    Account(Account&&)=delete;
    ~Account()=default;
    // explicit : 
     explicit Account(std::string name);

    virtual void RegisterAccount()=0; //pure virtual

    static unsigned long getCounter() { return Account::counter; }

    std::string username() const { return _username; }
    void setUsername(const std::string &username) { _username = username; }

    unsigned long userId() const { return _userId; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);

    


};

#endif // ACCOUNT_H
