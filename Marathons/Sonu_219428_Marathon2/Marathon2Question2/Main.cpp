#include<bits/stdc++.h>
#include "Functionalities.h"


int main(){
    Container data;

    std::cout<<"-------------Process 1 : ------------"<<std::endl;
   
     auto CreateObject=[](Container &data)
  {
    data.push_back(std::make_shared<Product>("P101",ProductType::FOOD,150,"BurgerKing",ProductOriginType::DOMESTIC));
    data.push_back(std::make_shared<Product>("P102",ProductType::FOOD,200,"Pepsi",ProductOriginType::DOMESTIC));
    data.push_back(std::make_shared<Product>("P103",ProductType::APPLIANCE,100,"Pan",ProductOriginType::DOMESTIC));
    std::cout<<"Objects Created Successfully"<<std::endl;
  };

   CreateObject(data);


   auto FindAverageProductPrice=[](Container &data, ProductType producttype){
         float sum = 0.0f;
         int count = 0;
         for(ProductPointer ptr : data){
               if(producttype == ptr->productType()){
                sum += ptr->productPrice();
                count++;
               }
         }
         std::cout<<"Average : "<<sum/count<<std::endl;
   };


   std::cout<<"-------------------Process 2 -----------------"<<std::endl;
   FindAverageProductPrice(data,ProductType::FOOD);

   std::cout<<"------------------Process 3 -------------------"<<std::endl;
   auto DisplayNTaxAmounts=[](Container &data, int N){
         if(N <0 || N>data.size()){
            std::cout<<"Invalid"<<std::endl;
         }

         for(int i=0;i<N;i++){
            std::cout<<"Tax Amount : "<<data[i]->productTaxAmmount()<<std::endl;
         }
   };


   DisplayNTaxAmounts(data, 2);


   std::cout<<"------------------Process 4 -------------------"<<std::endl;
 
  auto PrintMessageBelow500=[](Container &data){
    int count =0;
      for(ProductPointer ptr : data){
        if(ptr->productTaxAmmount()<500){
          count++;
        }
      }

      if(count == data.size()){
        std::cout<<"All instances have product Tax Amount Below 500"<<std::endl;
      }else{
        std::cout<<"Not all instances have product tax amount below 500"<<std::endl;
      }
  };

  PrintMessageBelow500(data);


 std::cout<<"Binded Function: "<<std::endl;
 auto binded_fn = std::bind(&DisplayNTaxAmounts, data, std::placeholders::_2);



 std::cout<<"---------------------Process 5--------------------"<<std::endl;
 
  // auto countGroups =[](Container &data){
  //   std::vector<pair<ProductType,ProductOriginType>>vp;
  //      for(ProductPointer ptr :data){
  //         vp.push_back(ptr->productType(), ptr->productOriginType);
  //      }

  //      sort(v.begin(),v.end());
  //      int count=0;
  //      for(int i=0;i<vp.size();i++){
  //         if(vp[i]==vp[i+1]){
  //           count++;
  //         }
  //      }

  //      std::cout<<count<<std::endl;
  // };

  
  // FnContainer fns = {DisplayNTaxAmounts,PrintMessageBelow500 };
  // Adaptor(data,fns);



};