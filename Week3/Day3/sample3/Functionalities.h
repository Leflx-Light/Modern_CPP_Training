#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Workshop.h"
#include "Location.h"
#include<vector>


using WorkshopContainer = std::vector<WorkshopPointer>;
using LocationPoiner = std::shared_ptr<Location>;
using LocationContainer = std::vector<LocationPoiner>;



void CreateObjects(WorkshopContainer &wdata, LocationContainer &ldata);

 // A function to find and print 2 instances whose attendant count is the highest

 void Find2InstancesWithHighestAttendentCount(LocationContainer &ldata);

#endif // FUNCTIONALITIES_H
