#include<iostream>
#include<functional>

struct Actor {
    void DoSomethingYouUselessPerson(int x, int y, int z){
            std::cout << ( (x + y) - z);
    }
};


int main(){

  Actor *a1 = new Actor();
  auto class_func_bind = std::bind(&Actor::DoSomethingYouUselessPerson, a1, std::placeholders::_3,  std::placeholders::_2,  std::placeholders::_1);

  class_func_bind(6,3,1);
  
}