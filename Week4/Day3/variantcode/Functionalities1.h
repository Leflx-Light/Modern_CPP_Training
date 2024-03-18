#ifndef FUNCTIONALITIES1_H
#define FUNCTIONALITIES1_H
#include "EvCar.h"
#include "IceCar.h"
#include<iostream>
#include<memory>
#include<array>
#include<variant>
#include<vector>
#include<algorithm>
#include<numeric>


using EvCarPointer = std::shared_ptr<EvCar>;
using IceCarPointer = std::shared_ptr<IceCar>;
using VType = std::variant<EvCarPointer, IceCarPointer>;
using VContainer = std::vector<VType>;


void CreateObjects(VContainer& data);
bool FindAtleastIceCar(VContainer& data);
int CountInstancesIceCar(VContainer& data);
VType ReturnInstance(VContainer& data, float battery_capacity);

#endif // FUNCTIONALITIES1_H
