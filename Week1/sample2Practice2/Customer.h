#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<vector>
#include "CustomerType.h"
#include "CreditCard.h"

using CreditCards = std::vector<CreditCard*>;
class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _customer_type;
    CreditCards _credit_cards;

public:
    Customer()=delete;
    Customer(const Customer&)=delete;
    Customer(Customer&&)=delete;
    const Customer& operator=(const Customer&)=delete;
    Customer&& operator=(Customer&&)=delete;
    ~Customer()=default;

    Customer(std::string name, std::string id, CustomerType customertype, CreditCards creditcards);

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    std::string id() const { return _id; }

    CustomerType customerType() const { return _customer_type; }

    CreditCards creditCards() const { return _credit_cards; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

    
};

#endif // CUSTOMER_H
