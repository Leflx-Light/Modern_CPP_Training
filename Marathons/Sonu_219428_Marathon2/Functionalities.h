
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<functional>
#include<vector>

using Container = std::vector<std::string>;
using FnType = std::function<void(std::string)>;

using FnContainer = std::vector<FnType>;

using HOFType= std::function<void(FnType &fn)>;
using HOFContainer = std::vector<HOFType>;

void Adaptor(Container &data, FnContainer &fns);


void HigherOrderFunction2( FnType &fn, std::string str);
void HigherOrderFunction3( FnType &fn, std::string str);
void HigherOrderFunction4( FnType &fn, std::string str);
void HigherOrderFunction5( FnType &fn, std::string str);
void HigherOrderFunction6( FnType &fn, std::string str);


// extern FnType fn2;
// extern FnType fn3;
// extern FnType fn4;
// extern FnType fn5;
// extern FnType fn6;






#endif // FUNCTIONALITIES_H
