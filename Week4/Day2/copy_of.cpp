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
     Issues in copy_of :
     1.) this is a copy operation. copy semantic has to be supported.
     2.) We don't know how many instances will satisfy the condition.
     3.) to copy from source to destination, destination has to already be initialized with memory allocation to it.
  */

  /*
     3 step operation.
     a--> set the size 
     b---> perform operation.
     c---> resize size() 
  
  */

 // conditional copy:  copy on the basis of conditons.
  EmployeeContainer result1(data1.size());  // SEGMENTATION FAULT
  auto itr =  std::copy_if(
       data1.begin(),
       data1.end(),
       result1.begin(),
       [](const Employee& emp){ return emp.salary()>4000;}
   );
   // compiler know upto which itr , copy happened.
   //Now fix the size: 
  std::size_t actual_size =  std::distance(result1.begin(),itr);
  result1.resize(actual_size);
  // 5 objects.
  // result size 5: only 3 elements satisfy condition.

////////////////////////////////////////////////////////////////////////
  EmployeePointerContainer result2(data2.size());  // SEGMENTATION FAULT
  auto itr2 =  std::copy_if(
       data2.begin(),
       data2.end(),
       result2.begin(),
       [](const Employee* emp){ return emp->salary()>4000;}
   );
   // compiler know upto which itr , copy happened.
   //Now fix the size: 
  std::size_t actual_size2 =  std::distance(result2.begin(),itr2);
  result1.resize(actual_size2);


 ////////////////////////////////////////////////////////////////////

}