#include<iostream>
// #include<forward_list>
template<typename T>
void Innerfunction(const T& a){
    std::cout<<++a<<std::endl;
}

template<typename T>
void OuterFunction(T param){
     Innerfunction(std::forward<T>(param));
}


int main(){
    int a=7;
    OuterFunction(a);
    std::cout<<a;
    
}