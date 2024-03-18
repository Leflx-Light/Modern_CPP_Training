#ifndef FEATURES_H
#define FEATURES_H
#include<vector>
#include "Account.h"

using AccountContainer = std::vector<Account*>

class Features
{
private:
    /* data */
public:
    Features(/* args */) {}
    ~Features() {}


    /*
  Should accept reference of a container.
  an enum to decide type of account, Account*
  then accept input, call the constructor and store pointer in accountsContainer.
*/
   static void  CreateObjects(AccountContainer& account, AccountType accountType)
};




#endif // FEATURES_H
