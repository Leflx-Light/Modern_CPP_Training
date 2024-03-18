#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<memory>
#include<functional>
#include "Product.h"

using Pointer = std::shared_ptr<Product>;
using Container = std::vector<Pointer>;

using FnType = std::function<void(Pointer&)>;
using FnContainer = std::vector<FnType>;

void CreateObjects(Container &data);
void ShowResults(Container &data, FnContainer &fns);

#endif // FUNCTIONALITIES_H
