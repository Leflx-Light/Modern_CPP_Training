#ifndef LOCATION_H
#define LOCATION_H
#include<memory>
#include <ostream>
#include "Workshop.h"

using WorkshopPointer = std::shared_ptr<Workshop>;
using WorkshopRef = std::reference_wrapper<WorkshopPointer>;
class Location
{
private:
    std::string _name;
    WorkshopRef _ref;

public:
     Location()=delete;
     Location(const Location&)=delete;
     Location(Location&&)=delete;
     Location& operator=(const Location&)=delete;
     Location&& operator=(Location&&)=delete;
     ~Location() =default;

     Location(std::string name, WorkshopRef ref);

     std::string name() const { return _name; }
     void setName(const std::string &name) { _name = name; }

     WorkshopRef ref() const { return _ref; }
     void setRef(const WorkshopRef &ref) { _ref = ref; }

     friend std::ostream &operator<<(std::ostream &os, const Location &rhs);

     
};

#endif // LOCATION_H
