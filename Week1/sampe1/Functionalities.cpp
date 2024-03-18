#include "Functionalities.h"
#include "ElectricCar.h"

void CreateObjects(std::vector<Car*> &data){
   // Car* c1 = new ElectricCar("NexonEv",80,340,187000.00f,33,2,300,600,320);
    data.push_back(
        // saving 8 bytes memory saved optimized.
        new ElectricCar("NexonEv",80,340,187000.00f,33,2,300,600,320)
    );

     data.push_back(
        // saving 8 bytes memory saved optimized.
        new ElectricCar("XUV400",70,240,145000.00f,31,2,100,500,300)
    );
}

void DeleteObjects(std::vector<Car *> &data)
{
    // for(int i=0;i<data.size();i++){
    //     delete data[i];
    // }
    //modern: -- range based loop : forEach loop
    for(Car *p : data){
        delete p;
    }
}
