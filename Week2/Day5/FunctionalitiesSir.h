#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include<functional>
#include<memory>
#include<vector>


using Container = std::vector<int>;
using FnType = std::function<void(Container&)>;

void Adaptor(FnType fn, Container &data);

extern FnType fn1;
extern FnType fn2;
extern FnType fn3;





#endif // FUNCTIONALITIES_H
