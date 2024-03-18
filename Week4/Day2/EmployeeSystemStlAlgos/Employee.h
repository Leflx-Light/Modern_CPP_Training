#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include "System.h"
#include<memory>
#include "DepartmentType.h"

using SystemPointer = std::shared_ptr<System>;

class Employee
{
private:
    int _id;
    std::string _name;
    float _salary;
    SystemPointer _system;
    int _age;
    DepartmentType _department_type;
    int _experience_months;

public:
    Employee()=delete;
    Employee(const Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee& operator=(const Employee&)=delete;
    Employee&& operator=(Employee&&)=delete;
    ~Employee() =default;

    //parameterized constructor: 
    Employee(int id, std::string name, float salary, SystemPointer system, int age, DepartmentType department_type, int experience_months);

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    float salary() const { return _salary; }
    void setSalary(float salary) { _salary = salary; }

    SystemPointer system() const { return _system; }
    void setSystem(const SystemPointer &system) { _system = system; }

    int age() const { return _age; }
    void setAge(int age) { _age = age; }

    DepartmentType departmentType() const { return _department_type; }
    void setDepartmentType(const DepartmentType &department_type) { _department_type = department_type; }

    int experienceMonths() const { return _experience_months; }
    void setExperienceMonths(int experience_months) { _experience_months = experience_months; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

    
};

#endif // EMPLOYEE_H
