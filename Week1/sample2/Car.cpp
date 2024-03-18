#include "Car.h"



/*
   constructor delegation : use multiple constructors of THE SAME CLASS together to make the object.
*/

// WE  CANNOT USE DELEGATED CONSTRUCTORS AND MEMBER LIST INITIALIZATION IN THE SAME CONSTRUCTOR.
Car::Car(std::string id, std::string model, Engine *engine, CarType ctype): _id{id}, _model{model}, _engine{engine}, _type{ctype}
{
      
}


Car::Car(std::string id, float price, std::string model, Engine *engine, CarType ctype): Car(id, model, engine,ctype)
{
     _price = price;
}





std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_id: " << rhs._id
       << " _price: " << rhs._price
       << " _model: " << rhs._model
       << " _engine: " << *rhs._engine;
    return os;
}
