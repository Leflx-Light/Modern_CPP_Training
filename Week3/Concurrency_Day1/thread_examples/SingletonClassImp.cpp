/*

   One Object of this class will be responsible for  one 
   connection mechanism to the bank.
       
*/
#include<iostream>
#include<thread>
#include<mutex>
#include<array>
#include<functional>
#include "FutureException.h"



//Singleton Class: 

class BankingOperations;

using OperationPointer = std::shared_ptr<BankingOperations>;

class BankingOperations
{
private:
    int _amount{0};
    std::mutex mt;
 //   static BankingOperations* _solo_hero_object;
   static OperationPointer _solo_hero_object;
    BankingOperations(int amount):_amount{amount} { };
  

public:
    BankingOperations(const BankingOperations&)=delete;
    BankingOperations(BankingOperations&&)=delete;
    BankingOperations& operator=(const BankingOperations&)=delete;
    BankingOperations&& operator=(BankingOperations&&)=delete;
    ~BankingOperations()=default;

void deposit(){
   
     for(int i=0;i<100;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        std::lock_guard<std::mutex> lk (mt); //scope locking
        _amount += 10;
     
    }
}


  void withdraw(){
    
    for(int i=0;i<100;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        std::lock_guard<std::mutex> lk (mt); //scope locking
        _amount -= 10;
      
    }
}
 
 // logic of making this class singleton class.
 static OperationPointer getFirstInstance(int amount){
    // if pointer is not null (valid), object already exists
    if(_solo_hero_object){
        // return address of existing object.
        return _solo_hero_object;
    }else{
        // no object is pre-existing. We need to new one.
        _solo_hero_object.reset(new BankingOperations(amount));
        return _solo_hero_object;
    }
 }

    public:
    int amount() const { return _amount; }
    void setAmount(int amount) { _amount = amount; }

};

OperationPointer BankingOperations::_solo_hero_object{nullptr};

int main(){


    // try{
    OperationPointer obj =BankingOperations::getFirstInstance(1000);
  // BankingOperations b1{1000}; //value initialization using {}
   // int arr[2]={10,20};
   std::array<std::thread,2> arr{
   std::thread(&BankingOperations::withdraw, obj),
   std::thread(&BankingOperations::deposit, obj)
   };

   for(std::thread &t:arr){
      //good practice:
      // don't wait 

      if(t.joinable()){  //true, still wait!
         t.join();
      }
   }

  std::cout<<"Amount : "<<obj->amount()<<std::endl;


//   }catch(std::future_error& ex){
//       if(ex.code()== std::future_errc::no_state){
//         std::cout<<"Missing Input"<<"\n";
//       }
//       if(ex.code()== std::future_errc::future_already_retrieved){
//         std::cout<<"You already fetched the value. don't try again!";
//       }
//   }

}