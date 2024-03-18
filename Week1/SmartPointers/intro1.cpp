#include<iostream>

int  f1(){
    /*If condition gets true , delete p line will never get execute and p will be removed from call stack but memory pointed by p will be exist in heap.*/
    //int *p = new int(10);
    unique_ptr<int> p(new int(10));
    if(true){
        return  10;
    }
   // delete p; no need for now
}

int main(){

}