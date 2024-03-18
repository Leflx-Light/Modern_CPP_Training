#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H
#include<iostream>
#include<memory>
#include "TouristVehicleType.h"
#include "Permit.h"

using Pointer = std::shared_ptr<Permit>;
using RefType = std::reference_wrapper<Pointer>;

class TouristVehicle
{
private:
       std::string _name;
       TouristVehicleType _type;
       int _booking_charge;
       RefType _ref;

public:
    TouristVehicle()=delete;
    TouristVehicle(const TouristVehicle&)=delete;
    TouristVehicle(TouristVehicle&&)=delete;
    TouristVehicle& operator=(const TouristVehicle&)=delete;
    TouristVehicle&& operator=(TouristVehicle&&)=delete;
    ~TouristVehicle()=default;

    //parameterized constructor:
    TouristVehicle(std::string name, TouristVehicleType type, int booking_charges, RefType ref);

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    TouristVehicleType type() const { return _type; }
    void setType(const TouristVehicleType &type) { _type = type; }

    int bookingCharge() const { return _booking_charge; }
    void setBookingCharge(int booking_charge) { _booking_charge = booking_charge; }

    RefType ref() const { return _ref; }
    void setRef(const RefType &ref) { _ref = ref; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);

    

};

#endif // TOURISTVEHICLE_H
