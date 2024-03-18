#include<iostream>
#include<thread>
#include<mutex>
/* 
  withdraw: withdraw takes 10 units of money from amount.
  deposit : adds 10 units of money to amount.

  Run withdraw and deposit Both for 100 times each on an initial amount 1000.

  What will be the final amount after 200 transactions are completed?


*/
std::mutex mt;
int amount = 1000;
void withdraw(){
    
    for(int i=0;i<100;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mt.lock();
        amount -= 10;
        mt.unlock();
    }
}


void deposit(){
   
     for(int i=0;i<100;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mt.lock();
        amount += 10;
        mt.unlock();
    }
}



int main(){
   std::thread t1(&withdraw);
   std::thread t2(&deposit);

   t1.join();
   t2.join();


   std::cout<<"Final Amount : "<<amount<<std::endl;


   /*
     for((i=0;i<50;i++)); do ./app
   */
}
