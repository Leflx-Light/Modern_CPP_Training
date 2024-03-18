#include<iostream>
/*
   for each loop
   for loop using begin & end iterators
   return type of a function.
   lambda variable type
   function parameters with auto
   template parameters for lambda [C++14]
   auto&& in for loop


   Best Practices: 
   a.) Don't use auto when you have no idea what EXACTLY will be replaced in place of auto.
   b.) always verify whether auto can be used where you are using it. ( context )
        Magic(auto n1){

        }    [C++20]

   c.) 
*/

#include<vector>
int main(){
      auto n1 = 10;
      std::vector<int>v1{1,2,3,4,5};
      auto itr = v1.begin();
     //  auto will be replaced by std::vector<int>::iterator
    

      //decltype
      decltype(v1)v2{1,2,3,4,5};
     
}