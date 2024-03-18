#include<iostream>
#include<thread>
#include<algorithm>
#include <chrono>

using namespace std::chrono;

using ull =  unsigned long long ;


ull OddSum = 0;
ull EvenSum = 0;


void findOdd(ull start, ull end){
    for(ull i=start;i<=end;++i){
        if((i&1)== 1){
           OddSum +=i;
        }
    }
}


void findEven(ull start, ull end){
    for(ull i=start;i<=end;++i){
        if(i&i==0){
            EvenSum +=i;
        }
    }
}


int main(){

    ull start = 0, end = 1900000000;
    auto startTime = high_resolution_clock::now();

    std::thread t1(findEven,start, end);
    std::thread t2(findOdd,start, end);

    
    t1.join();
    t2.join();
    // findEven(start, end);
    // findOdd(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime-startTime);
    std::cout<<"Odd Sum : "<<OddSum<<std::endl;
    std::cout<<"Even Sum : "<<EvenSum<<std::endl;

    std::cout<<"Sec : "<<duration.count()/1000000<<std::endl;
}