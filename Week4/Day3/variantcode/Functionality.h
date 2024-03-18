#include"EvCar.h"
#include"IceCar.h"
#ifndef FUNCTIONALITY_H_
#define FUNCTIONALITY_H_
#include<memory>
#include<variant>
#include <vector>
#include<algorithm>
#include<numeric>
#include<iostream>


using EvCarPointer=std::shared_ptr<EvCar>;
using IceCarPointer=std::shared_ptr<IceCar>;
using Vtype=std::variant<EvCarPointer,IceCarPointer>;
using Container=std::vector<Vtype>;

void CreateObjects(Container& data);

bool AtLeastIceCar(Container& data);

int CountInstanceOfIceCar(Container & data);

int ReturnContainer(Container& data,float BatteryCapacity);

void DisplayTotalBatteryCapacity(Container& data);

void DisplayNthInstance(Container & data,int N);



#endif // FUNCTIONALITY_H_