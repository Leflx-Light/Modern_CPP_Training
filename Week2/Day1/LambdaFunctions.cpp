/*
   System which accepts data values and "logic". 
   This logic will be applied on every single data value received and corresponding 
   output will be shown.

   fn(data, logic) 
*/
#include<iostream>
#include<functional> // support for functional programming.


void Cube(int number){
    std::cout<<"Cube of :"<<number<<" is "<<number*number*number<<'\n';
}


//Operation is a higher order function
// a higher order function either accepts or returns (or both)another function
void Operation(const std::vector<int>& data, std::function<void(int)>fn){
     for(int val : data){
        fn(val);
     }
}



int main(){
  /**
  lambda functions below , it is anonymous function
  small function, use and throw  
  It is temporary function
  
  [](int number)->void{
    std::cout<<"Square of :"<<number<<" is "<<number*number<<'\n';
  }
  */

     std::vector<int> data {10,20,30,40,50};
     // [] square brackets in lambda functions are called capture clause. It is used to create lambda closure
     auto f1 =  [](int number)->void{
        std::cout<<"Square of :"
        <<number<<" is "<<number*number<<'\n';
     };
//      Operation(
//         data,
//         [](int number)->void{
//         std::cout<<"Square of :"
//         <<number<<" is "<<number*number<<'\n';
// });

    f1(10); //SEE IT WORKS

       Operation(
        data,
        f1
        );
}


 /*
    Higher Order Functions.
    Anonymous Functions.
    Functional Programming Paradigm
    no state 
    immutable data
    currying 
    First class functions

*/