#include<iostream>
#include<array>
#include<thread>
/*
   delays: IO delay, CPU-BOUND Delay!!
*/

void Square(std::array<int,5> &data){
    for(int number : data){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"Square of : "<<number<< "is : "<<number*number<<std::endl;
   }

}


void Cube(std::array<int,5> &data){
    for(int number : data){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"Cube of : "<<number<< "is : "<<number*number*number<<std::endl;
   }

}

int main(){
   std::array<int,5> data{1,2,3,4,5};
   Square(data);
   Cube(data);

}