#include<iostream>
#include<functional>
#include<array>
#include<algorithm>

int main(){
   
   std::array<int,5> data{1,2,3,4,5};
   auto accumulator = [sum=0](int i) mutable{
       sum +=i;
       return sum;
   };

   std::for_each(data.begin(), data.end(),std::ref(accumulator));
   std::cout<<std::endl<<std::endl<<"Sum is : "<<accumulator(0)<<std::endl<<std::endl;
}