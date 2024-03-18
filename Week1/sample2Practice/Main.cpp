#include<iostream>
#include "EmptyClassException.h"
#include "IdNotFoundException.h"
#include "Functionalities.h"




int main(){
   Container data;
   CreateObjects(data);

   try{
      int ans = TotalHorsePower(data);
      std::cout<<"Total HorsePower : "<<ans<<"\n";
      float result = AverageEngineTorque(data);
      std::cout<<"Average Engine Torque : "<<result<<"\n";
      std::string model = FindCarModelById(data, "c101");
      std::cout<<"Model for given ID found : "<<model<<"\n";
      bool flag = IsContainerAllAbove700000(data);
      if(flag){
        std::cout<<"All vehicles have price above 7 lacs\n";
      }
      else{
        std::cout<<"Some vehicle/s have price below 7 lacs\n";
      }

      Engine *e = EnginePointerToMinPriceCar(data);
      std::cout<<"Engine Found: "<<*e<<"\n";
      DeleteObjects(data);

   }catch(const EmptyClassException& ex){
       std::cout<<ex.what()<<"\n";
   }catch(const IdNotFoundException& ex){
    std::cout<<ex.what()<<"\n";
   }

}