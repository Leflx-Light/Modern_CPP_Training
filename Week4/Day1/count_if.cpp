#include "Functionalities.h"


int main(){
   EmployeeContainer data1;
   EmployeePointerContainer data2;
   EmployeeSmartPointerContainer data3;

/////////////////////////////////////////////////////
   CreateEmployees(data1);
   CreateEmployeesPointer(data2);
   CreateEmployeesSmartPointer(data3);
////////////////////////////////////////////////////

//count instances matching a condition
/*
 1.) std::count_if
  count instances matching with given condition
  condition -- predicate
  return value is the final count.
*/
int count1 = std::count_if(
   data1.begin(),
   data1.end(),
   [](const Employee& emp){ return emp.salary()> 15000;}
);


int count2 = std::count_if(
   data2.begin(),
   data2.end(),
   [](const Employee* emp){ return emp->salary()> 15000;}
);


int count3 = std::count_if(
   data3.begin(),
   data3.end(),
   [](const EmployeeSmartPoiner& emp){ return emp->salary()> 15000;}
);

std::cout<<count1<<" "<<count2<<" "<<count3<<std::endl;


}

