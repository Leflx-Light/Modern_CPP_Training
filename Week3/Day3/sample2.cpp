#include<iostream>
#include<future>

void factorial(std::future<int>&ft){
    int *ptr = (int*)malloc(4);   // line can be excecuted before int.
    // wait for event :
    int n = ft.get(); // this thread will now get blocked till input comes.
    int result = 1;
    for(int i=2;i<=n;i++){
        result *=i;
    }

    *ptr = result;
    std::cout<<"Final answer is  : "<<*ptr<<"\n";

}

int main(){
     
      // make a promise :: compiler, I will give you an integer IN FUTURE.
      std::promise<int>pr;
      std::future<int> ft = pr.get_future();

      //producer works promise varible pr,  promise is used to setting the value in proudcer thread.
      //consumer works on future variable ft, future is used to get the value  

     std::future<void> result =  std::async(&factorial,std::ref(ft));
     int value = 0;
     std::cin>>value;

     //producer fullfill promise.
     pr.set_value(value);


     //what if main wants to do something after Factorial?
     result.wait();
     std::cout<<"goodbye\n";
}