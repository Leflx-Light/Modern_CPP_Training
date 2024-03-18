#include "Functionalities.h"
#include "EmptyContainerException.h"
#include "NotValidNumberException.h"
#include<iostream>

int main(){


    try{
       ContainerList data;
       CreateObjects(data);
       std::cout<<"---------------Part-1------------------"<<std::endl;
        ContainerList result = FindNInstances(data,3);
         for(std::shared_ptr<TouristVehicle> tv : result){
             std::cout<<*tv;
           }
       std::cout<<"---------------Part-2------------------"<<std::endl;
       std::cout<<FindAverage(data,TouristVehicleType::BIKE);
       std::cout<<"---------------Part-3------------------"<<std::endl;
       std::cout<<FindInstanceChargesMax(data);
       std::cout<<"---------------Part-4------------------"<<std::endl;

       std::cout<<"---------------Part-5------------------"<<std::endl;
    }catch(EmptyContainerException &e){
      std::cout<<e.what()<<"\n";
    }catch(NotValidNumberException &e){
       std::cout<<e.what()<<"\n";
    }
    
}