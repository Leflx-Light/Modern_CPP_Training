#include<bits/stdc++.h>
using namespace std;

class Tyre{
     public:
     void doRepair(){}
};



class Car{
    private:
    shared_ptr<Tyre>wheel1;
    public:
    Car(){
        wheel1 = make_shared(new Tyre());
    }
    shared_ptr<Tyre>getWheel1(){
        return wheel1;
    }
};


int main(){
     Car car1;
     shared_ptr<Tyre>wheel1(car1.getWheel1());
     return 0;
}