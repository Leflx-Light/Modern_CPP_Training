#include<iostream>
#include<vector>


std::vector<int> FindOddNumbers(std::vector<int>&data){
    std::vector<int>result;

    for(int val : data){
        if(val%2 != 0 ){
            result.push_back(val);
        }
    }
    
    return result;
}





int main(){
      std::vector<int> data{10,10,10,40,50,70};
      
      
     

      if( std::vector<int>result = FindOddNumbers(data); result.empty()){
        std::cout<<"Main hi pagal hu"<<std::endl;
      }else{
        for(int val: result){
            std::cout<<val<<"\n";
        }
      }
}