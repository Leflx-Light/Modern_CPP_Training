#ifndef PATIENT_H
#define PATIENT_H
#include<iostream>
#include "PatientType.h"
class Patient
{
private:
    std::string _patient_id;
    int _patient_age;
    PatientType _patient_type;

public:
    Patient()=delete;
    Patient(const Patient&)=delete;
    Patient(Patient&&)=delete;
    Patient& operator=(const Patient&)=delete;
    Patient&& operator=(Patient&&)=delete;
    ~Patient()= default;

     Patient(std::string patientid, int patientage, PatientType patienttype);

   //getters and setters.
    std::string patientId() const { return _patient_id; }
    void setPatientId(const std::string &patient_id) { _patient_id = patient_id; }

    int patientAge() const { return _patient_age; }
    void setPatientAge(int patient_age) { _patient_age = patient_age; }

    PatientType patientType() const { return _patient_type; }
    void setPatientType(const PatientType &patient_type) { _patient_type = patient_type; }

    friend std::ostream &operator<<(std::ostream &os, const Patient &rhs);

    
};

#endif // PATIENT_H
