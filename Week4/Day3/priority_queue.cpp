#include<iostream>
#include<queue>
#include<vector>
#include<functional>
#include "Employee.h"
#include "Functionalities.h"



struct Less_Comparator{
    bool operator()(int a, int b){
        return a > b;
    };
};

  auto comp = [](const Employee& e1, const Employee& e2){
        return e1.expYears() < e2.expYears();
    };


int main(){

    //example 1 : integer stored in priority queue. Comparison from 
    std::vector<int>data {11,10,22,7,9,15,27,18};
    std::priority_queue<int, std::vector<int>,Less_Comparator>pq(data.begin(),data.end());

    while(!pq.empty()){
        std::cout<<"Popping  : "<<pq.top()<<"\n";
        pq.pop();
    }



     std::vector<int>data2 {11,10,22,7,9,15,27,18};
    std::priority_queue<int, std::vector<int>,std::greater<int>>pq2(data2.begin(),data2.end());

    while(!pq2.empty()){
        std::cout<<"Popping on Data2  : "<<pq2.top()<<"\n";
        pq.pop();
    }

   

    // auto comp = [](const Employee& e1, const Employee& e2){
    //     return e1.expYears() < e2.expYears();
    // };

    /*
      data3 is a priority queue designed for storing employees (type Employee)
      It will be created by using std::vector of Employee type.
      The comparison logic comes from lambda object comp.
      Its data type is unknown to me, hence I am asking compiler to provide declared
      type of comp i.e decltype(comp) as my third template parameter.
    
    */


   /*
    Note: if using lambda as comparator, also lambda object as a parameter to constructor of priority queue.
   
   */

    
    EmployeeContainer employees; 
    CreateEmployees(employees);
    
  
    std::priority_queue<Employee, std::vector<Employee>, decltype(comp)>pq3(employees.begin(), employees.end(), comp);

    while(!pq3.empty()){
        std::cout<<"Popping on Data2  : "<<pq3.top()<<"\n";
        pq3.pop();
    }
}