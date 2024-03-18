#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "Engine.h"
#include "CarType.h"
#include<string>

class Car
{
private:
    std::string _id;
    float _price;
    std::string _model;
    Engine* _engine;
    CarType _type; 

public:
    Car()=delete; //default constructor
    Car(const Car&)=delete; //copy constructor.
    Car(const Car&&)=delete;
    Car& operator=(const Car&)= delete;
    Car& operator=(const Car&&)=delete;
    ~Car()=default;
    Car(std::string id, float price, std::string model, Engine* engine, CarType type);
    Car(std::string id, std::string model, Engine* engine, CarType type);

    std::string id() const { return _id; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }

    std::string model() const { return _model; }

    Engine* engine() const { return _engine; }
    void setEngine(Engine* engine) { _engine = engine; }

    CarType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    
};

#endif // CAR_H
