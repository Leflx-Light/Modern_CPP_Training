#include "Functionalities.h"
#include "EmptyContainerException.h"
#include "NotValidNumberException.h"
#include<iostream>
#include<memory>


/*
 
    // shared pointer:
          std::vector<EmployeePointer> data2{
            std::make_shared<Employee>(101, "Harshit", 7880.0f),
            std::make_shared<Employee>(102, "Sonu", 8880.0f),
        };


*/



void CreateObjects(ContainerList &data)
{

    data.push_back(std::make_shared<TouristVehicle>("c101", TouristVehicleType::BIKE,4,345.67,std::make_shared<Permit>("mh12324",PermitType::LEASE,34)));
    data.push_back(std::make_shared<TouristVehicle>("c102", TouristVehicleType::BUS,50,123.67,std::make_shared<Permit>("mh12324",PermitType::OWNED,34)));
    data.push_back(std::make_shared<TouristVehicle>("c103", TouristVehicleType::BIKE,4,345.67,std::make_shared<Permit>("mh12324",PermitType::LEASE,34)));

}

ContainerList FindNInstances(ContainerList &data, int N)
{
      if(data.empty()){
          throw EmptyContainerException("There is no data.");
    }

    if(N<=0 || N>data.size()){
          throw EmptyContainerException("INVALID Number.");
    }

    ContainerList result;
    for(std::shared_ptr<TouristVehicle> tv: data){
          if(tv->seatCount()>= 4 && tv->permit()->permitType() == PermitType::LEASE){
               result.push_back(tv);
          }
    }

    return result;
}

float FindAverage(ContainerList &data, TouristVehicleType type)
{
      if(data.empty()){
          throw EmptyContainerException("There is no data.");
    }

    float sum = 0.0f;
    int count =0;
    
    for(std::shared_ptr<TouristVehicle> tv: data){
        if(tv->type()==type){
            sum += tv->perHourBookingCharge();
            count++;
        }
    }
    return sum/count;
}

std::string FindInstanceChargesMax(ContainerList &data)
{ 
      if(data.empty()){
          throw EmptyContainerException("There is no data.");
    }

    std::string result = "";
    float max_per_hour_booking_charges = 0.0f;
    std::shared_ptr<TouristVehicle> maxObjPointer;
    for(std::shared_ptr<TouristVehicle> tv : data){
         if(max_per_hour_booking_charges < tv->perHourBookingCharge()){
            max_per_hour_booking_charges = tv->perHourBookingCharge();
            maxObjPointer = tv;
         }
    }

    return maxObjPointer->permit()->serialNumber();
}

ContainerList ReturnNInstances(ContainerList &data, int N)
{
      if(data.empty()){
          throw EmptyContainerException("There is no data.");
    }

      if(N<=0 || N>data.size()){
          throw EmptyContainerException("INVALID Number.");
    }

    ContainerList result;
    
    
    for(std::shared_ptr<TouristVehicle> tv: data){
          if(N){
            result.push_back(tv);
            N--;
          }
    }

    return result;

}
