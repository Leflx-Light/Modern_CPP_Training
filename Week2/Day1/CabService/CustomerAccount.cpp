#include "Customer.h"

std::ostream &operator<<(std::ostream &os, const CustomerAccount &rhs) {
     std::string val="";
     if(rhs._customerType == Gender::MALE){
        val = "MALE";
     }else if(rhs._customerType == Gender::OTHER){
        val="OTHER";
     }
     else{
        val = "FEMALE";

     }
    os << "_fullName: " << rhs._fullName
       << " _Gender Type: " << val;
    return os;
}

CustomerAccount::CustomerAccount(std::string name,std::string fullname, Gender gType): Account(name), _fullName{fullname}, _customerTyType}
{

}

void CustomerAccount::RegisterAccount()
{
    std::cout<<"Account verified via OTP"<<"\n";


}
