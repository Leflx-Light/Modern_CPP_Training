#include<bits/stdc++.h>
using namespace std;
struct {
    void operator()(int x){
        cout<<x<<" "<<"\n";
    }
}something;

// creating lambdas :
 // [](int x){cout<<x<<" "<<"\n";}
//  [](int x){
//     if(x%2 == 0)
//       cout<<x<<" is even number"<<endl;
//     else
//       cout<<x<<" is odd number"<<endl;
//  }
int main(){
   //  [cc](p){fd};  cc capture clause , p parameter  , fd =  function defintion.
   vector<int>v{2,3,4,5};
 //  for_each(v.begin(),v.end(),something);
 //for_each(v.begin(),v.end(), [](int x){cout<<x<<" "<<"\n";});
 for_each(v.begin(),v.end(),  [](int x){
    if(x%2 == 0)
      cout<<x<<" is even number"<<endl;
    else
      cout<<x<<" is odd number"<<endl;
 });
     return 0;
}