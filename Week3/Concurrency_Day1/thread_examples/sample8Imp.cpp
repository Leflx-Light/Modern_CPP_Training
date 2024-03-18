/*
  Create an array of 3 threads:
     -thread 1 should calculate square of each number in the array and store in a result array (position 1 to 5).
     -thread 2 should calculate cube of each number in the array and store in a result array (position 6 to 10).
     -thread 3 should calculate factorial of each numbers in the array and store in a result array (positon 11 to 15)

     Assumption: Numbers in the input array will be between 1 to 10;
*/

#include<thread>
#include<iostream>
#include<array>
#include<functional>

using FnType = std::function<void(int)>;
using FnContainer = std::array<FnType,3>;
using InputDataContainer = std::array<int, 5>;
using ResultContainer = std::array<int, 15>;
using ThreadArray = std::array<std::thread,3>;


void StoreFunctionInContainer(FnContainer& fns, InputDataContainer &data, ResultContainer &result){
    
    fns[0]=[&](int k){
        for(int number :data){
            result[k++]=number * number;
        }
    };
   
    fns[1]=[&](int k){
        for(int number : data){
            result[k++]=number*number*number;
        }
    };


    fns[2]=[&](int k){
       for(int number : data){
        if(number==1){
            result[k++]=1;
        }else{
            int amount=1;
            for(int i=2;i<=number;i++){
                amount *=i;
            }
            result[k++]=amount;
        }
       }
    };

}

void MapFunctionToThread(FnContainer& fns, ThreadArray& thArr){
    int pos[] {0,5,10};
    for(int i=0;i<thArr.size();i++){
        thArr[i]= std::thread(fns[i],pos[i]);
    }
}

void JoinThreads(ThreadArray& thArr){
    for(std::thread &t : thArr){
        if(t.joinable()){
            t.join();
        }
    }
}

int main(){

    InputDataContainer data{1,2,3,4,5};
    ResultContainer result;
    FnContainer fns;

    // Function 1
    StoreFunctionInContainer(fns,data,result);

    ThreadArray thArr;
    MapFunctionToThread(fns,thArr);


    JoinThreads(thArr);

    for(int val : result){
        std::cout<<val<<" ";
    }

    std::cout<<"--------------------End Main---------------------"<<std::endl;
   
    


}