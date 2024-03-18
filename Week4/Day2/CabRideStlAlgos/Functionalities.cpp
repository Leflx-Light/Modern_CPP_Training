#include "Functionalities.h"
#include<algorithm>
#include<numeric>

void CreateObjects(Container &data)
{
    data[0]= std::make_shared<CabRide>("c101",200,PaymentType::CASH,12,4,"Ramesh",2.3,12);
    data[1]= std::make_shared<CabRide>("c102",100,PaymentType::UPI,17,2,"Rinku",4.3,12);
    data[2]= std::make_shared<CabRide>("c103",300,PaymentType::CASH,22,1,"Vishal",3.3,12);
    data[3]= std::make_shared<CabRide>("c104",500,PaymentType::CARD,27,5,"Aditya",4.9,12);
    data[4]= std::make_shared<CabRide>("c105",900,PaymentType::CASH,10,1,"Purvak",5.0,12);

    std::cout<<"Objects Created Successfully !!!"<<std::endl;
}

void PrintInstancesPaymentModeCash(Container &data)
{
   std::vector<CabRidePointer>result(data.size());

    auto itr = std::copy_if(
         data.begin(),
         data.end(),
         result.begin(),
         [&](const CabRidePointer& ptr){
                return ptr->paymentType() == PaymentType::CASH;
         }
    );

    result.resize(std::distance(result.begin(),itr));

    for(CabRidePointer &ptr : result){
        std::cout<<*ptr;
        std::cout<<std::endl;
    }
}

float FindAverageDistance(Container &data, float rating)
{
    int count=0;
    float sum = std::accumulate(
         data.begin(),
         data.end(),
         0.0f,
         [&](float answer_upto_current_position, const CabRidePointer& ptr){
            if(rating < ptr->driverRating()){
                 count++;
                 return answer_upto_current_position + ptr->distance();
            }else{
                return answer_upto_current_position;
            }
            
         }
    );
   
    return sum/count;
}

int CountInstancesFareAtleast150(Container &data)
{
   auto itr = std::count_if(
       data.begin(),
       data.end(),
       [](const CabRidePointer& ptr){
          return ptr->fare() >= 150;
       }
   );

   return itr;
}

void CheckPassengerCount(Container &data)
{
    auto itr = std::all_of(
        data.begin(),
        data.end(),
        [](const CabRidePointer& ptr){
             return ptr->passengerCount() > 4;
        }
    );


   std::cout<<itr<<std::endl;
}
