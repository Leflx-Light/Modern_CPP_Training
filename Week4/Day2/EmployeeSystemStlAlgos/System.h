#ifndef SYSTEM_H
#define SYSTEM_H
#include "SystemType.h"
#include <ostream>

class System
{
private:
    SystemType _system_type;
    int _disk_space;
    std::string _allocation_number;
public:
     System()=delete;
     System(const System&)=delete;
     System(System&&)=delete;
     System& operator=(const System&)=delete;
     System&& operator=(System&&)=delete;
     ~System() =default;

     System(SystemType system_type, int disk_space, std::string allocation_number);

     SystemType systemType() const { return _system_type; }
     void setSystemType(const SystemType &system_type) { _system_type = system_type; }

     int diskSpace() const { return _disk_space; }
     void setDiskSpace(int disk_space) { _disk_space = disk_space; }

     std::string allocationNumber() const { return _allocation_number; }
     void setAllocationNumber(const std::string &allocation_number) { _allocation_number = allocation_number; }

     friend std::ostream &operator<<(std::ostream &os, const System &rhs);

     
};

#endif // SYSTEM_H
