
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Product.h"
#include<iostream>
#include<functional>
#include<memory>
using ProductPointer = std::shared_ptr<Product>;
using Container = std::vector<ProductPointer>;

using FnType = std::function<void(Container&)>;
using FnContainer = std::vector<FnType>;

void Adaptor(Container &data, FnContainer &fns);

Container ReturnInstancesPointers(Container &data);



#endif // FUNCTIONALITIES_H
