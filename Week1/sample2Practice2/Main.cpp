#include<iostream>
#include "Customer.h"
#include "CreditCard.h"
#include "Functionalities.h"


int main(){
    Container data;
    CreateObjects(data);
    std::cout<<MaxCardLimit(data)<<std::endl;

}