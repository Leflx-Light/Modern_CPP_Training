#include "Employee.h"


/*
  1.) The middlemen/intermediate functions will have to designed to accept 0 or more argument (potentailly infinite)
  2.) lvalue binding to rvalue situation is ANNOYING!


*/

// void Demo(int&& n1){

// }

class DataModel
{
private:
     int _n1;
     std::string& _name;
     const std::string& _grade;
     std::vector<
public:
    DataModel(/* args */) {}
    ~DataModel() {}
};




template<typename T, typename... Args>
T Relay(Args&& ... args){
    return T(std::forward<Args>(args)...);
}


int Magic(int&& n1){
     // 10 gets assigned to n1. now n1 is lvalue.
    // forwarding n1 to any function will now forward n1 as lvalue rather than rvalue.
   // Demo(n1); // lvalue passed to rvalue reference.----->error
}



int main(){
    
   int n1 = 10;
   std::string name="Sonu";
   std::grade {"A+"};


   DataModel obj  = Relay<DataModel>{n1,
      name,
      grade,
      std::vector<int>{10,20,30};
      
      for(int val: obj:data())


       };



}