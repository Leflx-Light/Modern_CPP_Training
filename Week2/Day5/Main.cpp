#include "Functionalities.h"



int main(){
    FnType fn;
    TouristVehicleContainer tourist_vehicle_data_container;
    PermitContainer permit_data_container;
    
    std::cout<<"Process: 1 ------------------"<<std::endl;
   // CreateObjects(tourist_vehicle_data_container, permit_data_container);
    auto bindedCreateObjects = std::bind(CreateObjects,std::placeholders::_2,std::placeholders::_1);
    bindedCreateObjects(permit_data_container, tourist_vehicle_data_container);
    std::cout<<"Process 2 -------------------"<<std::endl;
    std::cout<<"Average Duration Left : "<<FindAverageDurationLeft(tourist_vehicle_data_container)<<std::endl;
    std::cout<<"Process 3 -------------------"<<std::endl;
    Adaptor(tourist_vehicle_data_container, fn);
    std::cout<<"Process: 4 -------------------"<<std::endl;
    auto bindedAverageDurationLeft = std::bind(&FindAverageDurationLeft,std::ref(tourist_vehicle_data_container));
    std::cout<<"Binded Average Duration Left : "<<bindedAverageDurationLeft(tourist_vehicle_data_container)<<std::endl;
