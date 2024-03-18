/*
   Design a system:  Producer Consumer Problem

   2 workers in your program
      1 may produce "something"  --- prducing data from sensors
      the other will "consume it" (process the produced item) --- consuming data to trigger alarm

    

    Example : 
    2 threads ( 2 workers)
    - main thread (producer): producer takes  input and "make value available";
    - operation (t1) (consumer) : Once signal is received from main, to indicate "input received", calculate square

    a) Programmer calculates how many workers are required and triggers them at a time. [thread pooling]- Thread Execution Pool will have in cpp 26

    b.) t1 may want to do some other woek even before data input is received.


    Modern CPP Philosophy : process/thread: concrete difference ya abstract.
     

     -----os level code-----
     #include<stdlib.h>
     #include<unistd.h>

     int main(){
         int id = fork();
         if(id==0){
        printf("Child thread");
        }
     }


    example :  apple watch detect aged person fall.
               car detects major accident and calls ambulance.
*/




#include<iostream>
#include<thread>
#include<condition_variable> // production done or not 
#include<mutex>

int value = 0;
std::mutex mt;
std::condition_variable cv;
bool flag = false;


void Operation(){
    int *ans = (int*)malloc(4);
    std::unique_lock<std::mutex>ul(mt);  // if false, release mutex immediately
    cv.wait(ul,[&](){return flag;});
    *ans = value * value;
    std::cout<<"Square of "<<value<<" is : "<<*ans;
    free(ans);
}

void TakeInput(){
      // apply lock on mutex. Lock will applied till end of TakeInput
    /// no other thread can apply lock on the same mutex before TakeInput.
     std::lock_guard<std::mutex>lg(mt); 
    // take input from user into global varaible.  
    std::cin>>value;
}

int main(){

    // step 1 : thread instantiated.
    // new thread is now availabe to be scheduled. ( as good as already started.)
    std::thread t1(&Operation);

     TakeInput();
    //toggle flag to indicate "production ready"
    flag = true;
    // send a signal
    cv.notify_one();
    // wait for operation to finish before terminating the program. This is infinite DeadLock.
    t1.join();
}



/*
  Flow of program : 
  0--------> create thread t1----> TakeInput()----> apply lock_quard()------->
         |
         --- t1-----------------> [malloc]--------> unique_lock---------------> condition check[false]----->


*/