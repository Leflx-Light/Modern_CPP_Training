#include<iostream>
#include<functional>

void demo(int x, int& y){
    x++; //x has been copied into demo
    y++; //we are using original data passed in 2nd position
}



int main() {
    int a = 10;
    int b = 20;
    auto binded_demo_fn = std::bind(&demo, a, std::ref(b)  );

    binded_demo_fn();

    std::cout << "Value of a is: " << a <<"\n";

    std::cout << "Value of a is: " << b <<"\n";

}