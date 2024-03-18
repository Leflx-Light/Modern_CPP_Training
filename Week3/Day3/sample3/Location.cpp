#include "Location.h"
std::ostream &operator<<(std::ostream &os, const Location &rhs) {
    os << "_name: " << rhs._name
       << " _ref: " << *(rhs._ref).get();
    return os;
}

Location::Location(std::string name, WorkshopRef ref):
_name{name},
_ref{ref}
{
}