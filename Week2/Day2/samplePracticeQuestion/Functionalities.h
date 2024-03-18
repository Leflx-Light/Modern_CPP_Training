#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include<list>
#include "TouristVehicle.h"


using ContainerList = std::list<std::shared_ptr<TouristVehicle>>;
void CreateObjects(ContainerList &data);
ContainerList FindNInstances(ContainerList &data, int N);
float FindAverage(ContainerList &data,TouristVehicleType type);
std::string FindInstanceChargesMax(ContainerList &data);
ContainerList ReturnNInstances(ContainerList &data, int N);
#endif // FUNCTIONALITIES_H
