/*
   Objective : 
    Design Consumer for: 
     ----- make allocations on the heap for 10 integers.
     ----- Save Square of first 10 itegers on the heap storage created.
     ----- calculating sum of first N natural numbers, where N is accepted asynchronously in the function and return value.

    Producer thread for:
    --- Launching a consumer Accepting N and passing to consumer.
*/
#include<iostream>
#include<future>


 int Consumer(std::future<int>&ft){
    int *ptr = (int*)malloc(40);
    auto f1= [](int number){ return number * number;};
    for(int i=1;i<=10;i++){
        ptr[i-1]= f1(i);
    }

    for(int i=1;i<=10;i++){
        std::cout<<ptr[i-1]<<std::endl;
    }
    int n = ft.get();   // wait + fetch value.
    // you can't use get once with future varible . if u used again , exception occured. 

    return (n*(n+1)/2);
 }
int main(){
    std::promise<int>pr;
    std::future<int> ft = pr.get_future();
    std::future<int>result =  std::async(&Consumer,std::ref(ft));
    
    int value;
    std::cin>>value;
    pr.set_value(value);
    std::cout<<"The answer is  : "<<result.get()<<"\n";
}