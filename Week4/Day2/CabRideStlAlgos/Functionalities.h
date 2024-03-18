#include "CabRide.h"
#include<memory>
#include<array>


using CabRidePointer = std::shared_ptr<CabRide>;
using Container = std::array<CabRidePointer,5>;

void CreateObjects(Container& data);
void PrintInstancesPaymentModeCash(Container& data);
float FindAverageDistance(Container& data, float rating);
int CountInstancesFareAtleast150(Container& data);
void CheckPassengerCount(Container& data);