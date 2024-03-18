/*
   Objective: Design an adaptor to accept:
    1.) a vector of integers.
    2.) a predicate ( a function that  returns  true or false based on a single input)
    Use the predicate to print data from the vector.
*/

// std:: vector<int>{10,12, 13, 15, 14}

// odd numbers : 13, 15
// divisible by 2 : 10, 12, 14
// divisible by 3 : 12, 15
#include<iostream>
#include<vector>
#include<functional>

void Adaptor(std::function<bool(int)>predicate, const std::vector<int>&data){
       for(int val: data){
        if(predicate(val)){std::cout<<val<<std::endl;}
       }
}




int main(){
   Adaptor(
    [](int number){return number%5==0;},
    std::vector<int>{10,12,13,15,14}
   );

    Adaptor(
    [](int number){return number%3==0;},
    std::vector<int>{10,12,13,15,14}
   );

}