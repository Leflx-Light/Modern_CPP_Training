#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "CarRide.h"
#include<memory>
#include<functional>
#include<array>

using CarRidePointer =  std::shared_ptr<CarRide>;
using Container = std::array<CarRidePointer,4>;
using ModeArray = std::array<PaymentMode,2>;

void createobjects(Container &data);

CarRideType ReturnPassingId(Container &data, std::variant<int, std::string> id);

ModeArray ReturnPaymentModeMaxMinFare(Container &data);

#endif // FUNCTIONALITIES_H
