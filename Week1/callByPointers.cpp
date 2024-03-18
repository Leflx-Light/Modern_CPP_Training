#include<iostream>

/*
   int & a;    //reference syntax.
   &a      : no data type to the left of a : address (pointer)
   
*/

void Magic(int* data){
    std::cout<<"Dereferencing data gives BEFORE modification"<<*data<<"\n";
    std::cout<<"Content of data in Magic BEFORE modification is : "<<data<<"\n";
    std::cout<<"Address of data inside Magic is: "<<&data<<"\n";
   *data = 11;
    std::cout<<"Contet of data in Magic AFTER modification is : "<<data<<"\n";
    std::cout<<"Deferencing data gives AFTER modification  : "<<*data<<"\n";
}

int main(){
    int value = 100;
    std::cout<<"Value in Main BEFORE modification is : "<<value<<"\n";
    std::cout<<"Address of value is inside Magic : "<<&value<<"\n";
    Magic(&value); //address /pointer
    std::cout<<"Value in Main AFTER modification is : "<<value<<"\n";
    
}