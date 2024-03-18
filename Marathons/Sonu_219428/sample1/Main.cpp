#include "Functionalities.h"
#include "Customer.h"
#include "CustomerType.h"
#include<iostream>
#include<exception>



int main(){


    Container data;
    try{
         CreateObjects(data);
        std::cout<<"--------------------------"<<std::endl;
        std::cout<<FindCustomerInstanceMatchesCustomerType(data,CustomerType::PREMIUM);
        std::cout<<FindAverageCustomerAge(data, CustomerType::VIP);
    }catch(int n){
        std::cout<<"Error occured!!"<<std::endl;
    }
   

   return 0;
}