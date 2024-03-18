#include "Vendor.h"
std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs) {
    os << static_cast<const Account &>(rhs)
       << " _venderName: " << rhs._venderName;
    return os;
}

VendorAccount::VendorAccount(std::string username, std::string venderName):Account(username), _venderName{venderName}
{
}

VendorAccount::Vendor(std::string username, std::string venderName, const std::vector<Driver *> &drivers, const std::vector<CabUnit*> &cabUnits)
:Vendor(username, vendorName)
{
   _drivers = drivers;
   _cabUnits = cabUnits;
}

void VendorAccount::RegisterAccount()
{
    std::cout<<"Vendor Verified as given norms"<<"\n";
}
