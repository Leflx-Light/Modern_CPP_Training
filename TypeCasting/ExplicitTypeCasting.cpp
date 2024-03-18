#include<iostream>



int main(){
    // Explicit Type casting can be done by two ways:
    // 1. assignment operator.
    // 2. Cast operators
          //1. Static Cast
          //2. Dynamic Cast
          //3. Const Cast
          //4. Reinterpret Cast
    
    // using assignment operator:
      int number1 = 7;
      int number2 = 3;
      float result;
      std::cout<<"This is Implicit Conversion : "<<std::endl;
      std::cout<<"Result : "<<number1/number2<<std::endl;
       std::cout<<"This is Explicit Conversion : "<<std::endl;
      std::cout<<"Result : "<<(float)number1/number2;
}