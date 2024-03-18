/*
  Hash-table
  Key is integer (employee id)
  value is Employee object on stack.


  hash applied on key.
  Hash is based on employee id.

*/

#include<iostream>
#include<unordered_map>
#include "Employee.h"


template<typename K, typename V>

void Display(const std::unordered_map<K,V> &mapData){
    for(auto& [key, value]: mapData){
        std::cout<<key<<"\t"<<value<<"\n";
    }
}


template<typename K, typename V>
void CreateObjects(std::unordered_map<K,V>&mapData){
    mapData.emplace(101, std::make_shared<Employee>("Harshit", 45654,"Trainer", 10));
    mapData.emplace(102, std::make_shared<Employee>("Harshit", 45654,"Trainer", 10));
    mapData.emplace(103, std::make_shared<Employee>("Harshit", 45654,"Trainer", 10));
   

}



int main(){
    std::unordered_map<int, EmployeeSmartPointer> mapData;
    CreateObjects<int,EmployeeSmartPointer>(mapData);
    Display<int,EmployeeSmartPointer>(mapData);
}