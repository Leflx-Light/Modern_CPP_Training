#ifndef ICECAR_H_
#define ICECAR_H_
#include"BatteryType.h"
#include"ChasisType.h"
#include <iostream>


class IceCar
{
private:
    int _id;
    ChasisType _chasisType;
    BatteryType _batteryType;
    float _batterCapacity;

    /* data */
public:
    IceCar(const IceCar&)=default;
    IceCar(IceCar&&)=default;
    IceCar& operator=(const IceCar&)=default;
    IceCar& operator=(IceCar&&)=default;
    ~IceCar() =default;
    IceCar()=default;

    IceCar(int id,
    ChasisType chasisType,
    BatteryType batteryType,
    float batterCapacity)
    :_id{id},_chasisType{chasisType},_batteryType{batteryType},_batterCapacity{batterCapacity}   {
    }

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    ChasisType chasisType() const { return _chasisType; }
    void setChasisType(const ChasisType &chasisType) { _chasisType = chasisType; }

    BatteryType batteryType() const { return _batteryType; }
    void setBatteryType(const BatteryType &batteryType) { _batteryType = batteryType; }

    float batterCapacity() const { return _batterCapacity; }
    void setBatterCapacity(float batterCapacity) { _batterCapacity = batterCapacity; }

    friend std::ostream &operator<<(std::ostream &os, const IceCar &rhs);
   
};


#endif // ICECAR_H_