#include "FunctionalitiesSir.h"

void Adaptor(FnType fn, Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data Empty");
    }

    fn(data);
}


 FnType fn1 = [](Container& data){std::cout<<data.front();};
 FnType fn2 = [](Container& data){std::cout<<data.back();};
 FnType fn3 = [](Container& data){std::cout<<data.size();};