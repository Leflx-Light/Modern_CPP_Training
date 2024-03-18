#include "Functionalities.h"



void createobjects(Container &data){
    data[0]=std::make_shared<CarRide>(12,CarRideType::LOCAL,PaymentMode::CARD,2345.23,"locationA","locationD");
    data[1]=std::make_shared<CarRide>(12,CarRideType::OUTSTATION,PaymentMode::UPI,2345.23,"locationA","locationD");
    data[2]=std::make_shared<CarRide>(12,CarRideType::RENT,PaymentMode::CARD,2345.23,"locationC","locationD");
    data[3]=std::make_shared<CarRide>(12,CarRideType::LOCAL,PaymentMode::WALLET,2345.23,"locationA","locationE");
}

CarRideType ReturnPassingId(Container &data, std::variant<int, std::string> id){
    CarRideType val;

    for(CarRidePointer ptr : data){
        if(id == ptr->id()){
            val =  ptr->type();
        }
    }

    return val;
}


ModeArray ReturnPaymentModeMaxMinFare(Container &data)
{
    ModeArray arr;

    PaymentMode minMode;
    PaymentMode maxMode;
    float minFare = 100000000;
    float maxFare = -1;

    for(CarRidePointer ptr : data){
         if(minFare > ptr->fare()){
            minFare = ptr->fare(); 
            minMode = ptr->paymentMode();
         }
    }

       for(CarRidePointer ptr : data){
           if(maxFare > ptr->fare()){
            maxFare = ptr->fare();
            maxMode = ptr->paymentMode();
           }
         }

    arr[0] = minMode;
    arr[1]= maxMode;

    return arr;
    }

  
