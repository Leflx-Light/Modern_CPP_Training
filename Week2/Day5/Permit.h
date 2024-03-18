#ifndef PERMIT_H
#define PERMIT_H
#include<iostream>
#include "PermitType.h"

class Permit
{
private:
      std::string _serial_number;
      PermitType _type;
      int _duration_left;

public:
    Permit()=delete;
    Permit(const Permit&)=delete;
    Permit(Permit&&)=delete;
    Permit& operator=(const Permit&)=delete;
    Permit&& operator=(Permit&&)=delete;
    ~Permit()=default;

    Permit(std::string serial_number, PermitType type, int duration_left);

    std::string serialNumber() const { return _serial_number; }
    void setSerialNumber(const std::string &serial_number) { _serial_number = serial_number; }

    PermitType type() const { return _type; }
    void setType(const PermitType &type) { _type = type; }

    int durationLeft() const { return _duration_left; }
    void setDurationLeft(int duration_left) { _duration_left = duration_left; }

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);

    
};

#endif // PERMIT_H
