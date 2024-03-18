#include<iostream>
#include<functional>
#include<thread>



int main(){
    auto fn = [](int x){
        while(x --> 0){
            std::cout<<x<<std::endl;
        }
    };

    std::thread t(fn, 10);
    t.join();
    return 0;
}