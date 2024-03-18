#include<iostream>
#include <memory>

class Example1
{
private:
    std::string _name;
    int _id;
public:
    Example1(int id, std::string name): _id{id}, _name{name} {}
    ~Example1() {}
};

void Dummy(){
   // Example1* ex1 = new Example1(10,"Sonu");
    // std::shared_ptr<Example1>sptr {new Example1(10,"Sonu")}; DON"T USE 
    std::shared_ptr<Example1>sptr {std::make_shared<Example1>(10,"Sonu")};
    int n1{0};
    std::cin>>n1;
    std::cout<<10/n1;
    delete ex1;
}

int main(){
     try{
        Dummy();
     }catch(std::exception& ex){

     }
}

/*
   data : pointer ex1
   function which is guranteed to execute each 
   time an object is destroyed : destructor

   Action before data (ex1) is destroyed:
       Heap Deallocation using delete ex1.

*/


/*
   Dumm()
                                            HEAP
      ex1   ---------------------------> [10, "SONU"]

      [0x100H]                           0x100H
      <----8 bytes---->
      0x11H        0x18H

      n1 
      [0]
      <---4 bytes-->
      0x45H-----0x48H

*/

/*
   Smart Pointers in CPP:

   1.) Unique Pointer
   2) Shared Pointer
   3) Weak Pointer (token which can convert to shared ptr)


*/