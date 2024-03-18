#include "Functionalities.h"
#include<functional>



int main(){
   EmployeeContainer data1;
   EmployeePointerContainer data2;
   EmployeeSmartPointerContainer data3;

/////////////////////////////////////////////////////
   CreateEmployees(data1);
   CreateEmployeesPointer(data2);
   CreateEmployeesSmartPointer(data3);

   /*
    Check if all instances meet a condition
    Return true if all meet else false

    std::all_of
   
   */


   std::cout<<
   std::all_of(
      data1.begin(),
      data1.end(),
      [](const Employee& emp){return emp.salary()> 4000.0f;}
   );


   std::cout<<
   std::all_of(
      data2.begin(),
      data2.end(),
      [](const Employee* emp){return emp->salary()> 4000.0f;}
   );



   std::cout<<
   std::all_of(
      data3.begin(),
      data3.end(),
      [](const EmployeeSmartPoiner& emp){return emp->salary()> 4000.0f;}
   );

};