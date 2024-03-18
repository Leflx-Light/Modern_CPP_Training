#include "Employee.h"

std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_name: " << rhs._name
       << " _id: " << rhs._id;
    return os;
}

Employee::Employee(std::string name, int id):_name{name}, _id{id}
{
    
}
