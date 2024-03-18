#include "Functionalities.h"
#include "EmptyClassException.h"
#include "IdNotFoundException.h"
void CreateObjects(Container &data)
{
    data[0]= new Car("c101",7790000.0f,"Dzire", new Engine(300,100), CarType::SEDAN);
    data[1]= new Car("c102",7590000.0f,"Honda City", new Engine(270,100), CarType::SEDAN);
    data[2]= new Car("c103",7190000.0f,"Nexon", new Engine(320,100), CarType::HATCHBACK);
}

void DeleteObjects(const Container &data)
{
    if(data.empty()){
          throw EmptyClassException("Container is Empty");
    }

    for(Car *c : data){
        delete c->engine();
        delete c;
    }
}

int TotalHorsePower(const Container &data)
{   
    if(data.empty()){
         throw EmptyClassException("Container is Empty");
    }
     int total = 0;
    for(Car *c : data){
        total += c->engine()->horspower();
    }
    return total;
}

bool IsContainerAllAbove700000(const Container &data)
{
     if(data.empty()){
          throw EmptyClassException("Container is Empty");
     }

     for(Car* c: data){
        if(c->price()<=700000){
            return false;
        }

     }

        return true;
}

Engine *EnginePointerToMinPriceCar(const Container &data)
{   
    if(data.empty()){
        throw EmptyClassException("Container is Empty");

    }
    float min_price = data[0]->price();
    Engine *e = data[0]->engine();
    for(Car *c : data){
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
          throw EmptyClassException("Container is Empty");
    }

    float total_value = 0.0f;

    for(Car *c : data){
        total_value += c->engine()->torque();
    }

    return total_value/data.size();


}

std::string FindCarModelById(const Container &data, std::string carId)
{
    
    if(data.empty()){
        throw EmptyClassException("Container is Empty");
    }

    for(Car * c : data){
        if(c->id() == carId){
             return c->model();
        }
    }

    throw IdNotFoundException("Id not Found");
}
