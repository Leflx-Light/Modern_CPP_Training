#include<iostream>
#include "Doctor.h"
#include "Patient.h"
#include "Functionalities.h"
#include<iostream>
#include<vector>


int main(){
    std::vector<Doctor*> data;
    try{
        CreateObjects(data);
        std::cout<<"-----------------------"<<std::endl;
        std::cout<<FindAverageOfPatientAges(data);

    }catch(std::exception &e){
        std::cout<<"Error"<<"\n";
    }

}