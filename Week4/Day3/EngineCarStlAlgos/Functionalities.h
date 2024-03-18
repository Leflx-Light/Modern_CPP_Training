#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include <unordered_map> //STL
#include "Car.h"
#include<memory>


using CarPointer = std::shared_ptr<Car>;
using Container = std::unordered_map<std::string, CarPointer>;

void CreateObjects(Container &data);
//void DeleteObjects(const Container &data);

int TotalHorsepower(const Container &data);

// is this condition true or false : All cars in the container have a price above 700000
bool IsContainerAllCarAbove700000(const Container &data);


// return the _engine pointer of the car whose price is lowest. if multiple cars instances have the same minimum, consider first minimum found.
    
Engine* EnginePointerToMinPriceCar(const Container& data);

// find the average torque for engines in the car container.
float AverageEngineTorque(const Container& data);


// A function to print the model name of the car whose _id is passed as a parameter
std::string FindCarModelById(const Container &data, const std:: string carId);



#endif // FUNCTIONALITIES_H
