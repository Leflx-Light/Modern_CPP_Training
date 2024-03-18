#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "Car.h"
#include <ostream>

class ElectricCar:public Car
{
private:
     int _battery_capacity{0};
     float _time_to_change{0.0f};
     float _motor_power{0.0f};
     float _max_power{0.0f};
     float _range{0.0f};

public:
    ElectricCar() = default;
    ElectricCar(const ElectricCar&) = delete; //disabled copy constructor
    ElectricCar(ElectricCar&&) = delete; //  disabled move constructor   c++ brand new 
    ElectricCar& operator=(const ElectricCar&) = delete;  // deleted copy assignment operator
    ElectricCar& operator=(ElectricCar&&) = delete; // c++ brand new  deleted move assignment operator
    ~ElectricCar() = default;  //destructor enabled

    float Drive() override;
    void ShowElectricCarDetails();

    ElectricCar(std::string name, int acceleration, int top_speed, float price,
int battery_capacity, float time_to_change, float motor_power, float max_power, float range);

    int batteryCapacity() const { return _battery_capacity; }
    void setBatteryCapacity(int battery_capacity) { _battery_capacity = battery_capacity; }

    float timeToChange() const { return _time_to_change; }
    void setTimeToChange(float time_to_change) { _time_to_change = time_to_change; }

    float motorPower() const { return _motor_power; }
    void setMotorPower(float motor_power) { _motor_power = motor_power; }

    float maxPower() const { return _max_power; }
    void setMaxPower(float max_power) { _max_power = max_power; }

    float range() const { return _range; }
    void setRange(float range) { _range = range; }

    friend std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs);
};

#endif // ELECTRICCAR_H
