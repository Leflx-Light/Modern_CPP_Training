#include "CabRide.h"
std::ostream &operator<<(std::ostream &os, const CabRide &rhs) {
    std::string val = " ";
    if(rhs._payment_type == PaymentType::CARD){
        val = "CARD";
    }else if(rhs._payment_type == PaymentType::CASH){
        val = "CASH";
    }else{
        val = "UPI";
    }
    os << "_id: " << rhs._id<<std::endl
       << " _fare: " << rhs._fare<<std::endl
       << " _payment_type: " << val<<std::endl
       << " _distance: " << rhs._distance<<std::endl
       << " _passenger_count: " << rhs._passenger_count<<std::endl
       << " _driver_name: " << rhs._driver_name<<std::endl
       << " _driver_rating: " << rhs._driver_rating<<std::endl
       << " _gst_amount: " << rhs._gst_amount<<std::endl;
    return os;
}

CabRide::CabRide(std::string id, float fare, PaymentType payment_type, float distance, int passenger_count, std::string driver_name, float driver_rating, float gst_amount):
_id{id},
_fare{fare},
_payment_type{payment_type},
_distance{distance},
_passenger_count{passenger_count},
_driver_name{driver_name},
_driver_rating{driver_rating},
_gst_amount{gst_amount}
{
}