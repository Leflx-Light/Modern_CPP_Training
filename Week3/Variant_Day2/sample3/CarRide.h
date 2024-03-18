#ifndef CARRIDE_H
#define CARRIDE_H
#include "CarRideType.h"
#include "PaymentMode.h"
#include <iostream>
#include<variant>

class CarRide
{
private:
     std::variant<int,std::string> _id;
     CarRideType _type;
     PaymentMode _payment_mode;
     float _fare;
     std::string _drop_location;
     std::string _pickup_location;

public:
     CarRide()=delete;
     CarRide(const CarRide&)=delete;
     CarRide(CarRide&&)=delete;
     CarRide& operator=(const CarRide&)=delete;
     CarRide&& operator=(CarRide&&)=delete;
     ~CarRide() =default;
      
      CarRide(std::variant<int,std::string> id, CarRideType type, PaymentMode payment_mode, float fare, std::string drop_location, std::string pickup_location);

      friend std::ostream &operator<<(std::ostream &os, const CarRide &rhs);

      std::string DisplayCarRideType(CarRideType type);
      std::string DisplayPaymentMode(PaymentMode mode);

      std::variant<int,std::string> id() const { return _id; }
      void setId(const std::variant<int,std::string> &id) { _id = id; }

      CarRideType type() const { return _type; }
      void setType(const CarRideType &type) { _type = type; }

      PaymentMode paymentMode() const { return _payment_mode; }
      void setPaymentMode(const PaymentMode &payment_mode) { _payment_mode = payment_mode; }

      float fare() const { return _fare; }
      void setFare(float fare) { _fare = fare; }

      std::string dropLocation() const { return _drop_location; }
      void setDropLocation(const std::string &drop_location) { _drop_location = drop_location; }

      std::string pickupLocation() const { return _pickup_location; }
      void setPickupLocation(const std::string &pickup_location) { _pickup_location = pickup_location; }

};

#endif // CARRIDE_H
