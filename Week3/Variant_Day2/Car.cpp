#include "Car.h"



std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_name: " << rhs._name
       << " _acceleration: " << rhs._acceleration
       << " _top_speed: " << rhs._top_speed
       << " _ex_showroom_price: " << rhs._ex_showroom_price;
    return os;
}


//member list initialization.
Car::Car(std::string name, int acceleration, int top_speed, float price): _name{name}, _acceleration{acceleration}, _top_speed{top_speed}, _ex_showroom_price{price}{}
