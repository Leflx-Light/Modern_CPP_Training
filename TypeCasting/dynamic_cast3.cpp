#include<iostream>

class Animal
{
private:
    /* data */
public:
    virtual void Dummy(){}
    Animal(/* args */) {}
    ~Animal() {}
};



class Cat:public Animal
{
private:
   
public:
    Cat(/* args */) {}
    ~Cat() {}
};


class Dog:public Animal
{
private:
   
public:
    Dog(/* args */) {}
    ~Dog() {}
};




int main(){
  
    Animal *ptr2 = new Dog();
   

    Dog* ptr3 = dynamic_cast<Dog*>(ptr2);

    if(ptr3 == nullptr){
        std::cout<<"Not Possible "<<std::endl;
    }
    else{
        std::cout<<"Done"<<std::endl;
    }

    ptr2 =  new Cat();

    Cat* ptr4 = dynamic_cast<Cat*>(ptr2);

    if(ptr4 == nullptr){
        std::cout<<"Not Possible "<<std::endl;
    }
    else{
        std::cout<<"Done"<<std::endl;
    }

}