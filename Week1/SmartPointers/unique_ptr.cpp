#include<bits/stdc++.h>
using namespace std;

void fun(){
    unique_ptr<int>p1(new int(10));
    unique_ptr<int>p2;
    cout<<*p1<<endl;
   // p2 = p1 // not possible
   p2 = move(p1);
   if(p1 ==nullptr){
    cout<<"p1 is empty"<<endl;
   }
   cout<<*p2<<endl;
}


int main(){
     fun();
     return 0;
}