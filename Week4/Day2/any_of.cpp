#include "Functionalities.h"
#include <algorithm>
#include "Employee.h"



int main(){
   EmployeeContainer data1;
   EmployeePointerContainer data2;
   EmployeeSmartPointerContainer data3;

/////////////////////////////////////////////////////
   CreateEmployees(data1);
   CreateEmployeesPointer(data2);
   CreateEmployeesSmartPointer(data3);


   /*
     any_of : check if "any of" (at least one) instance satisfies condition.
   
   */

    std::cout<<std::boolalpha<<std::any_of(
        data1.begin(),
        data1.end(), 
        [](const Employee& emp){ return emp.salary() > 40000.0f;}
     );



      std::cout<<std::boolalpha<<std::any_of(
        data2.begin(),
        data2.end(), 
        [](const Employee* emp){ return emp->salary() > 40000.0f;}
     );



      std::cout<<std::boolalpha<<std::any_of(
        data3.begin(),
        data3.end(), 
        [](const EmployeeSmartPoiner& emp){ return emp->salary() > 40000.0f;}
     );



}