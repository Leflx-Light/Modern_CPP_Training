#include<iostream>
#include<vector>
/*
 
   No.               Identifier-Name                Address     content    Alternate names
   1                      n1                           0x99H    99         argRef
   2                      data                         0x100H   10         r1, r2

*/


/*
   previously:
   A pointer when stored internally in an object creates representation of a pointer (Smart Pointers)

   A reference stored in a object internally creates representation of a reference called reference_wrapper
*/


void Magic(int& argRef){

}


int main(){
    int n1 = 99;
    int& ref = n1;
    Magic(n1);// passing reference.

    // a reference does not exist anywhere in memory.
    // int& arr[]={ref};  not possible.

   //  std::vector<int&> values{ref}; not possible 

   int data = 10;
   int &r1 = data;
  // int &r2 = r1; // reference of reference illegal --------- not possible 

}




/*
   Fn(int a)

   Fn(10);             int a=10;
*/