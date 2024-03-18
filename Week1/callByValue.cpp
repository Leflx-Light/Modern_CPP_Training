#include<iostream>

/*
   int & a;    //reference syntax.
   &a      : no data type to the left of a : address (pointer)
   
*/

void Magic(int value){
    std::cout<<"Value in Magic BEFORE modification is : "<<value<<"\n";
    std::cout<<"Address of value is inside Magic : "<<&value<<"\n";
    value = 11;
    std::cout<<"Value in Magic AFTER modification is : "<<value<<"\n";
    std::cout<<"Address of value is inside Magic : "<<&value<<"\n";
}

int main(){
    int value = 100;
    std::cout<<"Value in Main BEFORE modification is : "<<value<<"\n";
    std::cout<<"Address of value is inside Magic : "<<&value<<"\n";
    Magic(value);
    std::cout<<"Value in Main AFTER modification is : "<<value<<"\n";
    std::cout<<"Address of value is inside Magic : "<<&value<<"\n";
}