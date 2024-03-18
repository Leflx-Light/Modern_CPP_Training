#include<iostream>
#include<thread>

class Base
{
private:
    /* data */
public:
    Base(/* args */) {}
    ~Base() {}

    void run(int x){
        while(x --> 0){
            std::cout<<x<<std::endl;
        }
    }
};



int main(){
    Base b;
    std::thread t(&Base::run , &b, 10);
}