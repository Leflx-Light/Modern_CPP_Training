#include "ElectricCar.h"

ElectricCar::ElectricCar(std::string name, int acceleration, int top_speed, float exshowroomprice, int battery_capacity, float time_to_change, float motor_power, float max_power, float range):
_name{name},
_acceleration{acceleration},
_top_speed{top_speed},
_ex_showroom_price{exshowroomprice},
_battery_capacity{battery_capacity},
_time_to_change{time_to_change},
_motor_power{motor_power},
_max_power{max_power},
_range{range}
{
}

std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs) {
    os << "_name: " << rhs._name
       << " _acceleration: " << rhs._acceleration
       << " _top_speed: " << rhs._top_speed
       << " _ex_showroom_price: " << rhs._ex_showroom_price
       << " _battery_capacity: " << rhs._battery_capacity
       << " _time_to_change: " << rhs._time_to_change
       << " _motor_power: " << rhs._motor_power
       << " _max_power: " << rhs._max_power
       << " _range: " << rhs._range;
    return os;
}


