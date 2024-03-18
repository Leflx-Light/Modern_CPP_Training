#ifndef CABRIDE_H
#define CABRIDE_H
#include "PaymentType.h"
#include<iostream>

class CabRide
{
private:
     std::string _id;
     float _fare;
     PaymentType _payment_type;
     float _distance;
     int _passenger_count;
     std::string _driver_name;
     float _driver_rating;
     float _gst_amount;

public:
    CabRide()=delete;
    CabRide(const CabRide&)=delete;
    CabRide(CabRide&&)=delete;
    CabRide& operator=(const CabRide&)=delete;
    CabRide&& operator=(CabRide&&)=delete;
    ~CabRide() =default;

    CabRide(std::string id, float fare, PaymentType payment_type, float distance, int passenger_count, std::string driver_name, float driver_rating, float gst_amount);

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    float fare() const { return _fare; }
    void setFare(float fare) { _fare = fare; }

    PaymentType paymentType() const { return _payment_type; }
    void setPaymentType(const PaymentType &payment_type) { _payment_type = payment_type; }

    float distance() const { return _distance; }
    void setDistance(float distance) { _distance = distance; }

    int passengerCount() const { return _passenger_count; }
    void setPassengerCount(int passenger_count) { _passenger_count = passenger_count; }

    std::string driverName() const { return _driver_name; }
    void setDriverName(const std::string &driver_name) { _driver_name = driver_name; }

    float driverRating() const { return _driver_rating; }
    void setDriverRating(float driver_rating) { _driver_rating = driver_rating; }

    float gstAmount() const { return _gst_amount; }
    void setGstAmount(float gst_amount) { _gst_amount = gst_amount; }

    friend std::ostream &operator<<(std::ostream &os, const CabRide &rhs);

    
};

#endif // CABRIDE_H
