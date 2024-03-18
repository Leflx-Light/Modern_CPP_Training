#include "Functionalities.h"


int main(){
    Container data;
    createobjects(data);
    std::cout<<"Average : "<<FindAverageTopSpeeds(data)<<std::endl;
    std::cout<<"Highest Range : "<<ReturnHighestRangeValue(data)<<std::endl;

}