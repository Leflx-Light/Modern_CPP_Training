#include "CopyElisionEmployee.h"

/*
  c language : we have created lvalue called e1, we have copied e1 into emp [ should trigger copy]
  cpp language : we are creating lvalue called e1 , we are copying e1 by triggering copy constructor of employee class to generate emp

  eg : Employee emp(e1);
  Modern cpp language: You have constructed e1 in the stack memory of Magic
  Now, we need to either move e1 into main or copy e1 into main.
  [based on whether move is available or not !]

  
*/

Employee Magic(){

     Employee e1("Harshit",56700.0f, "Trainer",10);
     return e1;

}






int main(){
   
   Employee emp = Magic();
   std::cout<<emp<<"\n";

}


/*
  Without copy elision: 
  


  With copy elision

*/