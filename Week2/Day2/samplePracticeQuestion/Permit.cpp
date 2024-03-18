#include "Permit.h"
std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
     std::string val = "";
     if(rhs._permit_type == PermitType::LEASE){
        val = "LEASE";
     }else{
        val = "OWNED";
     }
    os << "_serial_number: " << rhs._serial_number<<std::endl
       << " _permit_type: " << val<<std::endl
       << " _permit_duration_left: " << rhs._permit_duration_left<<std::endl;
    return os;
}

Permit::Permit(std::string serialnumber, PermitType permittype, unsigned long permitdurationleft):
_serial_number{serialnumber}, _permit_type{permittype}, _permit_duration_left{permitdurationleft}
{
}