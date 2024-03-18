#include "Account.h"

unsigned long Account::counter = 90000;

std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "_username: " << rhs._username
       << " _userId: " << rhs._userId;
    return os;
}

Account::Account(std::string name):_username{name}, _userId{++counter}
{
    
}
