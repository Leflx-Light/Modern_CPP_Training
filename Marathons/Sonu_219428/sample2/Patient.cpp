#include "Patient.h"
std::ostream &operator<<(std::ostream &os, const Patient &rhs) {
    os << "_patient_id: " << rhs._patient_id
       << " _patient_age: " << rhs._patient_age;
   
    return os;
}

Patient::Patient(std::string patientid, int patientage, PatientType patienttype):
_patient_id{patientid}, _patient_age{patientage}, _patient_type{patienttype}
{
}