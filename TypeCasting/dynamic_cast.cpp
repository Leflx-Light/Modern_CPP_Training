#include<iostream>

/*
   Dynamic Cast:
   1. dynamic_cast is a runtime cast operator used to perform conversion of one 
   type variable to another only on class pointers and references.
   2. It means it checks the valid casting of the variables at the run time, and if the casting fails, it returns a NULL value.
   Syntax:
   dynamic_cast<new data_type> (expression);
*/

class Base
{
private:
    /* data */
public:
    virtual void message(){}
    Base(/* args */) {}
    ~Base() {}
};

class Derived:public Base
{
private:
    /* data */
public:
    Derived(/* args */) {}
    ~Derived() {}
};


int main(){
       
       Base b;
       Derived d;

    //    Base *bptr = dynamic_cast<Base*>(&d);
    //    Derived *dptr = dynamic_cast<Derived*>(&b);

    Base *ptr = new Derived();
    Derived *dptr = dynamic_cast<Derived*>(ptr);
    if(dptr != nullptr){
        std::cout<<"Dynamic Casting done successfully"<<std::endl;
    }else{
        std::cout<<"Failed"<<std::endl;
    }
}