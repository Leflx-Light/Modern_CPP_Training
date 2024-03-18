#include "Functionalities.h"
#include "Customer.h"
#include<vector>

using Container = std::vector<Customer*>;

void CreateObjects(Container &data)
{
    data[0]= new Customer(101,"Sonu",CustomerType::PREMIUM,22,780);
    data[1] = new Customer(102,"Rahul",CustomerType::VIP,21,170);
    data[2] =  new Customer(103,"Vishal",CustomerType::REGULAR,19,780);
    data[3] = new Customer(104,"Prajakta",CustomerType::VIP,23,110);
    
}

void DeleteObjects(Container &data)
{
    if(data.empty()){
         throw std::runtime_error("No Data\n");
    }

    for(Customer * c : data){
        delete c;
    }
}

Customer& FindCustomerInstanceMatchesCustomerType(Container &data, CustomerType customertype)
{
    if(data.empty()){
        throw std::runtime_error("No Data\n");
    }
    
    Customer *c1 = new Customer();
    for(Customer *c : data){
        if(c->customerType() == customertype){
           
            c1 = c;
        }
    }
    
    return  *c1;
}

std::vector<Customer *> FindCustomersWhoseScoresBetween100And200(Container &data)
{
     if(data.empty()){
        throw std::runtime_error("No Data\n");
    }
    std::vector<Customer*> result;
    for(Customer *c : data){
        if(c->customerStoreCredits() >=100 && c->customerStoreCredits()<=200){
            result.push_back(c);
        }
    }
    return result;
}

std::vector<Customer *> FindFirstNItems(Container &data, int n)
{ 
     if(data.empty()){
        throw std::runtime_error("No Data\n");
    }

    if(n>4){
         throw std::runtime_error("That much items not present in Container\n");
    }
     std::vector<Customer*> result;

     for(Customer *c : data){
         int count=0;
         if(count != n){
            result.push_back(c);
            count++;
         }
     }
    return result;
} 


float FindAverageCustomerAge(Container &data, CustomerType customertype)
{
       if(data.empty()){
        throw std::runtime_error("No Data\n");
    }
    float sum =0.0f;
    int count = 0;
    for(Customer *c : data){
       if(c->customerType() == customertype){
        sum += c->customerAge();
        count++;
       }
    }

    return sum/count;
}

void CreateObjects(std::vector<Doctor *> &data)
{
}

void DeleteObjects(std::vector<Doctor *> &data)
{
}
