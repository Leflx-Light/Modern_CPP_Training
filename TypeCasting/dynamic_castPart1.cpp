#include<iostream>

class Base{
    public:
    virtual void print(){std::cout<<"Base"<<std::endl;}
};


class Derived1:public Base{
    void print(){std::cout<<"Derived1"<<std::endl;}
};

class Derived2:public Base{
    void print(){std::cout<<"Derived2"<<std::endl;}
};

int main(){
    Derived1 *d1 = new Derived1();
    Base *bp = dynamic_cast<Base*>(d1);
    bp->print();
    
}