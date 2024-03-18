#include"Functionalities1.h"
int main(){
    VContainer data;
    CreateObjects(data);
    std::cout<<"True or False : "<<FindAtleastIceCar(data)<<std::endl;
    std::cout<<"Count IceCar Instances : "<<CountInstancesIceCar(data)<<std::endl;
    VType result=ReturnInstance(data,13);
    std::cout<<"The instance returned is "<<std::get<1>(result);
    
}
/*
optional practice

notify
singalton class
conditional variable

future and optional v important
composition 
mute and lock guards (2 threads in same memory)
cv in notify another thread


*/