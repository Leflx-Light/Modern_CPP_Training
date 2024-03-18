#ifndef EVCAR_H_
#define EVCAR_H_
#include"ChasisType.h"
#include"FuelType.h"
#include <ostream>

class EvCar
{
private:
    int _id;
    ChasisType _chasisType;
    FuelType _fuelType;
    unsigned int _Fuel_Type_Capacity;

    /* data */
public:
    EvCar(const EvCar&)=delete;
    EvCar(EvCar&&)=default;
    EvCar& operator=(const EvCar&)=delete;
    EvCar& operator=(EvCar&&)=default;
    ~EvCar() =default;
    EvCar()=default;

    EvCar(int id,
    ChasisType chasisType,
    FuelType fuelType,
    unsigned int Fuel_Type_Capacity):
    _id{id},_chasisType{chasisType},_fuelType{fuelType},_Fuel_Type_Capacity{Fuel_Type_Capacity}{}

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    ChasisType chasisType() const { return _chasisType; }
    void setChasisType(const ChasisType &chasisType) { _chasisType = chasisType; }

    FuelType fuelType() const { return _fuelType; }
    void setFuelType(const FuelType &fuelType) { _fuelType = fuelType; }

    unsigned int fuelType_Capacity() const { return _Fuel_Type_Capacity; }
    void setFuel_Type_Capacity(unsigned int Fuel_Type_Capacity) { _Fuel_Type_Capacity = Fuel_Type_Capacity; }

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);

    

};


#endif // EVCAR_H_