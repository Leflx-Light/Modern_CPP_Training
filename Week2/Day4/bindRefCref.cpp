#include<iostream>
#include<functional>

// int fn(int i){
//      ++i;
//     return i;
// }


int fn(int &i){
     i=i+10;
    return i;
}


int main(){
    int local_i = 0;
    auto binded_fn = std::bind(fn, std::ref(local_i));
    binded_fn();
    binded_fn();
   std::cout<<std::endl<<std::endl<<"local_i : "<<local_i<<std::endl<<std::endl;

}