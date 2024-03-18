#include "FunctionalitiesSir.h"



int main(){
    Container data{1,2,3,4,5};
    try{
    Adaptor(fn1, data);
    Adaptor(fn2, data);
    Adaptor(fn3, data);
    }catch(std::runtime_error& ex){
        std::cout<<ex.what();
    }
  
}