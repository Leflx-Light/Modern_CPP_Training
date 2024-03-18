#ifndef CAR_H
#define CAR_H
#include<iostream>
class Car
{
private:
       std::string _name {""};
       int _acceleration {0};
       int _top_speed {0};
       float _ex_showroom_price {0.0f};
public:

  // default constructor enable:
    Car() = default;
    Car(const Car&) = delete; //disabled copy constructor
    Car(Car&&) = delete; //  disabled move constructor   c++ brand new 
    Car& operator=(const Car&) = delete;  // deleted copy assignment operator
    Car& operator=(Car&&) = delete; // c++ brand new  deleted move assignment operator
    virtual ~Car() = default;  //destructor enabled


    Car(std::string name, int acceleration, int top_speed, float price);

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    int acceleration() const { return _acceleration; }
    void setAcceleration(int acceleration) { _acceleration = acceleration; }

    int topSpeed() const { return _top_speed; }
    void setTopSpeed(int top_speed) { _top_speed = top_speed; }

    float exShowroomPrice() const { return _ex_showroom_price; }
    void setExShowroomPrice(float ex_showroom_price) { _ex_showroom_price = ex_showroom_price; }
    
    // to generate << operator : 1. ctrl + shift+ p    2. type stream  3. select data_members 4. select file to include.
    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    virtual float Drive()=0;
    

};

#endif // CAR_H
