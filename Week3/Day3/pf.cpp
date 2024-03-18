#include<iostream>
#include<thread>
#include<future>


int fact(std::future<int>&ft){
      
      int res = 1;

      int N = ft.get();

      for(int i=2;i<=N;i++){
           res *=i;
      }

      return res;
}






int main(){
    // main is producer.
    std::promise<int>pr;
    std::future<int> ft = pr.get_future();
    std::future<int> result = std::async(fact,std::ref(ft));

   // pr.set_value(4);
   // std::cout<<"In main : "<<result.get();

}