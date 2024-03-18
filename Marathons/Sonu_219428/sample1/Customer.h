#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include "CustomerType.h"

class Customer
{
private:
     int _customerId{0};
     std::string _customerName{""};
     CustomerType _customerType{CustomerType::REGULAR};
     unsigned int _customerAge{0};
     int _customerStoreCredits{0};




public:
    Customer()=default;
    Customer(const Customer&)=default;
    Customer(Customer&&)=delete;
    Customer& operator=(const Customer&)=default;
    Customer&& operator=(Customer&&)=delete;
    
    
    Customer(int customerid, std::string customername, CustomerType customertype, unsigned int customerage, int customerstorecredits);
    Customer(int customerid);
    ~Customer()=default;

   int operator+(const Customer& c);

    //getters and setters 
    int customerId() const { return _customerId; }
    std::string customerName() const { return _customerName; }
    void setCustomerName(const std::string &customerName) { _customerName = customerName; }
    CustomerType customerType() const { return _customerType; }
    void setCustomerType(const CustomerType &customerType) { _customerType = customerType; }
    void setCustomerAge(unsigned int customerAge) { _customerAge = customerAge; }
    int customerStoreCredits() const { return _customerStoreCredits; }
    void setCustomerStoreCredits(int customerStoreCredits) { _customerStoreCredits = customerStoreCredits; }
    unsigned int customerAge() const { return _customerAge; }
    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
   
   
    
};



#endif // CUSTOMER_H
