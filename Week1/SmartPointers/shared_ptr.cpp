#include<bits/stdc++.h>
using namespace std;
int main(){
     shared_ptr<int>p1(new int(10));
     shared_ptr<int>p2;
     p2 = p1;  //shallow copy.

     cout<<"Counting reference count : "<<p1.use_count()<<endl;
     cout<<"Counting reference count : "<<p2.use_count()<<endl;
     cout<<"Address p1: "<<p1.get()<<endl;
     cout<<"Address p2: "<<p2.get()<<endl;
     p1.reset();

     cout<<"Counting reference count : "<<p1.use_count()<<endl;
     cout<<"Counting reference count : "<<p2.use_count()<<endl;



     return 0;
}