#include "Functionalities.h"
#include<iostream>

void CreateObjects(std::vector<Doctor *> &data)
{
    data[0] = new Doctor("d101",7000,DoctorSpeciality::CARDIOLOGIST,new Patient("p101",23,PatientType::REGULAR));
    data[1] = new Doctor("d102",4000,DoctorSpeciality::DERMATOLOGIST,new Patient("p102",21,PatientType::NEW));
    data[2] = new Doctor("d103",6000,DoctorSpeciality::NEUROLOGIST,new Patient("p103",19,PatientType::REGULAR));
    data[3] = new Doctor("d104",3000,DoctorSpeciality::CARDIOLOGIST,new Patient("p104",20,PatientType::NEW));
}



int FindInstancesDoctorFeesOver5000(std::vector<Doctor *> &data)
{
    if(data.empty()){
        throw std::runtime_error("No data");
    }
    int count =0;
    for(Doctor *d : data){
        if(d->doctorFees()>5000){
            count++;
        }
    }

    return count;
}

bool HasAnyDoctorSpecialityInCardiologist(std::vector<Doctor *> &data)
{
   if(data.empty()){
        throw std::runtime_error("No data");
    }

   for(Doctor *d : data){
     if(d->doctorSpeciality() == DoctorSpeciality::CARDIOLOGIST){
        return true;
     }
   }

   return false;
}

float FindAverageOfPatientAges(std::vector<Doctor *> &data)
{

      if(data.empty()){
        throw std::runtime_error("No data");
      }

     float sum=0.0f;
     for(Doctor *d : data){
        sum += d->doctorCurrentPatient()->patientAge();
     }

     return sum/sizeof(data);
}

void DisplayLastNInstances(std::vector<Doctor *> &data,int N)
{
      if(data.empty()){
        throw std::runtime_error("No data");
    }


    if(N > data.size()){
        throw std::runtime_error("Error");
    }
    
    int size = data.size();

    for(int i = size;i>=1;i--){
        std::cout<<data[i];
    } 
}
