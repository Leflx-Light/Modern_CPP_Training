#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "Engine.h"
#include "CarType.h"


class Car
{
private:
    std::string _id;
    float _price;
    std::string _model;
    Engine* _engine;
    CarType _type;
public:
    Car()=delete;
    Car(const Car&) = default;
    Car(Car&&) = delete;
    Car& operator=(const Car&) = delete;
    Car&& operator=(Car&&) = delete;
    ~Car() {}

    Car(std::string id, float price, std::string model, Engine* engine,  CarType ctype);
    Car(std::string id, std::string model, Engine* engine,  CarType ctype);

    std::string id() const { return _id; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }

    std::string model() const { return _model; }

    Engine* engine() const { return _engine; }
    void setEngine(Engine* engine) { _engine = engine; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
    
};

#endif // CAR_H
