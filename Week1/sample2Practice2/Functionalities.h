#include "Customer.h"
#include "CreditCard.h"
#include<list>
#include<vector>

using Container = std::list<Customer*>;
using CCContainer = std::vector<CreditCard*>;

void CreateObjects(Container& data);
void DeleteObjects(Container& data);
std::string MaxCardLimit(Container& data);
CCContainer ParticularInstanceType(Container& data, CreditCardType type);
CustomerType TypeOfId(Container&data, std::string id);
bool ValidId(Container& data, std::string id);

