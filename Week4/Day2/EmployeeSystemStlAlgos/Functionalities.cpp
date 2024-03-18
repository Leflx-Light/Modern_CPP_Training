#include "Functionalities.h"
#include<algorithm>
#include<numeric>

void CreateObjects(Container &data)
{
    data[0]= std::make_shared<Employee>(101,"Sonu",20000,std::make_shared<System>(SystemType::_8GB,400,"S101"), 20,DepartmentType::ACCOUNTS,10);
    data[1]= std::make_shared<Employee>(102,"Vishal",30000,std::make_shared<System>(SystemType::_16GB,10,"S102"), 21,DepartmentType::IT,10);
    data[2]= std::make_shared<Employee>(103,"Rahul",40000,std::make_shared<System>(SystemType::_8GB,500,"S103"), 22,DepartmentType::HR,10);
    data[3]= std::make_shared<Employee>(104,"Ravi",60000,std::make_shared<System>(SystemType::_32GB,600,"S104"), 23,DepartmentType::ACCOUNTS,10);
    data[4]= std::make_shared<Employee>(105,"Prajakta",80000,std::make_shared<System>(SystemType::_16GB,10,"S105"), 25,DepartmentType::IT,10);

    std::cout<<"Objects Created Successfully !!!"<<std::endl;
}

float AverageSalaryIT(Container &data)
{
    if(data.empty()){
        throw std::runtime_error("No Data Available");
    }

    int count{0};

    auto sum = std::accumulate(
            data.begin(),
            data.end(),
            0.0f,
            [&](float answer_upto_current_point, const EmployeePointer& ptr){
                if(ptr->departmentType() == DepartmentType::IT){
                    count++;
                    return answer_upto_current_point + ptr->salary();
                }else{
                return answer_upto_current_point;
                }
                }
    );

    
    return sum/count;
}

void InstanceWithHighestSalary(Container &data)
{
  
    auto itr = std::max_element(
        data.begin(),
        data.end(),
        [&](const EmployeePointer& ptr1, const EmployeePointer& ptr2){
             return ptr1->salary() < ptr2->salary();
        }
   );

   std::cout<<(**itr)<<std::endl;
}

bool CheckAllContainerAgeAbove25(Container &data)
{
    
   auto itr = std::all_of(
       data.begin(),
       data.end(),
       [&](const EmployeePointer& ptr1){
           return ptr1->age() > 25;
       }
    );

   return itr;
  
}

std::optional<std::vector<EmployeePointer>> InstancesMatchingCondition(Container &data)
{
    std::vector<EmployeePointer> result(data.size());


    auto itr = std::copy_if(
      data.begin(),
      data.end(),
      result.begin(),
      [](const EmployeePointer& ptr){
        return ptr->system().get()->systemType() == SystemType::_16GB && ptr->system().get()->diskSpace() == 10 && ptr->departmentType()== DepartmentType::IT;
      }
    );

    result.resize(std::distance(result.begin(), itr));

    if(result.empty()){
        return std::nullopt;
    }
   
   return result;
    
}

int CountInstancesWithSalaryAbove30000(Container &data)
{
    auto itr = std::count_if(
        data.begin(),
        data.end(),
        [](const EmployeePointer& ptr){
             return ptr->salary() > 30000 && ptr->age() < 30;
        }
    );

    return itr;
}
