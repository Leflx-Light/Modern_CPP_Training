

/*
  template + recursion == variadic templates.

  used by meta programmers.

  thread constructor.------ these are variadic templates.
  bind function.    -------


  Perfect forwarding ---- c++ 11

*/

#include<iostream>


/*
 Compiler reads as ------
 Add is a function that takes 2 parameters of type 'int'
 It uses them as operands for binary + operator and returns 
 the result of + oeprator applied on these operands.

*/ 

template <typename T>
T add(T n1){
  return n1;
}



template <typename T, typename... Remaining>


T add(T n1, Remaining... args){
  return n1+ add(args...);
}



int main(){
  // below coding is called meta programming, our code is writing more code for us.
  std::cout<<add<int>(10,20)<<std::endl;
  std::cout<<add<float>(3.4f, 1.2f)<<std::endl;
  std::cout<<add<int>(2)<<std::endl;
  std::cout<<add<int>(1,2,3,4,5,6,7,8,9)<<std::endl;
}



/*
   Recursion:
   add(10,20,30,40,50);

   10 + add(20,30,40,50);   ----stack level 1
        20 + add(30,40,50); ----- stack level 2
              30 + add(40,50); ----stack level 3
                     40 + add(50); ---- -stack level 4
                            50 + baseCase. ---- stack level 5




   Real life example of Recursion:
        --- For google maps, I want to calculate the distance for the overall trip from source to destination with multiple stops in between.

   Solution: for total distance(source, stop1, stop2, stop3, destination)
             distance from source to stop1 + distance(stop2, stop3, destination)
             distance if stop2 to stop3 + distance stop3, destination.
   Philosophy of Recursion : 

*/