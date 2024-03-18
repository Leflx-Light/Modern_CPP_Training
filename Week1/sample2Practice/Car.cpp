#include "Car.h"
#include "CarType.h"


std::ostream &operator<<(std::ostream &os, const Car &rhs) {
  std::string val{""};
  if(rhs._type == CarType::SEDAN){
    val = "SUDEN";
  }
  else if(rhs._type == CarType::SUV){
    val = "SUV";
  }
  else{
    val = "HATCHBACK";
  }
    os << "_id: " << rhs._id
       << " _price: " << rhs._price
       << " _model: " << rhs._model
       << " _engine: " << rhs._engine
       << " _type:"<<val;
    return os;
}



Car::Car(std::string id, std::string model, Engine *engine, CarType type):
_id{id}, _model{model}, _engine{engine}, _type{type}
{
}

Car::Car(std::string id, float price, std::string model, Engine *engine, CarType type):
Car(id,model,engine,type)
{
    _price = price;
}
