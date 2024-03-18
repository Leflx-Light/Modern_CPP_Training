#include"IceCar.h"



std::ostream &operator<<(std::ostream &os, const IceCar &rhs) {
    os << "_id: " << rhs._id<<"\n";
    std::string val="";
    if(rhs._chasisType==ChasisType::LADDER){
        val="LADDER";
    }
    if(rhs._chasisType==ChasisType::TABULAR){
        val="TABULAR";
    }
    os << " _chasisType: " << val<<"\n";
    if(rhs._batteryType==BatteryType::LI_ION){
        val="LI_ION";
    }
    if(rhs._batteryType==BatteryType::NI_CAO){
        val="NI_CAO";
    }
    os << " _batteryType: " << val<<"\n"
       << " _batterCapacity: " << rhs._batterCapacity<<"\n";
    return os;
}
