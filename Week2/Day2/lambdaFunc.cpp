#include<iostream>
#include<functional>
/*
   The acutal data type of a lambda is unknown.
*/

/*
class Function_wrapper{
    //.....
    private 

    f ---------------> lambda is saved to this member.

    operator=(){f();}
}

*/

void Magic(std::function<void(int)> fn){
      fn(10);  //this will call the lambda function inside the wrapper.
}

int main(){
    auto f1 = [](int number){std::cout<<number*10;};
    // f1 is object. and it calls its () overloaded operator.
    f1(10);  //f1 is object, behaves as function, overloaded () operators.

    Magic(
        [](int number){std::cout<<number*10;}
    );

}