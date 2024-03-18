#include "Permit.h"
std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
    std::string val = " ";
    if(rhs._type == PermitType::OWNED){
        val = "OWNED";
    }else{
        val = "RENTED";
    }
    os << "_serial_number: " << rhs._serial_number
       << " _type: " << val
       << " _duration_left: " << rhs._duration_left;
    return os;
}

Permit::Permit(std::string serial_number, PermitType type, int duration_left):
_serial_number{serial_number},
_type{type},
_duration_left{duration_left}
{
}