#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Device.h"
#include "License.h"
#include "Owner.h"
#include "DeviceType.h"
#include "LicenseType.h"
#include<iostream>
#include<vector>


void createobjects(std::vector<Device*>&data);
void FindDiscountPrice(std::vector<Device*>&data);
int FindTaxAmount(std::vector<Device*>&data);
bool CheckLicenseType(std::vector<Device*>&data);

#endif // FUNCTIONALITIES_H
