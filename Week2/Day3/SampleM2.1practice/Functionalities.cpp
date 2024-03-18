#include "Functionalities.h"


//object is created:
void CreateObjects(Container &data)
{
    data.push_back(std::make_shared<Product>("P101","Phone",3.4,34567.89, ProductType::ELECTRONIC));
    data.push_back(std::make_shared<Product>("P102","Chair",4.5,1234,ProductType::FURNITURE));
    data.push_back(std::make_shared<Product>("P103","Table",5.0,567.89,ProductType::FURNITURE));
    data.push_back(std::make_shared<Product>("P104","Laptop",4.8,123456.4,ProductType::ELECTRONIC));
    data.push_back(std::make_shared<Product>("P105","Bottle",4.5,123.43,ProductType::FMCG));
}



void ShowResults(Container &data, FnContainer &fns)
{

    if(data.empty()){
        throw std::runtime_error("data empty");
    }

    for(Pointer &i : data){
         for(FnType &fn : fns){
            std::cout<<"-------------- fn start----------"<<std::endl;
            fn(i);
            std::cout<<"-------------- fn end------------"<<std::endl;
         }
    }


}
