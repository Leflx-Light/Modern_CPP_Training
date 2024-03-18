#include "Functionalities.h"
#include<algorithm>
#include<numberic>

void CreateObjects(WorkshopContainer &wdata, LocationContainer &ldata)
{
  
   wdata.push_back(std::make_shared<Workshop>(12,4,WorkShopType::SERVICE,2,2,34,56.5,23));
   wdata.push_back(std::make_shared<Workshop>(11,1,WorkShopType::BOTH,2,2,34,56.5,23));
   wdata.push_back(std::make_shared<Workshop>(10,2,WorkShopType::SERVICE,2,2,34,56.5,23));
   wdata.push_back(std::make_shared<Workshop>(9,3,WorkShopType::REPAIRS,2,2,34,56.5,23));


   ldata.push_back(std::make_shared<Location>("Pune", std::ref(wdata[0])));
   ldata.push_back(std::make_shared<Location>("Ludhiana", std::ref(wdata[1])));
   ldata.push_back(std::make_shared<Location>("Delhi", std::ref(wdata[2])));
   ldata.push_back(std::make_shared<Location>("Chandigarh", std::ref(wdata[3])));

   std::cout<<"Objects Created Successfully !!"<<std::endl;
}

void Find2InstancesWithHighestAttendentCount(LocationContainer &ldata)
{
   

   
}
