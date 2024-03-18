#include<iostream>

class Base{
public:
    virtual void print() { std::cout << "Base" << std::endl; }
    virtual ~Base() {} // Adding a virtual destructor for polymorphic behavior
};

class Derived1 : public Base {
public:
    void print() override { std::cout << "Derived1" << std::endl; }
};

class Derived2 : public Base {
public:
    void print() override { std::cout << "Derived2" << std::endl; }
};

int main() {
    Base* basePtr; // Upcasting
  //  basePtr->print(); // Prints "Derived1"
    
    // Attempting downcasting
    Derived1* derivedPtr1 = dynamic_cast<Derived1*>(basePtr);
    if (derivedPtr1) {
        std::cout << "Downcast successful, pointing to Derived1 object" << std::endl;
        derivedPtr1->print(); // Prints "Derived1"
    } else {
        std::cout << "Downcast unsuccessful" << std::endl;
    }
    
    Derived2* derivedPtr2 = dynamic_cast<Derived2*>(basePtr);
    if (derivedPtr2) {
        std::cout << "Downcast successful, pointing to Derived2 object" << std::endl;
        derivedPtr2->print();
    } else {
        std::cout << "Downcast unsuccessful" << std::endl; // Will be printed since basePtr points to a Derived1 object
    }
    
    delete basePtr; // Don't forget to free the allocated memory
    return 0;
}
