#include "Engine.h"


std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "_horspower: " << rhs._horspower
       << " torque: " << rhs._torque;
    return os;
}

Engine::Engine(int horsepower, float torque):_horspower{horsepower}, _torque{torque}
{
}
