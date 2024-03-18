#include "Functionalities.h"

Container ReturnInstancesPointers(Container &data, std::string name)
{
    Container result;

    for(ProductPointer ptr : data){
        if(ptr->productBrand()== name){
            result.push_back(ptr);
        }
    }

    return result;
}


void Adaptor(Container &data, FnContainer &fns)
{
    for(FnType fn: fns){
        for(ProductPointer ptr : data){
            fn(data);
        }
    }
}