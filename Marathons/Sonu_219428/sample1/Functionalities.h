#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include<vector>
#include "Customer.h"
#include "CustomerType.h"


using Container = std::vector<Customer*>;

void CreateObjects(Container &data);

void DeleteObjects(Container &data);

Customer& FindCustomerInstanceMatchesCustomerType(Container& data, CustomerType customertype );

std::vector<Customer*> FindCustomersWhoseScoresBetween100And200(Container& data);

std::vector<Customer*> FindFirstNItems(Container& data, int n);

float FindAverageCustomerAge(Container& data, CustomerType customertype);


#endif // FUNCTIONALITIES_H
