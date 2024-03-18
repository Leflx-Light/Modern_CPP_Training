#include<iostream>
#include<thread>
#include<mutex>
#include<deque>
#include<condition_variable>

std::deque<int> buffer;
const unsigned int maxBufferSize = 50;
std::mutex mt;
std::condition_variable cv;

void Producer(int n){
  
   while(n){
    std::lock_guard<std::mutex>lg(mt);
    cv.wait(lg,[&](){return buffer.size()< maxBufferSize;});
    buffer.push_back(n);
    std::cout<<"Produced : "<<n<<"\n";
    n--;
    cv.notify_one();
   }

}




void Consumer(){
    

}







int main(){
    std::thread t1(Producer,100);
    std::thread t2(Consumer);
}