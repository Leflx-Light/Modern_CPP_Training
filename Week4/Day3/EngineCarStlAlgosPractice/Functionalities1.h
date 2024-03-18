#ifndef FUNCTIONALITIES1_H
#define FUNCTIONALITIES1_H
#include<memory>
#include "Car.h"
#include<unordered_map>
#include<algorithm>
#include<numeric>



using CarPointer = std::shared_ptr<Car>;
using Container = std::unordered_map<std::string, CarPointer>;

//function: 1
void CreateObjects(Container & data);
float TotalHorsePower(Container & data);
bool IsAllContainerPriceAbove700000(Container& data);
std::shared_ptr<Engine> ReturnEngineToMinPriceCar(Container& data);
float FindAverageTorque(Container &data);
std::string FindCarModelById(Container &data, std::string carid);
#endif // FUNCTIONALITIES1_H
