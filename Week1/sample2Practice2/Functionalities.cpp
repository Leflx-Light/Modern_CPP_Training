#include "Functionalities.h"
#include "CreditCardType.h"
#include "CustomerType.h"
#include<iostream>

void CreateObjects(Container &data)
{
    Customer *c1 = new Customer("Sonu","s101",CustomerType::ELITE,{ new CreditCard("1234 4321 1111 2222",56000.0f, 2028,344,CreditCardType::MILES)});
    Customer *c2 = new Customer("Ravi","s103",CustomerType::PRO,{ new CreditCard("1234 4321 1111 2222",56000.0f, 2028,344,CreditCardType::NEO)});
    Customer *c3 = new Customer("Suraj","s102",CustomerType::PRVILEGED,{ new CreditCard("1234 4321 1111 2222",56000.0f, 2028,344,CreditCardType::SIGNATURE)});
    // data.push_back(c1);
    // data.push_back(c2);
    // data.push_back(c3);
}

void DeleteObjects(Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data empty");
    }

    for(Customer *c : data){
        for(CreditCard *cr : c->creditCards()){
            delete cr;
        }
        delete c;
    }
}

std::string MaxCardLimit(Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data empty");
    }

    float maxlimit = 0.0f;
    std::string number = "";

    for(Customer *c : data){
        for(CreditCard * cr : c->creditCards()){
            if(maxlimit < cr->limit()){
                maxlimit = cr->limit();
                number = cr->number();
            }
        }
    }

    return number;

}

CCContainer ParticularInstanceType(Container &data, CreditCardType type)
{
    if(data.empty()){
        throw std::runtime_error("data empty");
    }

    CCContainer result;

    for(Customer * c : data){
        for(CreditCard * cr : c->creditCards()){
            if(type == cr->creditCardType()){
                 result.push_back(cr);
            }
        }
    }

   return result;
}

CustomerType TypeOfId(Container &data, std::string id)
{
    if(data.empty()){
        throw std::runtime_error("data empty");
    }
    CustomerType type = CustomerType::ELITE;
    for(Customer *c: data){
        if(c->id()==id){
           type = c->customerType();
        }
    }

    return type;
}

bool ValidId(Container &data, std::string id)
{
    if(data.empty()){
        throw std::runtime_error("data empty");
    }

    for(Customer *c : data){
        if(id == c->id()){
            return true;
        }
    }

    return false;
}
