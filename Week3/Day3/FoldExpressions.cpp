#include<iostream>

/*
  Accept infinite parameters.
  add 1 parameter with remaining

*/


template <typename...T>


auto add(T...n1){
  return (n1 + ...); // right associative  operation.
}

/*template funciton takes infinite argument
type T
want to first value and remaining values  */


template<typename...A>

auto Subtract(A...arg){
  //  return (args - ...);   // (10 -(20-(30,40))) right associative operation.
      return (... - args);   // (((10-20)-30)-40) left associative operation.


}



int main(){
  // below coding is called meta programming, our code is writing more code for us.
  std::cout<<add<int>(10,20)<<std::endl;
  std::cout<<add<float>(3.4f, 1.2f)<<std::endl;
  std::cout<<add<int>(2)<<std::endl;
  std::cout<<add<int>(1,2,3,4,5,6,7,8,9)<<std::endl;
}



