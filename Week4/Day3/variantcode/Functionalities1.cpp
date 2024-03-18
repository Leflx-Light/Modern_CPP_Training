#include "Functionalities1.h"

void CreateObjects(VContainer &data)
{
    data.push_back(std::make_shared<EvCar>(1,ChasisType::LADDER,FuelType::PETROL,23));
    data.push_back(std::make_shared<EvCar>(2,ChasisType::TABULAR,FuelType::DIESEL,33));
    data.push_back(std::make_shared<EvCar>(3,ChasisType::LADDER,FuelType::DIESEL,43));
    data.push_back(std::make_shared<EvCar>(4,ChasisType::TABULAR,FuelType::PETROL,20));
    data.push_back(std::make_shared<EvCar>(5,ChasisType::LADDER,FuelType::PETROL,25));

    data.push_back(std::make_shared<IceCar>(1,ChasisType::LADDER,BatteryType::LI_ION,23));
    data.push_back(std::make_shared<IceCar>(2,ChasisType::TABULAR,BatteryType::LI_ION,13));
    data.push_back(std::make_shared<IceCar>(3,ChasisType::TABULAR,BatteryType::NI_CAO,43));
    data.push_back( std::make_shared<IceCar>(4,ChasisType::TABULAR,BatteryType::NI_CAO,29));
    data.push_back(std::make_shared<IceCar>(5,ChasisType::LADDER,BatteryType::LI_ION,21));

    std::cout<<"Objects Created Successfully !!"<<std::endl;
}

bool FindAtleastIceCar(VContainer &data)
{
    return std::any_of(
         data.begin(),
         data.end(),
         [](const VType &v ){
             return std::holds_alternative<IceCarPointer>(v);
         }
    );
}

int CountInstancesIceCar(VContainer &data)
{
     return std::count_if(
          data.begin(),
          data.end(),
          [](const VType &v){
              return std::holds_alternative<IceCarPointer>(v);
          }
     );
}

VType ReturnInstance(VContainer &data, float battery_capacity)
{
    auto itr = std::find_if(
          data.begin(),
          data.end(),
          [&](const VType &v){
              if(std::holds_alternative<IceCarPointer>(v))
              {
                IceCarPointer ptr=std::get<1>(v);
                 return ptr->batterCapacity()== battery_capacity;
              }
              return false;
          }      
    );

    return *itr;
}
