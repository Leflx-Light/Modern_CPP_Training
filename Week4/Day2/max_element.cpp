#include "Functionalities.h"
#include <algorithm>
#include "Employee.h"



int main(){
   EmployeeContainer data1;
   EmployeePointerContainer data2;
   EmployeeSmartPointerContainer data3;

   CreateEmployees(data1);
   CreateEmployeesPointer(data2);
   CreateEmployeesSmartPointer(data3);


   ////////////////////////////////////////////////////////

    /*
      max element complexity ---O(n)
      max_element returns the position , where the max element is .

    */
   //designation of the employee whose salary is the highest
   // Note: if there are 2 or max values, first max is considered.
 auto itr =   std::max_element(
    data1.begin(),
    data1.end(),
     [](const Employee& emp1, const Employee& emp2){ return emp1.salary() < emp2.salary();}
   ); // comparison logic or comparator.
   
   std::cout<<"Designation of max sal employee is : "<<itr->designation();
   std::cout<<"Designation of max sal employee is : "<<(*itr).designation();
  /*
    if 2 employees emp1 and emp2 are compared, emp1 is greater than emp2 only if emp1's salary is greater than emp2's salary
  */


 ////////////////////////////////////////////////////////////////////////////////


  auto itr2 =   std::max_element(
    data2.begin(),
    data2.end(),
     [](const EmployeePointer &emp1, const EmployeePointer &emp2){ return emp1.salary() < emp2.salary();}
   ); // comparison logic or comparator.
   
   std::cout<<"Designation of max sal employee is : "<<itr2->designation();
   std::cout<<"Designation of max sal employee is : "<<(*itr2).designation();



 auto itr3 =   std::max_element(
    data3.begin(),
    data3.end(),
     [](const EmployeeSmartPointer &emp1, const EmployeeSmartPointer  &emp2){ return emp1.salary() < emp2.salary();}
   ); // comparison logic or comparator.
   
   std::cout<<"Designation of max sal employee is : "<<itr3->designation();
   std::cout<<"Designation of max sal employee is : "<<(*itr3).designation();
  /*
    if 2 employees emp1 and emp2 are compared, emp1 is greater than emp2 only if emp1's salary is greater than emp2's salary
  */




}