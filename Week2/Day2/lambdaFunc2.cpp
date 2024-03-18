#include<iostream>
#include<functional>
/*
   Objective: Create an adaptor which takes a callable of the following signature.
   1.) Input : int and int 
       Output: void
   2.) integer number n1
   3.) integer number n2

   The adaptor must apply/map the callable on the 2) and 3) integers.
*/

/*
    Honda : login ----> "something must happen after successful login"
*/
// void addition(int n1, int n2){
//     std::cout<<n1 + n2;
// }



/*
  Adaptor is a higher order function. A function which accepts a function as a parameter and may or may not return function also.

  a.) a function wrapper for all functions that have the following signature
      i) int, int input parameters.
      ii) void as return type.

  b.) 2 integers by value.
*/

/*
   Adaptor is also called map function.
*/
void Adaptor(std::function<void(int,int)>fn, int n1, int n2){
      fn(n1, n2);
}



void f1(int n1, int n2){
    std::cout<<n1*100*n2;
}
int main(){
   Adaptor(
     [](int n1, int n2){ std::cout<<n1 + n2<<std::endl;},
     10,
     20
   );


    Adaptor(
     [](int n1, int n2){std::cout<<n1 * n2<<std::endl;},
     10,
     20
   );


   Adaptor(
      f1,
      10,
      24
   );
}