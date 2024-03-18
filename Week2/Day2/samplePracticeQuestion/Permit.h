#ifndef PERMIT_H
#define PERMIT_H
#include<iostream>
#include "PermitType.h"

class Permit
{
private:
   std::string _serial_number;
   PermitType _permit_type;
   unsigned long _permit_duration_left;

public:
    Permit()=delete;
    Permit(const Permit&)=delete;
    const Permit& operator=(const Permit&)=delete;
    Permit(Permit&&)=delete;
    Permit&& operator=(Permit&&)=delete;
    ~Permit() =default;

    //parameterized constructor:
    Permit(std::string serialnumber, PermitType permittype, unsigned long permitdurationleft );

    //getters and setters:
    std::string serialNumber() const { return _serial_number; }
    void setSerialNumber(const std::string &serial_number) { _serial_number = serial_number; }

    PermitType permitType() const { return _permit_type; }
    void setPermitType(const PermitType &permit_type) { _permit_type = permit_type; }

    unsigned long permitDurationLeft() const { return _permit_duration_left; }
    void setPermitDurationLeft(unsigned long permit_duration_left) { _permit_duration_left = permit_duration_left; }

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);

    
};

#endif // PERMIT_H
