#ifndef DOCTOR_H
#define DOCTOR_H
#include<iostream>
#include "Patient.h"
#include "DoctorSpeciality.h"
class Doctor
{
private:
      std::string _doctor_id;
      float _doctor_fees;
      DoctorSpeciality _doctor_speciality;
      Patient* _doctor_current_patient;

public:
    Doctor()=delete;
    Doctor(const Doctor&)=delete;
    Doctor(Doctor&&)=delete;
    Doctor& operator=(const Doctor&)=delete;
    Doctor&& operator=(Doctor&&)=delete;
    ~Doctor()= default;

    Doctor(std::string doctorid, float doctorfees, DoctorSpeciality doctorspeciality,Patient* patient);

    std::string doctorId() const { return _doctor_id; }
    void setDoctorId(const std::string &doctor_id) { _doctor_id = doctor_id; }

    float doctorFees() const { return _doctor_fees; }
    void setDoctorFees(float doctor_fees) { _doctor_fees = doctor_fees; }

    DoctorSpeciality doctorSpeciality() const { return _doctor_speciality; }
    void setDoctorSpeciality(const DoctorSpeciality &doctor_speciality) { _doctor_speciality = doctor_speciality; }

    Patient* doctorCurrentPatient() const { return _doctor_current_patient; }
    void setDoctorCurrentPatient(Patient* doctor_current_patient) { _doctor_current_patient = doctor_current_patient; }

    friend std::ostream &operator<<(std::ostream &os, const Doctor &rhs);

    
};

#endif // DOCTOR_H
