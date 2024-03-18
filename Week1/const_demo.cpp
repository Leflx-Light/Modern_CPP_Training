/*
 
  Rule 1 : const is applied to the token on its immediate left.
  If there is nothing to the left of const, apply const on the token to its
  immediate right.
  Rule 2. pointer symbol * is considered a separate token.


*/


class Dummy
{

   
   
public:
      int _id;
     float _salary;
    Dummy(int id, float salary):_id(id), _salary(salary) {}
    ~Dummy()=default;

    float salary() const { return _salary; }
    void setSalary(float salary) { _salary = salary; }
};


#include<iostream>
using namespace std;
int main(){
     //scenario 1: const with non-pointer primitive variable.
     const int n1 =10;
     // const is applied on int
     // n1 is a constant int.
     int const n2 = 20;

     //same
     // n2 is a constant int.

     // scenario 2 : pointer with primitive;
   
      //2a
      int n3 = 99;
      int n4 = 188;
      const int *ptr = &n3; // ptr is a pointer to a constant int.
     // *ptr = 77; bluff --errror  this will give error.
     ptr =&n4; //THIS IS OKAY




     //2b:
     int * const ptr2 = &n3; //ptr2 is a const pointer.
     *ptr2 = 100; // This is okay.
    // ptr2 = &n4;   // NOT OKAY 
      

    //2c:
    const int * const ptr3 = &n3; // ptr3 is a constant pointer to a constant integer.
   // *ptr3 = 45; not okay
   // ptr3 = &n4;  not okay

   
   //scenario 3:  CONST on a stack object
   const Dummy d1(101,23000.00f);
   //d1._id = 11;
   //d1.setsalary(90000.0f);
   // d1.salary();

   

     return 0;
}