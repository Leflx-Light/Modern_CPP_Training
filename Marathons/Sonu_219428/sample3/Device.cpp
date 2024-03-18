#include "Device.h"
std::ostream &operator<<(std::ostream &os, const Device &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " price: " << rhs._price
       << " _sar_value: " << rhs._sar_value
       << " _license: " << rhs._license
       << " _owner: " << rhs._owner;
    return os;
}

Device::Device(std::string id, std::string name, float price, float sarvalue, DeviceType type, License *license, Owner *owner):
_id{id},
_name{name},
_price{price},
_sar_value{sarvalue},
_type{type},
_license{license},
_owner{owner}
{
}