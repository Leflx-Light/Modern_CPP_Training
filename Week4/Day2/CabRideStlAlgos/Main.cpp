#include "Functionalities.h"





int main(){

    std::cout<<"Function 1 : "<<std::endl;
    Container data;
    CreateObjects(data);


    std::cout<<"Function 2 : "<<std::endl;
    PrintInstancesPaymentModeCash(data);


    std::cout<<"Function 3 : "<<std::endl;
    std::cout<<FindAverageDistance(data, 2.5)<<std::endl;

    std::cout<<"Function 4: "<<std::endl;
    std::cout<<CountInstancesFareAtleast150(data);


    std::cout<<"Function 5: "<<std::endl;
    CheckPassengerCount(data);
}