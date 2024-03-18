#include<iostream>
#include<vector>

/*
   any form of data that is not preserved in a fixed location in memory will 
   disappear at the end of the expression (full expression)
   where it originated.
*/

int main(){
   
   //purely rvalues
   // lvalues - are names given by user and have memory location , is called lvalues.
   // rvalues - otherwise it is rvalues.
    10; // 10: temporary (rvalue);  doesnt have permament memory location - at the end of expression discarded. 
    "harshit";
    std::vector<int>{1,2,3,4};
    //int *ptr = &n1; // ptr is lvalue;

}