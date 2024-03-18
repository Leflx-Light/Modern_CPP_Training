#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include <array> //STL
#include "Car.h"
/*
    defaulted and deleted special member functions
    override
    member list initialization
    in-class initialization
    for-each (range based for loop)
    enum class
    constructor delegation
    using keyword

*/

// improvement version of typedef.
using Container = std::array<Car*,3>;

void CreateObjects(Container &data);
void DeleteObjects(const Container &data);

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
