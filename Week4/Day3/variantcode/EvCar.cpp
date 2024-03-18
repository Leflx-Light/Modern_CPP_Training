#include"EvCar.h"
#include<iostream>


std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << "_id: " << rhs._id<<"\n";
    std::string val ="";
    if(rhs._chasisType==ChasisType::LADDER){
        val="LADDER";
    }
    if(rhs._chasisType==ChasisType::TABULAR){
        val="TABULAR";
    }
    os<< " _chasisType: " << val<<"\n";
    if(rhs._fuelType==FuelType::DIESEL){
        val="DIESEL";
    }
    if(rhs._fuelType==FuelType::PETROL){
        val="PETROL";
    }

    os<< " _fuelType: " <<val<<"\n" << " _Fuel_Type_Capacity: " << rhs._Fuel_Type_Capacity<<"\n";
    return os;
}
