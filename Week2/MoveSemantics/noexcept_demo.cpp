#include<iostream>

class Dummy
{
private:
    /* data */
public:
    Dummy(/* args */) noexcept{}
    void Display() noexcept{std::cout<<"Hello\n"; throw 1;}
    ~Dummy() {}
};

int main(){


}