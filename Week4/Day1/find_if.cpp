#include "Functionalities.h"
#include<functional>


template <typename T,typename P>
auto Search(
    const T data, 
    const P &fn
    ){
       
    auto itr =  std::find_if(
    data.begin(),
    data.end(),
    fn
   );

   if(itr == data.end()){
    std::cerr<<"Object not found!!\n";
    return itr;
   }else{
    std::cout<<"Object Found : \n";
    return itr;
   }
  }



int main(){
   EmployeeContainer data1;
   EmployeePointerContainer data2;
   EmployeeSmartPointerContainer data3;

/////////////////////////////////////////////////////
   CreateEmployees(data1);
   CreateEmployeesPointer(data2);
   CreateEmployeesSmartPointer(data3);
////////////////////////////////////////////////////

  /*
     find object matching with my if condition.
  
     2.) std::find_if returns "iterator to the First matching object".
         if match is not found, find_if returns end iterator. ( end is one position beyond the container.)
  */


///////////////////////////////////////////////////////////////
auto itr1 = Search<
 EmployeeContainer,
 std::function<bool(const Employee& emp)>
 >
 (data1,[](const Employee& emp){return emp.salary() > 4000.0f;});

//////////////////////////////////////////////////////////

auto itr2 = Search<
EmployeePointerContainer,
std::function<bool(const Employee* emp)>
>
(data2,[](const Employee* emp){return emp->salary() > 4000.0f;});
/////////////////////////////////////////////////////////////


std::find_if(
    data3.begin(),
    data3.end(),
    [](const EmployeeSmartPoiner& emp){return emp->salary() > 4000.0f;});





}