#include<iostream>
#include<functional>

class Action
{
private:
    int _id;
public:
    Action()=default;
    ~Action()=default;
    void Operation(int number){std::cout<<_id*number;};
};




// swapping parameters
// fixing parameters.
// how extra parameters discarded.
// lambda binding.





int main(){
    Action a1;
    auto binded_operation = std::bind(&Action::Operation,&a1, 40);
    binded_operation();
}


/*
 Action:: Operation
 this->Operation

*/