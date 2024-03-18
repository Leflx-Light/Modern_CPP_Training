#include<iostream>
#include<queue>
#include<vector>
#include<functional>
#include "Employee.h"
#include "Functionalities.h"


template<typename T, typename C>
void Display(std::priority_queue<T, std::vector<T>, C>&pq3){
     while(!pq3.empty()){
        std::cout<<"Popping on Data2  : "<<pq3.top()<<"\n";
        pq3.pop();
    }
}


  auto comp = [](const Employee& e1, const Employee& e2){
        return e1.expYears() < e2.expYears();
    };


int main(){
   
    EmployeeContainer employees; 
    CreateEmployees(employees);
    
  
    std::priority_queue<Employee, std::vector<Employee>, decltype(comp)>pq3(employees.begin(), employees.end(), comp);

     Display<Employee,decltype(comp)>(pq3);
}