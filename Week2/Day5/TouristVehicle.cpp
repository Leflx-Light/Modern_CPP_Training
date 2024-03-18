#include "TouristVehicle.h"
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    std::string val="";
    if(rhs._type == TouristVehicleType::BIKE){
        val = "BIKE";
    }else if (rhs._type == TouristVehicleType::BUS){
        val = "BUS";
    }else{
        val = "CAR";
    }
    os << "_name: " << rhs._name
       << " _type: " << val
       << " _booking_charge: " << rhs._booking_charge
       << " _ref: " << *(rhs._ref.get());
    return os;
}

TouristVehicle::TouristVehicle(std::string name, TouristVehicleType type, int booking_charges, RefType ref):
_name{name},
_type{type},
_booking_charge{booking_charges},
_ref{ref}
{
}