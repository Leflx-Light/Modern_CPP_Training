/*

 A situation where only one element needs to be accessed and it is the most recent item  inserted into the contianer.

 eg: A compiler function calls.

 f(){
    f2()
 }

 call stack.

 f2 <------------------------- recently added, top most entry. will be accessed first.

 f1 <-------------------------- still pending.



 Note: Iteration is not possible on stack, queue, NO ITERATORS


*/


#include<stack>
#include "Employee.h"
#include "Functionalities.h"



using Container = std::stack<Employee>;

int main(){
    Container s1;
    s1.push(Employee("Harshit",34500,"Trainer",10));

}