#include<bits/stdc++.h>
using namespace std;
int main(){
     int d=3;
     vector<int>v{2,3,4,5};
     for_each(v.begin(),v.end(),[d](int x){
        if(x%d == 0)
           cout<<x<<" is divisible by "<<d<<endl;
        else
           cout<<x<<" is not divisible by "<<d<<endl;
         
     });

     return 0;
}