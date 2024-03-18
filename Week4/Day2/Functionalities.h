
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H


#include "Employee.h"
#include<memory>
#include<algorithm>
#include<numeric>

using EmployeeContainer = std::vector<Employee>;
using EmployeePointerContainer = std::vector<Employee*>;
using EmployeeSmartPoiner = std::shared_ptr<Employee>;
using EmployeeSmartPointerContainer = std::vector<EmployeeSmartPoiner>;

void CreateEmployees(EmployeeContainer& data){
      data.push_back(Employee("Harshit",23000,"Intern", 1));
      data.push_back(Employee("Sonu",12000,"Intern", 2));
      data.push_back(Employee("Vishal",34000,"Developer", 5));
}

void CreateEmployeesPointer(EmployeePointerContainer& data){
      data.push_back(new Employee("Harshit",23000,"Intern", 1));
      data.push_back(new Employee("Sonu",12000,"Intern", 2));
      data.push_back(new Employee("Vishal",34000,"Developer", 5));
}

void CreateEmployeesSmartPointer(EmployeeSmartPointerContainer& data){
      data.push_back(std::make_shared<Employee>("Harshit",23000,"Intern", 1));
      data.push_back(std::make_shared<Employee>("Sonu",12000,"Intern", 2));
      data.push_back(std::make_shared<Employee>("Vishal",34000,"Developer", 5));
}



#endif // FUNCTIONALITIES_H
