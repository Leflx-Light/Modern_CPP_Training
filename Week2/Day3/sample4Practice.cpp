#include<iostream>
#include<functional>

using FnType = std::function<void(int)>;
using FnContainer = std::array<FnType,3>;
using DataContainer = std::array<int,5>;

void Adaptor(const FnContainer &fns, DataContainer &data){
    for(FnType fn: fns){
        for(int val : data){
            fn(val);
        }
    }
}

int main(){
  
   std::array<int,5> data{10,20,30,40,50};
   FnContainer fns{
    [](int number){std::cout<<"Answer is : "<<number + number<<std::endl;},
    [](int number){std::cout<<"Answer is : "<<number - number<<std::endl;},
    [](int number){std::cout<<"Answer is : "<<number * number<<std::endl;}
   };
    
   Adaptor(
    fns, 
    data
   );

}