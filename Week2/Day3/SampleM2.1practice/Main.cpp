#include "Functionalities.h"

int  main(){
    Container data;
    CreateObjects(data);

    //Lambda function for finding TAX:
    auto TaxFn=[](Pointer obj){
        std::cout<<"Tax : "<<obj->price() *0.01f<<" "<<std::endl;
    };

    //Lambda function the price or rating:
    auto PriceRatingFn = [](Pointer obj){
        if(obj->type() == ProductType::ELECTRONIC){
            std::cout<<"\n Product Price : "<<obj->price()<<"Rating Time : "<<3*obj->price()<<std::endl;
        }
    };

    //Lambda function for bool expression
    auto BoolFn = [](Pointer obj){
        if(obj->price()>2000.0f) std::cout<<"True"<<" ";
        else std::cout<<"False"<<" "<<std::endl;
        if(obj->rating() >= 3) std::cout<<"True"<< " ";
        else std:: cout<<"False"<<" "<<std::endl;
        if(obj->price() <=1000*obj->rating()) std::cout<<"True"<<" ";
        else std:: cout<<"False"<<" "<<std::endl;
    };

    //pushing functions into function Container.
    FnContainer fns;
    fns.push_back(TaxFn);
    fns.push_back(PriceRatingFn);
    fns.push_back(BoolFn);


    ShowResults(data, fns);

};