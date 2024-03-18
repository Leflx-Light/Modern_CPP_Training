#include "Functionalities.h"
#include<iostream>

void Adaptor(Container &data, FnContainer &fns)
{
    
     
        HigherOrderFunction2(fns[0], data[0]);
        HigherOrderFunction2(fns[1], data[1]);
        HigherOrderFunction2(fns[2], data[2]);
        HigherOrderFunction2(fns[3], data[3]);
        HigherOrderFunction2(fns[4], data[4]);
      
    
}




    

auto fn3 = [](std::string str){

     if(str[0]=='C' && str[1]=='+' && str[2]=='+'){
      std::cout<<"String starts with C++";
     }
     else{
      std::cout<<"Does not have C++ prefix";
     }
   
};


auto fn4 = [](std::string str){
  int size = str.size();
  if(size<3){
    std::cout<<"Invalid String"<<std::endl;
  }
  std::cout<<str[size-1]<<str[size-2]<<str[size-3]<<std::endl;
};




auto fn5 = [](std::string str){
   int size = str.size();

   if(size == 0){
    std::cout<<"INVALID STRING"<<std::endl;
   }

   if(str[0]=='a' || str[1]=='b'){
      std::cout<<"Size of string : "<<size<<std::endl;
   }
   else if(str[0]==' '){
    std::cout<<"Invalid String"<<std::endl;
   }else{
    std::cout<<str[0]<<str[1]<<std::endl;
   }
};


auto fn6 = [](std::string str){
    int size = str.size();
    if(size == 0 || size == 1){
      std::cout<<"INVALID STRING"<<std::endl;
    }
    else {
      for(int i=0;i<size;i++){
        if(str[i]==str[i+1]){
          std::cout<<str[i]<<str[i+1]<<std::endl;
        }
      }

      std::cout<<str[0]<<str[size-1]<<std::endl;
    }

};


  auto fn2 =  [](std::string str){
      int count =0;
      for(int i=0;i<str.size();i++){
        if(str[i]=='A'||str[i]=='E' || str[i]=='I'|| str[i]=='O'|| str[i]=='U'|| str['a']||str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
             count++;
        }
      }

      if(count>=3){
        std::cout<<"String has  3 vowels"<<std::endl;
      }
      else{
          std::cout<<"Not Enough Vowels"<<std::endl;
      }
   };





void HighOrderFunction2(FnType fn, std::string str){
  fn(str);
}


