#include<iostream>
#include<thread>
#include<future>

int fact(int n){
    int res = 1;

    for(int i=2;i<=n;i++){
        res *= i;
    }

    return res;
}



int main(){
    int x;
    std::future<int> result = std::async(fact,4);
    x = result.get();
   // result.get();  crash.
}