#include "Employee.h"
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    std::string val = " ";
    if(rhs._department_type == DepartmentType::ACCOUNTS){
        val = "ACCOUNTS";
    }else if(rhs._department_type == DepartmentType::ADMIN){
        val = "ADMIN";
    }else if(rhs._department_type == DepartmentType::HR){
        val = "HR";
    }else if(rhs._department_type == DepartmentType::IT){
        val = "IT";
    }else{
        val = "SECURITY";
    }
    os << "_id: " << rhs._id<<std::endl
       << " _name: " << rhs._name<<std::endl
       << " _salary: " << rhs._salary<<std::endl
       << " _system: " << rhs._system<<std::endl
       << " _age: " << rhs._age<<std::endl
       << " _department_type: " <<val<<std::endl
       << " _experience_months: " << rhs._experience_months<<std::endl;
    return os;
}

Employee::Employee(int id, std::string name, float salary, SystemPointer system, int age, DepartmentType department_type, int experience_months):
_id{id},
_name{name},
_salary{salary},
_system{system},
_age{age},
_department_type{department_type},
_experience_months{experience_months}
{
}