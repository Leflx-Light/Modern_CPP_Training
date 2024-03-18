#include "Functionalities.h"
#include "EmptyContainerException.h"
#include "IdNotFoundException.h"

void CreateObjects(Container &data)
{
    
    data[0] = std::make_shared<Car>(
        "c101", 
        779000.0f,
        "Dzire",
        std::make_shared<Engine>(300,110),
        CarType::SEDAN
        );

        data[1] = std::make_shared<Car>(
        "c102", 
        789000.0f,
        "Honda City",
        std::make_shared<Engine>(400,120),
        CarType::SEDAN
        );

        data[2] = std::make_shared<Car>(
        "c103", 
        979000.0f,
        "Nexon",
        std::make_shared<Engine>(320,140),
        CarType::SEDAN
        );
}

// void DeleteObjects(const Container &data)
// {
//      if(data.empty()){
//         throw EmptyContainerException("Data is empty");
//     }

//     for(CarPointer& c : data){
//         delete c->engine(); // due to comoposition rule.
//         delete c;
//     }
// }

int TotalHorsepower(const Container &data)
{
      if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }

    int  total = 0;
    for(const CarPointer& c : data){
        total += c->engine()->horsepower();
    }
    return total;
}

bool IsContainerAllCarAbove700000(const Container &data)
{
     if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }
    
    for(const CarPointer& c : data){
       if(c->price()<=700000.0f){
        return false;
       }
    }


    return true; // reaching this point means, no car has price below 7 lacs.
} 

Engine *EnginePointerToMinPriceCar(const Container &data)
{
     if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }
   
   //assume the first data value as your min
   
   float min_price = data[0]->price();
   Engine* e = data[0]->engine();

   for(const CarPointer& c: data){
    if(c->price()< min_price){
        min_price = c->price();
        e = c->engine();
    }
   }


    return e;
}

float AverageEngineTorque(const Container &data)
{
     if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }
     float total_value {0.0f};
    for(const CarPointer& c: data){
         total_value += c->engine()->torque();
    }
    return total_value/data.size();
}

std::string FindCarModelById(const Container &data, const std::string carId)
{
     if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }

    for(const CarPointer& c: data){
        if(c->id()== carId){
            return c->model();
        }
    }

    throw IdNotFoundException("Id not found");


}
