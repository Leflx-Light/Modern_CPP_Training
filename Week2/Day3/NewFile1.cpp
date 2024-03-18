#include<iostream>
#include<array>
#include<functional>

void Adaptor(const std::function<void(int)> &fn, std::array<int,5> &arr){
    for(int val : arr){
        fn(val);
    }
}

int main(){
     std::array<int,5>arr{1,2,3,4,5};
   auto f1 = [](int number){
    std::cout<<"Product is  : "<< number * number<<std::endl;
   };

   Adaptor(f1,arr);
   




}