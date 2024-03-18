#include "Functionalities.h"

void createobjects(std::vector<Device *> &data)
 {
    data[0]= new Device("d1","GooglePixel1",34500.00f,1.2f,DeviceType::MOBILE, new License(1234,LicenseType::OWNER),new Owner("Sonu"));
    data[1]= new Device("d2","GooglePixel2",44500.00f,1.4f,DeviceType::WORKSTATION, new License(3456,LicenseType::OWNER),new Owner("Ravi"));
    data[2]= new Device("d3","GooglePixel3",78600.00f,1.3f,DeviceType::ACCESSORY, new License(1111,LicenseType::OWNER),new Owner("Raj"));
    data[3]= new Device("d4","GooglePixel4",87900.00f,1.1f,DeviceType::MOBILE, new License(2222,LicenseType::OWNER),new Owner("Priyanka"));
}

void FindDiscountPrice(std::vector<Device *> &data)
{
    if(data.empty()){
        throw std::runtime_error("No data");
    }

    for(Device *d : data){
        if(d->type() == DeviceType::MOBILE || d->type() == DeviceType::WORKSTATION){
            float discount = 0.02f*d->getPrice();
            std::cout<<"discount : "<<discount<<"\n";
        }

         if(d->type() == DeviceType::ACCESSORY){
            float discount = 0.05f*d->getPrice();
            std::cout<<"discount : "<<discount<<"\n";
        }


    }
}

int FindTaxAmount(std::vector<Device *> &data)
{
  
     if(data.empty()){
        throw std::runtime_error("No data");
    }

      int count = 0;

      for(Device *d : data){
        float sv = d->sarValue();
        LicenseType lt = d->license()->licenseType();
        if(((sv>=1.0f && sv<=1.5f) && lt == LicenseType::OWNER) || ((lt ==LicenseType::RENTED) && (sv>=1.5 && sv<=2.0))){
            count++;
        }  
      }
      return count;
}

bool CheckLicenseType(std::vector<Device *> &data)
{
       if(data.empty()){
        throw std::runtime_error("No data");
    }
   
   int count = 0;
    while(count != data.size()){
       for(int i=0;i<data.size();i++){
       if(data[i]->license()->licenseType() != data[i+1]->license()->licenseType()){
          return false;
       } 
       count++;
     }
    }

    return true;
   
}
