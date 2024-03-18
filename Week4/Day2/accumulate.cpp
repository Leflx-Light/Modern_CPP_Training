#include "Functionalities.h"
#include <algorithm>
#include<numeric>
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
      functional programming: 
      - map : applying a logic(funtion) on all items in data collection (one by one)
      - filter : extracting items that satisfy a condition from the data collection.
      - reduce : collecting/summarizing/gathering/convering multiple items into a single item based on a binary operaiton.


      eg: 10,20,30,56,23;
      -reduce 5 numbers into 1 number by summation aggregation.
      -reduce 5 numbers into 1 by product aggregation.


       Accumulate Rules:  binary operation.
       rule 1: default operation is binary +
       

       Always use Lambda function for logic:
   
   */

    std::accumulate(
        data1.begin(),
        data1.end(),
        0.0f, // initial value or starting for operation.
        [](float answer_upto_current_point, const Employee emp){
            return answer_upto_current_point + emp.salary();
        }
    );


      std::accumulate(
        data2.begin(),
        data2.end(),
        0.0f, // initial value or starting for operation.
        [](float answer_upto_current_point, const Employee* emp){
            return answer_upto_current_point + emp->salary();
        }
    );



      std::accumulate(
        data3.begin(),
        data3.end(),
        0.0f, // initial value or starting for operation.
        [](float answer_upto_current_point, const EmployeeSmartPoiner emp){
            return answer_upto_current_point + emp->salary();
        }
    );


}