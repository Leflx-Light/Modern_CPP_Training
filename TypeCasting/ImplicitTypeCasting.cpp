#include<iostream>


int main(){

   /**
    int number1 = 9;
    double number2;
    number2 = number1;
    std::cout<<"Integer Value"<<number1<<std::endl;
    std::cout<<"Double Value"<<number2<<std::endl;
    */


    int number1;
    double number2 = 9.76;
    number1 = number2;
    // compiler is automatically converting double into integer.
    // when we convert larger data type into smaller datatype
    // there is data loss.
    // bool -> char -> short-int -> int-> unsigned int -> long int -> unsigned long int -> long long int -> float -> double -> long double
    std::cout<<"Integer Value"<<number1<<std::endl;
    std::cout<<"Double Value"<<number2<<std::endl;
}