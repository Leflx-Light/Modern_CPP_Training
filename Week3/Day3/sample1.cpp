/*
    Threads:
         1.) std::thread   ---> They can be used for parallel/concurrent tasks. They need to be joined or detached.They do not catch the return values.

         function ki return value , thread mein nhi aati.
         you can save in global variable , but you cannot catch .
         Thread create own memory stack. threads are objects. they do not copy data.


         2.) std::condition_variables  ----> in situations where one thread has to wait for an event to happen because of some other thread before completing its own activity due to other operations such threads may do some work before the event, hence are launched simultaneously.


         3.) Container of threads: -----> To manage multiple instances of std::thread efficiently. ( map  to functions, join, etc)


         4.) std::mutex vs  std::lock_guard  vs std::unique_lock
             - std::mutex can be locked and unlocked manually ONLY!! NOT APPLICABLE RAII.
             -std::lock_guard: (Mutex who completed master!) --->scope based (RAII based following) mutex. NO manuall lock and unlock
             -std::unique_lock: Scope based as well as manual lock/unlock. Supports
             synchronized locking/unlocking


             Search About : schronization primitives!
              infot
        5.) Real -life 
               -Mercedes :Navigation/ MUSIC
               ------> unlock doors -----> start the accessories/electronics------

                    -------> MAP ----> load surrounding data/favorites/emergency alerts [input : Destination]
               ------>
                   --------> MUSIC


                   To solve above problem :
                   std::future and std:: async and std::promise
a
                // We are in situation : I want to launch that performs task A and task B.
                task A does not depend on input parameter. but takes B needs an input , we need to launch thread that wants a parameter even without the parameter.

                Future Promise Model.
                this problem cannot be solved using condition_variables. without input parameters condition_variables cannot start.


                
*/