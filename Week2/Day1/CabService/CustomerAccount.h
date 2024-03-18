#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<cstring>
#include "Gender.h"
#include "Account.h"
class CustomerAccount:public Account
{
private:
     std::string _fullName;
     Gender _customerType;

public:
     CustomerAccount()=delete;
    CustomerAccount(const CustomerAccount&)=delete;
    CustomerAccount& operator=(const CustomerAccount&)=delete;
    CustomerAccount&& operator=(const CustomerAccount&&)=delete;
    CustomerAccount(CustomerAccount&&)=delete;
    ~CustomerAccount()=default;

    CustomerAccount(std::string name, std::string fullname, Gender gType);

    std::string fullName() const { return _fullName; }
    void setFullName(const std::string &fullName) { _fullName = fullName; }

    Gender customerType() const { return _customerType; }
    void setCustomerType(const Gender &customerType) { _customerType = customerType; }

    friend std::ostream &operator<<(std::ostream &os, const CustomerAccount &rhs);
   void RegisterAccount() override;

    
};

#endif // CUSTOMER_H
