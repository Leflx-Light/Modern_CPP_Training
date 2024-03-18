#ifndef OWNER_H
#define OWNER_H
#include<iostream>
class Owner
{
private:
   std::string _registered_name;
public:
    Owner()=delete;
    Owner(const Owner&)=delete;
    Owner(Owner&&)=delete;
    Owner& operator=(const Owner&)=delete;
    Owner&& operator=(Owner&&)=delete;
    ~Owner()= default;
   
    Owner(std::string registeredname);
    std::string registeredName() const { return _registered_name; }
    void setRegisteredName(const std::string &registered_name) { _registered_name = registered_name; }

    friend std::ostream &operator<<(std::ostream &os, const Owner &rhs);

    
};

#endif // OWNER_H
