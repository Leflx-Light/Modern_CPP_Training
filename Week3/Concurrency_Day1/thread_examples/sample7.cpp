/*
  Create an array of 3 threads:
     -thread 1 should calculate square of each number in the array and store in a result array (position 1 to 5).
     -thread 2 should calculate cube of each number in the array and store in a result array (position 6 to 10).
     -thread 3 should calculate factorial of each numbers in the array and store in a result array (positon 11 to 15)

     Assumption: Numbers in the input array will be between 1 to 10;
*/

#include<thread>
#include<iostream>
#include<array>

int fact(int n){
    if(n == 0) return 1;
    return n*fact(n-1);
}

int main(){
    static int i =0;
    std::array<int,15>result;
    std::array<int,5>input{1,2,3,4,5};
   
   std::array<std::thread,4>arr{
       std::thread([&](int number){
        for(int i=0;i<=4;i++){
             result[i]=input[i]*input[i];
        }
        }),
       std::thread([&](int number){
        for(int i=5;i<=9;i++){
             result[i]=input[i-5]*input[i-5]*input[i-5];
        }
        }),
       std::thread([&](int number){
        for(int i=10;i<=14;i++){
            result[i]=fact(input[i]);
        }
      
        
        }),
       std::thread([&](int number){
        for(int i=0;i<=14;i++){
          std::cout<<number<<std::endl;
        }
       
        })
   };

    

   for(std::thread &t : arr){
      if(t.joinable()){
          t.join();
      }
   }



}