#include "CarRide.h"


CarRide::CarRide(std::variant<int, std::string> id, CarRideType type, PaymentMode payment_mode, float fare, std::string drop_location, std::string pickup_location):
_id{id},
_type{type},
_payment_mode{payment_mode},
_fare{fare},
_drop_location{drop_location},
_pickup_location{pickup_location}
{
}

std::string CarRide::DisplayCarRideType(CarRideType type)
{
    if(type == CarRideType::LOCAL){ return "LOCAL";}
    else if(type == CarRideType::OUTSTATION){return "OUTSTATION";}
    else {return "RENT";}
}

std::string CarRide::DisplayPaymentMode(PaymentMode mode)
{
    if(mode == PaymentMode::CARD){return "CARD";}
    else if(mode == PaymentMode::CASH){return "CASH";}
    else if(mode == PaymentMode::UPI){return "UPI";}
    else {return "WALLET";}
}


std::ostream &operator<<(std::ostream &os, const CarRide &rhs) {
    os << "_id: ";
    std::visit([&os](auto&& val) { os << val; }, rhs._id);
    os << " _type: " << DisplayCarRideType(rhs._type);
    os << " _payment_mode: " << DisplayPaymentMode(rhs._payment_mode)
       << " _fare: " << rhs._fare
       << " _drop_location: " << rhs._drop_location
       << " _pickup_location: " << rhs._pickup_location;
    return os;
}
