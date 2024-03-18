#include<iostream>
#include<thread>

class Base
{
private:
    /* data */
public:
    Base(/* args */) {}
    ~Base() {}

    void operator()(int x){
        while(x --> 0){
            std::cout<<x<<std::endl;
        }
    }
};



int main(){
    std::thread t((Base()),10);
    t.join();

}