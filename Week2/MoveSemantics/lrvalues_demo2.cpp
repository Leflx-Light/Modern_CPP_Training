#include<iostream>
#include<vector>

/*
   Magic is a function that accepts 1 std:: vector of integers by value .
   Magic returns void.
*/
void Magic(std::vector<int> data){

}

int main(){
   
  //  Magic(std::vector<int>{1,2,3,4,5}); // it is used to construct a variable data.
   

   std::vector<int> v1{1,2,3};
   Magic(v1); // call by value.
}

/*

       std::vector<int> data = std::vector<int>{1,2,3,4,5} 
*/