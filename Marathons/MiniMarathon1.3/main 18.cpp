#include<iostream>
#include"Tester.h"
#include"Smart.h"
#include"Maker.h"

#define line() std::cout<<"----------------------------\n"

class CA {
    public:
    CA(){
        std::cout<<"Constructor called\n";
    }
    CA(int temp){
        std::cout<<"Const(int) called\n";
    }

    void f1(){
        std::cout<<"f1() called\n";
    }

    void f2(){
        std::cout<<"f2() called\n";
    }
};


class CB{
    public:
    CB(){
        std::cout<<"Constructor called\n";
    }
    CB(int){
        std::cout<<"Const(int) called\n";
    }

    void f1(){
        std::cout<<"f1() called\n";
    }

};


void TestCA (){
    Smart<CA> smtptr1= make_smart<CA>(10);
    smtptr1->f1();
    if(smtptr1){
        smtptr1->f1();
        (*smtptr1).f1();
    }
    FuncRunner(smtptr1,&CA::f1);
    FuncRunner(smtptr1,&CA::f2);

}
int main(){
    TestCA();

}