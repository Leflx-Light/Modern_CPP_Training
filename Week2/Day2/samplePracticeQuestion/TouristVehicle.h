#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H
#include<iostream>
#include<memory>
#include "TouristVehicleType.h"
#include "Permit.h"

using PermitPointer = std::shared_ptr<Permit>;
class TouristVehicle
{
private:
    std::string _number;
    TouristVehicleType _type;
    unsigned short _seat_count;
    float _per_hour_booking_charge;
    PermitPointer _permit;
    
public:
    TouristVehicle()=delete;
    TouristVehicle(const TouristVehicle&)=delete;
    const TouristVehicle& operator=(const TouristVehicle&)=delete;
    TouristVehicle(TouristVehicle&&)=delete;
    TouristVehicle&& operator=(TouristVehicle&&)=delete;
    ~TouristVehicle() =default;

    //parameterized constructor:
    TouristVehicle(std::string number, TouristVehicleType type, unsigned short seatcount, float perhourbookingcharge, PermitPointer permit);


   //getters and setters: 
    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    TouristVehicleType type() const { return _type; }
    void setType(const TouristVehicleType &type) { _type = type; }

    unsigned short seatCount() const { return _seat_count; }
    void setSeatCount(unsigned short seat_count) { _seat_count = seat_count; }

    float perHourBookingCharge() const { return _per_hour_booking_charge; }
    void setPerHourBookingCharge(float per_hour_booking_charge) { _per_hour_booking_charge = per_hour_booking_charge; }

    PermitPointer permit() const { return _permit; }
    void setPermit(const PermitPointer &permit) { _permit = permit; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);

   
   
   
};

#endif // TOURISTVEHICLE_H
