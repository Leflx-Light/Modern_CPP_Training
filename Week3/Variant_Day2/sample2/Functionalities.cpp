#include "Functionalities.h"




void createobjects(Container &data)
{
    data[0] = std::make_shared<ElectricCar>("NexonEv",80,100,700000,33,2,300,600,320);
    data[1] = std::make_shared<DieselCar>("Desize",50,180,600000,20,50);
    data[2] = std::make_shared<ElectricCar>("Tesla",90,200,900000,83,1,700,800,620);
    data[3] = std::make_shared<DieselCar>("Maruti",20,70,200000,24,50);
    
    std::cout<<"Objects created successfully"<<std::endl;
}


// top speed is common in both classes.
float FindAverageTopSpeeds(Container &data)
{
    float sum =0.0f;
    for(VType v: data){
        std::visit(
            [&](auto&& val){
                sum += val->topSpeed();
            },
            v
        );
    }

    return sum/data.size();
}


float ReturnHighestRangeValue(Container &data){
    float HighestRange = 0.0f;

    for(VType v:data){
        if(std::holds_alternative<ElectricCarPointer>(v)){
            ElectricCarPointer ptr = std::get<0>(v);
            if(HighestRange < ptr->range()){
                HighestRange = ptr->range();
            }
        }
    }

    return HighestRange;
}

CarRideType ReturnPassingId(Container &data, std::variant<int, std::string> id)
{
    CarRideType result;
}


