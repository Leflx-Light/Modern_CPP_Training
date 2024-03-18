#include<iostream>
#include<array>
#include<thread>
#include<mutex>

std::mutex mt; // mutex is a binary semaphore.

/*
   delays: IO delay, CPU-BOUND Delay!!
*/

void Square(std::array<int,5> &data){
    for(int number : data){
    // 1 second artificial delay.
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    mt.lock();
    std::cout<<"Square of : "<<number<< "is : "<<number*number<<std::endl;
    mt.unlock();
   }

}


void Cube(std::array<int,5> &data){
    for(int number : data){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    /*
      ONLY 1 executing entity should be doing this at a time!
    */
    mt.lock();
    std::cout<<"Cube of : "<<number<< "is : "<<number*number*number<<std::endl;
    mt.unlock();
   }

}

int main(){
    // main thread starts. creates an array in local stack memory.
   std::array<int,5> data{1,2,3,4,5};
   // we launch a new thread.
   /*
     A thread is a mini program. As the developer , t1
     object is a "handle" for me to interact with the thread
     in some way. This t1 is attached to Square mini program. 
    We have also passed "data" by reference which is required 
    by the Square function.
   */
   std::thread t1(&Square,std::ref(data));

    /*
     A thread is a mini program. As the developer , t2
     object is a "handle" for me to interact with the thread
     in some way. This t2 is attached to Square mini program. 
    We have also passed "data" by reference which is required 
    by the Square function.
   */
   std::thread t2(&Cube,std::ref(data));

   /*
    SIGNAL as a result/summary/satisfaction
   */

  //join: wait for a thread.
  t1.join(); // main will not proceed to next line until t1 is finished.
  t2.join(); // main will not proceed to next line until t2 is finished.
 std:: cout<<"GoodBye!!\n";
}