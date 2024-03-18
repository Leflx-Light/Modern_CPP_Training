#include<iostream>
#include<vector>


/*
   numbers passed to magic must always be temporary value or moved values.
   && - capture parameter by rvalue reference.

*/
void Magic(std::vector<int>&& data){
          
}

int main(){

   std::vector<int> value{10,20,30,40,50};
   Magic(std::move(value));
   
   std::cout<<value.size()<<std::endl;    // undefined behaviour DO NOT TRY AT HOME. 

}


/*
  We create vector in main (scope in main)
  HEAP
  [10,20,30,40,50 |    |     |    | ]
    ^           ^                 ^






   1. Program starts because OS schedules the process.
   2. Main function is executed as a thread by the OS.
   3. vector of integers values is created in the scope of main.
        3a. Heap allocations happens and vector gets space on heap.
        3b. pointers to start, end and capacity are recorded in the vector object "value" in main.
   4. Magic(std::move(value))
        4a. std::move(value): It converts lvalue into rvalue ( tells the compiler "value " vector can be prepared for move)
        4b. Now vector value is treated as a rvalue.
        So, Magic(std::move(value)) becomes Magic(std::vector<int>{10,20,30,40,50})
    
*/