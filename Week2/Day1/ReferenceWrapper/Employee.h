#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Project.h"
#include<iostream>
#include<cstring>
#include<functional>


class Employee
{
private:
       std::string _employee_id;
       std::string _employee_name;
       float _employee_salary;
       std::reference_wrapper<Project> _project_ref;
public:
    Employee()=delete;
    Employee(const Employee&)=delete;
    Employee& operator=(const Employee&)=delete;
    Employee&& operator=(const Employee&&)=delete;
    Employee(Employee&&)=delete;
    ~Employee()=default;
    Employee(std::string employeeid, std::string employeename, float employeesalary, std::reference_wrapper<Project> projectref);

    std::string employeeId() const { return _employee_id; }

    std::string employeeName() const { return _employee_name; }
    void setEmployeeName(const std::string &employee_name) { _employee_name = employee_name; }

    float employeeSalary() const { return _employee_salary; }
    void setEmployeeSalary(float employee_salary) { _employee_salary = employee_salary; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};

#endif // EMPLOYEE_H
