/*
   A pointer is an address of "Something".

   Use cases:
   1. Make an array.


*/

#include<iostream>

void Magic(int *arr[2]){
    
}


void f1(){
    int arr[]{1,2,3};
    int* ptr = arr; // attach array first location to ptr.
    Magic(arr);
}
 



struct Employee{
    int _id;
    float _salary;
    
    Employee(int id, float salary):_id{id}, _salary{salary};
};

