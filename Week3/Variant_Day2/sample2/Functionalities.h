#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "ElectricCar.h"
#include "DieselCar.h"
#include<iostream>
#include<array>
#include<variant>
#include<functional>
#include<memory>

// CreateOjbects is a top-level(global) function which takes one argument type std:: vector to Car pointers BY REFERENCE. This functions returns void.

using ElectricCarPointer = std::shared_ptr<ElectricCar>;
using DieselCarPointer =  std::shared_ptr<DieselCar>;
using VType = std::variant<ElectricCarPointer, DieselCarPointer>;
using Container = std::array<VType,4>;

void createobjects(Container &data);
float FindAverageTopSpeeds(Container &data);
float ReturnHighestRangeValue(Container &data);

#endif // FUNCTIONALITIES_H
