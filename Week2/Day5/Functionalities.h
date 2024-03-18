#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "TouristVehicle.h"
#include<functional>
#include<memory>
#include<vector>

using TouristVehiclePointer = std::shared_ptr<TouristVehicle>;
using TouristVehicleContainer = std::vector<TouristVehiclePointer>;

using PermitPointer = std::shared_ptr<Permit>;
using PermitContainer = std::vector<PermitPointer>;



void CreateObjects(TouristVehicleContainer &tourist_vehicle_data_container, PermitContainer &permit_data_container);


float FindAverageDurationLeft(TouristVehicleContainer &tourist_vehicle_data_container);


//Lambda details:
using FnType = std::function<void(TouristVehicleContainer&)>;
extern FnType fn1;

void Adaptor(TouristVehicleContainer& , FnType&);
   


#endif // FUNCTIONALITIES_H
