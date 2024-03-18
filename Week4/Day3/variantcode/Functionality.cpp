#include "Functionality.h"

void CreateObjects(Container &data)
{
    data.push_back(
        std::make_shared<IceCar>(1,ChasisType::LADDER,BatteryType::NI_CAO,300)
    );
     data.push_back(
        std::make_shared<IceCar>(8,ChasisType::LADDER,BatteryType::NI_CAO,300)
    );
     data.push_back(
        std::make_shared<IceCar>(5,ChasisType::LADDER,BatteryType::NI_CAO,300)
    );
    data.push_back(
        std::make_shared<EvCar>(2,ChasisType::TABULAR,FuelType::DIESEL,250)
    );
    data.push_back(
        std::make_shared<EvCar>(2,ChasisType::TABULAR,FuelType::DIESEL,250)
    );
}

bool AtLeastIceCar(Container &data)
{
    return (std::any_of(data.begin(),
    data.end(),
    [](const Vtype & v){
        return (std::holds_alternative<IceCarPointer>(v));
    }
    ));
    // return true;
}

int CountInstanceOfIceCar(Container & data){

    int p=std::accumulate(data.begin(),data.end(),0,[](int p1,const Vtype& v){
        
        return p1+(std::holds_alternative<IceCarPointer>(v));
    });
    return p;

}

int ReturnContainer(Container& data,float BatteryCapacity){
    auto itr=std::find_if(data.begin(),data.end(),[](const Vtype & v){
        return(std::holds_alternative<EvCarPointer>(v));
    });
    return static_cast<int>(std::get<0>(*itr)->fuelType());
}

void DisplayTotalBatteryCapacity(Container& data){
    int p1=std::accumulate(
        data.begin(),
        data.end(),
        0,
        [](float p,const Vtype& v)
        {
            if(std::holds_alternative<IceCarPointer>(v))
            {
                IceCarPointer i=std::get<1>(v);
                return p+(i->batterCapacity());

            }
            else{
               return p;
            }

            
        }
    );
    std::cout<<"Total Battery Capacity is : "<<p1<<"\n";
}

void DisplayNthInstance(Container & data,int N){
    int n1=0;
    auto itr=std::find_if(data.begin(),
    data.end(),
    [&](Vtype& v){
        n1++;
        return (n1==N);

    });
            if(std::holds_alternative<IceCarPointer>(*itr)){
        std::cout<<*(std::get<1>(*itr));

    }
    else{
         std::cout<<*(std::get<0>(*itr));
    }     
        
    
   
}
