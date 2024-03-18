#include "Functionalities1.h"
#include "EmptyContainerException.h"
#include<thread>
#include<future>





int main(){



    
     try{

     //function 1
     std::cout<<"Function 1 : "<<std::endl;
     Container data;
     std::thread t1(&CreateObjects, std::ref(data));
     t1.join();
     std::cout<<std::endl;
      
         //function 2
         std::cout<<"Function 2 : "<<std::endl;
         std::future<float> sum = std::async(&TotalHorsePower,std::ref(data));
         std::cout<<"Total HorsePower : "<<sum.get()<<std::endl;

         //function 3:
         std::cout<<"Function 3 :"<<std::endl;
         std::future<bool> ans = std::async(&IsAllContainerPriceAbove700000, std::ref(data));
         std::cout<<"True or False Above 700000 All or not : "<<ans.get()<<std::endl;

         //function 4: 
         std::cout<<"Function 4 : "<<std::endl;
         std::future<float> avg = std::async(&FindAverageTorque,std::ref(data));
         std::cout<<"Average Torque : "<<avg.get()<<std::endl;

         //function 5:
         std::cout<<"Function 5 : "<<std::endl;
         std::future<std::shared_ptr<Engine>> EnginePointer = std::async(&ReturnEngineToMinPriceCar, std::ref(data));
         std::cout<<*EnginePointer.get();



     }catch(const EmptyContainerException& e)
     {
          std::cerr << e.what() << '\n';
     }
     
    

}



































// #include<iostream>
// #include<thread>
// #include<future>
// #include "Functionalities.h"
// #include "IdNotFoundException.h"
// #include "EmptyContainerException.h"


// int main(){
    
//     Container data;
//     std::thread t1(&CreateObjects, std::ref(data));
//     t1.join();
//     try{
//         //int ans = TotalHorsepower(data);
//         std::future<int>ans = std::async(&TotalHorsepower, std::ref(data));
//         // async main purpose : data pass in future, capture data from function.
      
//         std::future<float>result = std::async(&AverageEngineTorque, std::ref(data));
//         std::future<std::string> model = std::async(&FindCarModelById,std::ref(data),"c101");
//         std::future<bool> flag = std::async(IsContainerAllCarAbove700000, std::ref(data));
//         std::future<Engine*> e = std::async(EnginePointerToMinPriceCar, std::ref(data));
  
    

      



//     std::cout<<"Total horsepower is : "<<ans.get()<<"\n";
//     std::cout<<"Average Engine Toque : "<<result.get()<<"\n";
//     std::cout<<"Model for given ID found : "<<model.get()<<"\n";
//         if(flag.get()){
//             std::cout<<"All vehicles have price above 7 lacs\n";

//         }else{
//             std::cout<<"Some Vehicle/s have price below 7 lacs\n";
//         }
//     std::cout<<"Engine found : "<<*(e.get())<<"\n";
//     }catch(const EmptyContainerException& ex){
//          std::cout<<ex.what()<<"\n";
//     }catch(const IdNotFoundException& ex){
//          std::cout<<ex.what()<<"\n";
//          // send record of this activity to log file.
//     }

//}