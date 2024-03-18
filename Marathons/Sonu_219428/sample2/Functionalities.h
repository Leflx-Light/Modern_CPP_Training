#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include<vector>
#include "Doctor.h"
#include "Patient.h"
#include "DoctorSpeciality.h"
#include "PatientType.h"



void CreateObjects(std::vector<Doctor*> &data);
void DeleteObjects(std::vector<Doctor*>&data);

int  FindInstancesDoctorFeesOver5000(std::vector<Doctor*>&data);
bool HasAnyDoctorSpecialityInCardiologist(std::vector<Doctor*>&data);
float FindAverageOfPatientAges(std::vector<Doctor*>&data);

void DisplayLastNInstances(std::vector<Doctor*>&data,int N);

#endif // FUNCTIONALITIES_H
