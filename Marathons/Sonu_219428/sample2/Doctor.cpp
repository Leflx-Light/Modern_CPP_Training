#include "Doctor.h"

std::ostream &operator<<(std::ostream &os, const Doctor &rhs) {
    os << "_doctor_id: " << rhs._doctor_id
       << " _doctor_fees: " << rhs._doctor_fees
       << " _doctor_current_patient: " << rhs._doctor_current_patient;
    return os;
}

Doctor::Doctor(std::string doctorid, float doctorfees, DoctorSpeciality doctorspeciality, Patient *patient):
_doctor_id{doctorid},_doctor_fees{doctorfees}, _doctor_speciality{doctorspeciality},_doctor_current_patient{patient}
{
}