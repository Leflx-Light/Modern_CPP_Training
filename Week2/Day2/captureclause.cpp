/*
  triggers app
  f1------------------->f2(2 integers will be created)
                        |
                        |
                        |
                        predicate to filter the data.
*/
#include<iostream>
#include<functional>


std::function<int()> f2(int n1, int n2){
    /*
      A lambda can capture data from its enclosing function without explicit passing.
    */
    auto lambda_fn = [&](){int val = 99; return n1 + n2+10+20+30+val;};
    lambda_fn();
    return lambda_fn;
}

void f1(){
    int n1=10;
    int n2 = 20;
   std::function<int()> modifiedFunction =  f2(n1,n2);
   std::cout<<modifiedFunction()<<"\n";
}


