#include<iostream>

/*
   data : real-value
   categorial: months in a year 
   Enum is made to use categorial data.

*/

enum class Rank{
     FIRST,
     SECOND,
     THIRD
};

enum class Gear{
     FIRST,
     SECOND,
     THIRD
};

enum class Positon{
     FIRST,
     SECOND,
     THIRD
};


void Magic(int number){
     std::cout<<number*number<<"\n";
}


int main(){
     
     // we cannot force the user the use enum name as a prefix.
     enum Rank r1 = Rank::FIRST;
     enum Gear g1 = Gear::FIRST;
    

    //compiler should block comparision of enums of different types.
    if(r1 == g1){
     std::cout<<"OOPS !!!!"<<std::endl;
    }

  // implicit conversion enum type to int
    Magic(r1);  // this is wrong.

    // for above three reasons thats why we created enum class.



     return 0;
}