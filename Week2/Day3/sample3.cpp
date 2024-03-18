/*
   Week 2:
   Function pointers.
   Function wrappers : 
        - a way to capture any callable in a type-erased way.
        - It can be used for following.
              - Pass a callable as a parameter.
              - Return a callable as a value.
              - Save functions as "values" in container/variables.

    Reference Wrapper:
       - It is an object that internally stores references to "something".
       - It uses pointer to reference conversion internally.
       - It can be replacement for raw reference everywhere in the code.
       - rvalues cannot be converted to reference wrapper.
       

    std::bind
       - used to create a partial function 
          - partial function : a function some parameters are already fixed.
       - redesign or tweak the sequence of parameters by swapping or respositioning them as per requirement

       

*/

#include<iostream>
#include<functional>

//illegal to do
int& Magic(){
    int n1 = 10;
    return n1;
}



int main(){
    std::reference_wrapper<int> ref = (Magic());
    std::cout<<ref.get()<<'\n';
}