#include "Customer.h"


std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    std::string val="";
    if(rhs._customer_type == CustomerType::ELITE){
        val = "ELITE";
    }else if(rhs._customer_type == CustomerType::PRO){
        val = "PRO";
    }else{
        val = "PRIVILEGED";
    }
    os << "_name: " << rhs._name
       << " _id: " << rhs._id
       << " _customer_type: " << val
       << " _credit_cards: ";
       for(CreditCard *cr : rhs.creditCards()){
           os<<cr<<"\n";
       }
    return os;
}

Customer::Customer(std::string name, std::string id, CustomerType customertype, CreditCards creditcards):
_name{name},_id{id},_customer_type{customertype}, _credit_cards{creditcards}
{
}
