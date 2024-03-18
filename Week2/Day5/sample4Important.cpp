 /*
   Objective: Design an adaptor function that accepts:
   -  a container of function wrappers and a container of data values.
   Do: Map each function on each item in the data container and print the output.
   # All function must accept only an integer and return void.

*/


#include<iostream>
#include<functional>
#include<array>
#include<list>

using FnType = std::function<void(int)>;
using DataContainer = std::array<int,5>;
using FnContainer = std::array<FnType, 3>;


void Adaptor(const FnContainer &fns, const DataContainer &data){
    /*
    loop over functions , 
    nested loop over data, apply fn on data
    */
   for( FnType fn : fns){
    for(int val: data){
        fn(val);
    }
   }
}


int main(){
    FnContainer fns{
        [](int number){std::cout<<number*10<<'\n';},
        [](int number){std::cout<<number*number<<'\n';},
        [](int number){std::cout<<number*number*number<<'\n';},
    };

    Adaptor(
       fns, 
       std::array<int,5>{1,2,3,4,5}
    );
}
