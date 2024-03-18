#include "Functionalities.h"

void CreateObjects(TouristVehicleContainer &tourist_vehicle_data_container, PermitContainer &permit_data_container)
{
    permit_data_container.push_back(std::make_shared<Permit>("p101",PermitType::OWNED,34));
    permit_data_container.push_back(std::make_shared<Permit>("p102",PermitType::RENTED,24));
    permit_data_container.push_back(std::make_shared<Permit>("p103",PermitType::OWNED,12));

    tourist_vehicle_data_container.push_back(std::make_shared<TouristVehicle>("Nexon",TouristVehicleType::CAR,678,std::ref(permit_data_container[0])));
    tourist_vehicle_data_container.push_back(std::make_shared<TouristVehicle>("KTM",TouristVehicleType::BIKE,999,std::ref(permit_data_container[1])));
    tourist_vehicle_data_container.push_back(std::make_shared<TouristVehicle>("Nexon",TouristVehicleType::CAR,300,std::ref(permit_data_container[2])));

    std::cout<<"Objects Created Successfully !!!!"<<std::endl;
}

float FindAverageDurationLeft(TouristVehicleContainer &tourist_vehicle_data_container)
{
    float sum = 0.0f;
    int size = tourist_vehicle_data_container.size();

    for(TouristVehiclePointer ptr: tourist_vehicle_data_container){
          sum += ptr->ref().get()->durationLeft();
    }

    return sum/size;
}

void Adaptor(TouristVehicleContainer &tourist_vehicle_data_container, FnType &fn){
    fn1(tourist_vehicle_data_container);
}





 FnType fn1 = [](TouristVehicleContainer &tourist_vehicle_data_container){
    float sum = 0.0f;
    float avg = 0.0f;
    int size = tourist_vehicle_data_container.size();

    for(TouristVehiclePointer tptr : tourist_vehicle_data_container){
        sum += tptr->bookingCharge();
    }
    avg = sum / size;
    std::cout<<"Average Booking Charges : "<<avg<<std::endl;
 };



