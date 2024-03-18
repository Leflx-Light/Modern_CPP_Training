#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<vector>
#include "Car.h"

// CreateOjbects is a top-level(global) function which takes one argument type std:: vector to Car pointers BY REFERENCE. This functions returns void.


void CreateObjects(std::vector<Car*>& data);
void DeleteObjects(std::vector<Car*>& data);

#endif // FUNCTIONALITIES_H
