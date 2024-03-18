#ifndef VENDOR_H
#define VENDOR_H
#include "Account.h"
#include "Driver.h"
#include "CabUnit.h"
#include <iostream>
#include<vector>

using DriverContainer = std::vector<Driver*>;
using CabContainer = std::vector<CabUnit*>;
class VendorAccount:public Account
{
private:
     std::string _venderName{""};
    DriverContainer _drivers{};
    CabContainer _cabUnits{};


  
public:
    VendorAccount()=delete;
    VendorAccount(const VendorAccount&)=delete;
    VendorAccount& operator=(const VendorAccount&)=delete;
    VendorAccount&& operator=(const VendorAccount&&)=delete;
    VendorAccount(VendorAccount&&)=delete;
    ~VendorAccount()=default;
    VendorAccount(std::string username, std::string venderName);
    VendorAccount(std::string username, std::string venderName,const std::vector<Driver*> &drivers, const std::vector<CabContainer> &cabUnits);
    
   void RegisterAccount() override;

   friend std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs);
};

#endif // VENDOR_H
