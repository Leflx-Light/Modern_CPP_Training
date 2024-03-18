#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "Employee.h"
#include<iostream>
#include<vector>
#include<cstring>
class Department
{
private:
    std::string _dept_name;
    std::vector<Employee*>employees;
public:
    Department()=default;
    Department(const Department&)=delete;
    Department(Department&&)=delete;
    Department& operator=(const Department&)=delete;
    Department&& operator=(Department&&)=delete;
    //copy constructor:
    Department(std::string dept_name, Employee* emps);
    
    //getters and setters:
    

    ~Department() {}
};

#endif // DEPARTMENT_H
