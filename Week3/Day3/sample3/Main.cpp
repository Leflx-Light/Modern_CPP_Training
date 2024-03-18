#include<iostream>
#include "Functionalities.h"
#include<thread>
#include<exception>


int main(){

   
   

    try{
    WorkshopContainer wdata;
    LocationContainer ldata;
      std::thread t1(&CreateObjects, std::ref(wdata), std::ref(ldata));
      t1.join();
    }catch(std::exception &ex){
      std::cout<<ex.what();
    }
  
}