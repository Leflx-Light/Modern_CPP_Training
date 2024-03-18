/*

  Three types of Smart Pointers;
  SMART POINTERS : They are wrappers around raw pointers to allow better memory management using RAII(get in constructor , destroy in destructor) design pattern

  std::jthread cpp20

  1) shared_ptr
  2) unique_ptr
  3) weak_ptr : stalker pointer, [token] ---> shared_ptr token.


  <-------------- 20 bytes ------------->
  [   12 bytes       |      8 bytes     ]
  0x100H
       ptr1                ptr2


*/

#include<iostream>
#include<memory>
#include "Employee.h"
#include<thread>
#include<mutex>

std::mutex mt;
bool allThreadsDone = false;

void ChangeName(std::shared_ptr<Employee> owner2){
   std::lock_guard<std::mutex>lg(mt); 
   owner2->setName("Sonu");
   std::cout<<*owner2<<"\n";
}


void UpdateSalary(std::shared_ptr<Employee> owner3){
   std::lock_guard<std::mutex>lg(mt); 
   owner3->setSalary(123212345.9f);
   std::cout<<*owner3<<"\n";
}


int main(){
    std::shared_ptr<Employee>ptr = std::make_shared<Employee>("Harshit",345000,"Intern",10);
  
   std::thread t1(&ChangeName, ptr);
   std::thread t2(&UpdateSalary, ptr);

    if(std::lock_guard<std::mutex>lg(mt); !allThreadsDone){
            std::cout<<*ptr<<"\n";
    }

   t1.join();
   t2.join();

}


/*
 []"harshit",546.78,"Trainer",10
  ^
  0x100H

*/