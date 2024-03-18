#ifndef DIESELCAR_H
#define DIESELCAR_H
#include<iostream>

class DieselCar
{
private:
     std::string _name;
     int _acceleration;
     float _top_speed;
     float _ex_showroom_price;
     int _diesel_capacity;
     int _mileage;
public:
    DieselCar()=default;
    DieselCar(const DieselCar&)=delete;
    DieselCar(DieselCar&&)=delete;
    DieselCar& operator=(DieselCar&)=delete;
    DieselCar&& operator = (DieselCar&&)=delete;
    ~DieselCar()=default;

    DieselCar(std::string name, int acceleration, float topspeed, float exshowroomprice, int dieselcapacity, int mileage);

    friend std::ostream &operator<<(std::ostream &os, const DieselCar &rhs);

    void Drive();

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    int acceleration() const { return _acceleration; }
    void setAcceleration(int acceleration) { _acceleration = acceleration; }

    int topSpeed() const { return _top_speed; }
    void setTopSpeed(int top_speed) { _top_speed = top_speed; }

    float exShowroomPrice() const { return _ex_showroom_price; }
    void setExShowroomPrice(float ex_showroom_price) { _ex_showroom_price = ex_showroom_price; }

    int dieselCapacity() const { return _diesel_capacity; }
    void setDieselCapacity(int diesel_capacity) { _diesel_capacity = diesel_capacity; }

    int mileage() const { return _mileage; }
    void setMileage(int mileage) { _mileage = mileage; }


};

#endif // DIESELCAR_H
