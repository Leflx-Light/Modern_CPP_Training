#include "TouristVehicle.h"
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
     std::string val = "";
     if(rhs._type == TouristVehicleType::BIKE){
          val = "BIKE";
     }else if(rhs._type == TouristVehicleType::BUS){
        val = "BUS";
     }else{
        val = "BIKE";
     }
    os << "_number: " << rhs._number<<std::endl
       << " _type: " <<val<<std::endl
       << " _seat_count: " << rhs._seat_count<<std::endl
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge<<std::endl
       << " _permit: " << rhs._permit<<std::endl;
    return os;
}

TouristVehicle::TouristVehicle(std::string number, TouristVehicleType type, unsigned short seatcount, float perhourbookingcharge, PermitPointer permit):
_number{number}, _type{type}, _seat_count{seatcount}, _per_hour_booking_charge{perhourbookingcharge},_permit{permit}
{
}