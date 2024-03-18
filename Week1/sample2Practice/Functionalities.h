#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"
#include<array>

using Container = std::array<Car*, 3>;

void CreateObjects(Container &data);
void DeleteObjects(const Container &data);

//Functions to perform:
int TotalHorsePower(const Container& data);
bool IsContainerAllAbove700000(const Container& data);
Engine* EnginePointerToMinPriceCar(const Container& data);
float AverageEngineTorque(const Container& data);
std::string FindCarModelById(const Container& data, std::string carId);

#endif // FUNCTIONALITIES_H
