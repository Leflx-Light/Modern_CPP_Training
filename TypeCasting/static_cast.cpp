#include<iostream>

/*
  static_cast:
  1. Capable enough that can perform all the conversions carried out by the implicit type casting.
  2. Compile time casting.
  3. ensures conversion is valid and safe at compile time.
   Syntax:
   static_cast<new data_type> (expression);
*/

int main(){

   double multiplication = 3.6*1.7;
   int result;
   result = static_cast<int>(multiplication);
   std::cout<<"Result : "<<result<<std::endl;

}