#include<iostream>
#include<list>
 
 // move() converts lvalue into rvalue .




void Magic(std::list<int>& data){


}

/*
    1.) WeirdMagic can only be called by an rvalue 
       - It means the user will never be able to copies of data.
         One is caller function (Main) and one is callee (WeirdMagic).

*/

void WeirdMagic(std::list<int>&& data){  // rvalues references.
  std::cout<<data.size()<<"\n";


}


int main(){
    // std::list<int>l1{1,2,3,4,5}; //100 bytes on heap
    // Magic(l1); // call by reference = call by lvalue reference.

    std::list<int>l1{1,2,3,4,5};
    //WeirdMagic(std::move(l1));
  //  WeirdMagic(l1); -->error  // you are passing lvalue your compiler needs rvalue reference in your function.
  // two ways to call :
    // WeirdMagic(std::move(li));
    // WeirdMagic(std::list<int>{1,2,3});
}