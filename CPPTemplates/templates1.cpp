#include<iostream>
#include<typeinfo>

template<typename T1, typename T2>
void func(T1 input1, T2 input2){
    std::cout<<"Input1 : "<<typeid(input1).name()<<std::endl;
    std::cout<<"Input2 : "<<typeid(input2).name()<<std::endl;
}


int main(){
    func<int,float>(4,2.3f);
}