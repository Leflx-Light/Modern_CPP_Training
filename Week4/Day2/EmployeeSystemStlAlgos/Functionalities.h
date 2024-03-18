#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Employee.h"
#include<array>
#include<optional>
#include<vector>


using EmployeePointer = std::shared_ptr<Employee>;
using Container = std::array<EmployeePointer,5>;

void CreateObjects(Container& data);
float AverageSalaryIT(Container& data);
void InstanceWithHighestSalary(Container& data);
bool CheckAllContainerAgeAbove25(Container& data);
std::optional<std::vector<EmployeePointer>>InstancesMatchingCondition(Container &data);
int CountInstancesWithSalaryAbove30000(Container &data);


#endif // FUNCTIONALITIES_H
