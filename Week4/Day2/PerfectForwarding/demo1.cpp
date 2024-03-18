#include<iostream>

template<typename T>
void OuterFunction(T& param){
    InnerFunction(param);
}


int main(){
    OuterFunction(5);
    
}