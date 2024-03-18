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
     
    
   */
   EmployeeContainer result(data1.size()); // so that destination is of same size as source.
   std::copy(
    data1.begin(),
    data1.end(),
    result.begin()   
   );
 // copy all elements from beginning of data1 up to but not including the end of data1  to the result1 vector from the beginning of result1 vector.
     

}