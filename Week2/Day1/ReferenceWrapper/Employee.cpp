#include "Employee.h"

Employee::Employee(std::string employeeid, std::string employeename, float employeesalary, std::reference_wrapper<Project> projectref):
_employee_id{employeeid}, _employee_name{employeename}, _employee_salary{employeesalary}, _project_ref{projectref}
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_employee_id: " << rhs._employee_id
       << " _employee_name: " << rhs._employee_name
       << " _employee_salary: " << rhs._employee_salary
       << " _project_ref: " << rhs._project_ref.get(); //using .get() you get the data inside _project_ref.
    return os;
}
