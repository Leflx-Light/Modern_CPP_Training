#include<iostream>
#include<functional>


int main(){
     auto lam =[](int x, int y){std::cout<<x<<" "<<y<<"\n"<<std::endl;};
      int x = 1;
      int y = 2;
     auto print_one_two = std::bind(lam,std::placeholders::_2,std::placeholders::_1);
     print_one_two(x, y);
     std::cout<<x<<" "<<y<<std::endl;
    
     return 0;
}