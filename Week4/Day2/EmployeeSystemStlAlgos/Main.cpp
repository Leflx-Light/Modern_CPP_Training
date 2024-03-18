#include "Functionalities.h"




int main(){
    try{
        Container data;
        std::cout<<"function 1 : "<<std::endl;
        CreateObjects(data);
        std::cout<<"function 2 : "<<std::endl;
        std::cout<< AverageSalaryIT(data)<<std::endl;
        std::cout<<"function 3 : "<<std::endl;
        InstanceWithHighestSalary(data);
           std::cout<<"function 4 : "<<std::endl;
        std::cout<<CheckAllContainerAgeAbove25(data)<<std::endl;
           std::cout<<"function 5 : "<<std::endl;
        std::optional<std::vector<EmployeePointer>> result = InstancesMatchingCondition(data);
        if(result.has_value()){
            for(EmployeePointer &ptr : result.value()){
                 std::cout<<*ptr;
            }
        }
         std::cout<<"function 6 : "<<std::endl;
       std::cout<<CountInstancesWithSalaryAbove30000(data);
    }catch(const std::exception& e){
        std::cerr<<e.what()<<"\n";
    }



}



