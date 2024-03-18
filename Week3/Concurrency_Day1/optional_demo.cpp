#include<iostream>
#include<vector>
#include<optional>


/*
 developer part: what is the API? What is the design? What is the corner case?

 scenario 1: My input has atleast 1 value
             - some of the values in the input are odd.
 scenario 1: My input has atleast 1 value
             - some of the values in the input are even.
scenario 2: Input is empty.
           - Nothing will work. [Not my concern, Input Invalid. Exception ]
My function may or may not be able to return SOMETHING Valid.


std::optional
    ---- Indicates an algebraic data type that may 
              - either contain a valid value
              - or a symbol indicating "ABSENSE OF INFORMATION"

*/

std::optional<std::vector<int>>FindOddNumbers(std::vector<int>&data){
    std::vector<int>result;

    if(data.empty()){
        throw std::runtime_error("data empty");
    }

    for(int val : data){
        if(val%2 != 0 ){
            result.push_back(val);
        }
    }
    
    if(result.empty()){
         return std::nullopt; // symbol to indicate NO INFORMATION
    }
    return result;
}

/*
  FindOddNumbers is a function that optionally returns a std::vector<int>

  or 

  FindOddNumbers may or may not return a vector of integers. It has an option.
  
*/



int main(){
      std::vector<int> data{10,10,10,40,50,70};
      
      std::optional<std::vector<int>>result;

      try{
        result = FindOddNumbers(data);
      }catch(std::runtime_error &ex){
        std::cout<<ex.what()<<"\n";
      }
   -

      if(result.has_value()){
        std::cout<<result.value()[0];
      }
}