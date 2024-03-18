#include<iostream>
#include<functional>
#include<list>
#include<cstring>

void Formula(const int x, const int y, const int z){
    std::cout<<"Answer is : "<< ((x+y)-z)<<"\n";
}


void Magic(const std::list<int>&data, int n){
    for(int val : data){
        n--;
        if(n==0){
            std::cout<<val<<" "<<"\n";
        }
    }
}

/*
 1. we cannot massively change code after it is deployed for client.
     strcpy(dest, source)

 2. Sometimes API parameters need to be fixed at a certain value.
     connect (ip, port hostname, id, password);
     connect (hostname, id, password) // ip is 192.17.81.100 , port is 22.


*/


int main(){
   Formula(10,20,30);

   // set the valueof x in formula to 100 fixed forever!
   
   
   //lambda partial function: pure 
   auto binded_formula = std::bind(&Formula,100,std::placeholders::_1, std::placeholders::_2);
   binded_formula(30,30,40); //x = 100, y= 40 , z=40;

   auto binded_Magic =std::bind(&Magic, std::placeholders::_2,std::placeholders::_1);
   auto binded_strcpy = std::bind(&strcpy, std::placeholders::_2, std::placeholders::_1);
//    char *msg;
//    binded_strcpy("Sonu",msg);
//    std::cout<<msg<<'\n';

  auto fn = [](int number, int factor){std::cout<<number*factor;};
  // a lambda is an object. uisng & on a lambda means taking address of object. Don't use & sign with lambda in bind!
  auto binded_lambda_fn =  std::bind(fn,std::placeholders::_1,40);

  binded_lambda_fn(100); //fin(100,40)
  binded_lambda_fn(100,20); //fn(100, 40)  20 is discarded.
  binded_lambda_fn(100, 20, 30,50, 60, 70); // fn(100,40) all other parameters will be discarded
}


/*
  data type of function:
  void Magic(const int n1, std::string& name);
  void(const int, std::string&);

  std::function<void(const int, std::string&)> fn = &Magic;



  auto f1 = [](){std::cout<<"Hello";};

 behind the scenes:

  class Lambda@1AnyName{
      operator()(){
        std::cout<<"Hello";
      }
  }

  Lambda@1 fn = 








void Magic(){
     std::cout<<"hello\n";  ox189H
     int n1= 10;            ox65 44 33
     std::cout<<n1*90;      ox567H
    };
functiong gets stored in code segment.
  
  std::funciton<void()> fn = Magic;

  please take the address of first instruction of Magic and give it to fn.


*/