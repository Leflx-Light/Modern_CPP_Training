#include<iostream>
#include "Device.h"
#include "License.h"
#include  "Owner.h"
#include "Functionalities.h"



int main(){
    try{
        std::vector<Device*> data;
        createobjects(data);
        std::cout<<"-----------------------"<<std::endl;
        FindDiscountPrice(data);
    }catch(std::exception &e){
        std::cout<<"Error"<<std::endl;
    }
}