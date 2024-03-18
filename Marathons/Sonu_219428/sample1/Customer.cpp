#include "Customer.h"
#include "CustomerType.h"
#include<iostream>

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
     std::string val = "";
     if(rhs._customerType == CustomerType::PREMIUM){
        val = "PREMIUM";
     }else if(rhs._customerType == CustomerType::REGULAR){
        val = "REGULAR";
     }else{
        val = "VIP";
     }
    os << "_customerId: " << rhs._customerId
       << " _customerName: " << rhs._customerName
       << " _customerType: " << val
       << " _customerAge: " << rhs._customerAge
       << " _customerStoreCredits: " << rhs._customerStoreCredits;
    return os;
}

Customer::Customer(int customerid):_customerId{customerid}
{
     
     
}

int Customer::operator+(const Customer & c)
{
    int score1 = this->customerStoreCredits();
    int score2 = c.customerStoreCredits();
    int sum = score1 + score2; 
    return sum ;
    
}

Customer::Customer(int customerid, std::string customername, CustomerType customertype, unsigned int customerage, int customerstorecredits):
_customerId{customerid}, _customerType{customertype},_customerAge{customerage},_customerStoreCredits{customerstorecredits}
{
}

