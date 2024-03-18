#include "System.h"
std::ostream &operator<<(std::ostream &os, const System &rhs) {
     std::string val = " ";
     if(rhs._system_type == SystemType::_8GB){
        val = "8GB";
     }else if(rhs._system_type == SystemType::_16GB){
        val = "16GB";
     }else{
        val = "32GB";
     }
    os << "_system_type: " << val<<std::endl
       << " _disk_space: " << rhs._disk_space<<std::endl
       << " _allocation_number: " << rhs._allocation_number<<std::endl;
    return os;
}

System::System(SystemType system_type, int disk_space, std::string allocation_number):
_system_type{system_type},
_disk_space{disk_space},
_allocation_number{allocation_number}
{
}