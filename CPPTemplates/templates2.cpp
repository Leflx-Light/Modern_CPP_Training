#include<iostream>
#include<typeinfo>

template<typename T1, size_t N>
void func(T1 input){
    for(size_t i=0;i<N;i++){
        std::cout<<typeid(input).name()<<std::endl;
    }
}


int main(){
    func<int,3>(5);
    func<int,4>(5);
    func<int,5>(5);
}