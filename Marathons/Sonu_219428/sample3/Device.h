#ifndef DEVICE_H
#define DEVICE_H
#include<iostream>
#include "DeviceType.h"
#include "License.h"
#include "Owner.h"

class Device
{
private:
    std::string _id;
    std::string _name;
    float _price;
    float _sar_value{1.0f};
    DeviceType _type;
    License *_license;
    Owner *_owner;

public:
    Device()=delete;
    Device(const Device&)=delete;
    Device(Device&&)=delete;
    Device& operator=(const Device&)=delete;
    Device&& operator=(Device&&)=delete;
    ~Device()= default;

    Device(std::string id, std::string name, float price, float sarvalue, DeviceType type, License *license, Owner *owner);

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    float getPrice() const { return _price; }
    void setPrice(float price_) { _price = price_; }

    float sarValue() const { return _sar_value; }
    void setSarValue(float sar_value) { _sar_value = sar_value; }

    DeviceType type() const { return _type; }
    void setType(const DeviceType &type) { _type = type; }

    License *license() const { return _license; }
    void setLicense(License *license) { _license = license; }

    friend std::ostream &operator<<(std::ostream &os, const Device &rhs);

    
};

#endif // DEVICE_H
