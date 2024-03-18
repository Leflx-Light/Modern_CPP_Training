#include<iostream>
#include<thread>
#include<future>


int func(std::future<int> ft){
     std::cout<<"Waiting for parameter in func ...."<<std::endl;

     std::cout<<"Doing work that can done without parameter..."<<std::endl;
     int *ptr = (int*)malloc(4);
     for(int i=0;i<=3;i++){
          *ptr += i;
     }

     std::cout<<"Sum : "<<*ptr<<std::endl;

     int n = ft.get();
     std::cout<<"Gotcha.... Value of N is : "<<n<<std::endl;

     return n;
}


int main(){
    std::promise<int>pr;
    std::future<int>ft = pr.get_future();
    std::future<int>result = std::async(func, &ft);

    int value=0;
    std::cin>>value;
    pr.set_value(value);

    std::cout<<"Returned Value from func : "<<result.get()<<std::endl;

}