#include "DieselCar.h"
std::ostream &operator<<(std::ostream &os, const DieselCar &rhs) {
    os << "_name: " << rhs._name
       << " _acceleration: " << rhs._acceleration
       << " _top_speed: " << rhs._top_speed
       << " _ex_showroom_price: " << rhs._ex_showroom_price
       << " _diesel_capacity: " << rhs._diesel_capacity
       << " _mileage: " << rhs._mileage;
    return os;
}

DieselCar::DieselCar(std::string name, int acceleration, float topspeed, float exshowroomprice, int dieselcapacity, int mileage):
_name{name},
_acceleration{acceleration},
_top_speed{topspeed},
_ex_showroom_price{exshowroomprice},
_diesel_capacity{dieselcapacity},
_mileage{mileage}
{
}

void DieselCar::Drive()
{
    std::cout<<"Drive( ) inside DieselCar"<<std::endl;
}
