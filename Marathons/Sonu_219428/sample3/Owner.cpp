#include "Owner.h"
std::ostream &operator<<(std::ostream &os, const Owner &rhs) {
    os << "_registered_name: " << rhs._registered_name;
    return os;
}

Owner::Owner(std::string registeredname):_registered_name{registeredname}
{
}