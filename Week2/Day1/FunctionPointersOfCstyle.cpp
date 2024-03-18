/*
   System which accepts data values and "logic". 
   This logic will be applied on every single data value received and corresponding 
   output will be shown.

   fn(data, logic) 
*/
#include<iostream>
void Square(int number){
    std::cout<<"Square of :"<<number<<" is "<<number*number<<'\n';
}


void Cube(int number){
    std::cout<<"Cube of :"<<number<<" is "<<number*number*number<<'\n';
}


//Operation is a higher order function
// a higher order function either accepts or returns (or both)another function
void Operation(int *arr, int size, void(*ptr)(int)){
    for(int i=0;i<size;i++){
         (*ptr)(arr[i]);
    }
}



int main(){
    //below are function pointers
    // void (*ptr)(int)= Square;
    // void (*ptr)(int) = Cube;
    int arr[] {10,20,30,40,50};
     Operation(arr, 5, Square);
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