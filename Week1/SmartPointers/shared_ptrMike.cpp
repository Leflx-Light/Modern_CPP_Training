#include<bits/stdc++.h>
using namespace std;

class UserDefineType
{
private:
    /* data */
public:
    UserDefineType() {cout<<"UserDefineType is created"<<endl;}
    ~UserDefineType() {cout<<"UserDefineType is destroyed"<<endl;}
};



int main(){
     shared_ptr<UserDefineType>ptr1=make_shared<UserDefineType>();
     shared_ptr<UserDefineType>ptr2=ptr1;
     cout<<"use count : "<<ptr1.use_count()<<endl;
     cout<<"use count : "<<ptr2.use_count()<<endl;
     return 0;
}