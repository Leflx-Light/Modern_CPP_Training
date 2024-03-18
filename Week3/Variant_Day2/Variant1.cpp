//TaxPayers: Employees, BusinessOwners

/*
Normally:

  TaxPayer
     |
     |
 ------------
 |           |
 |           |

 Employees   BusinessOwner

 Employee* ptr1;
 BusinessOwner* ptr2;

 TaxPayer* arr[2] {ptr1, ptr2};

 */ 
#include<iostream>
#include<array>
#include<variant>  // cpp 17 feature.

class BusinessOwner
{
private:
    std::string _name;
    std::string _company_gst_number;
    float _revenue;
    float _expenses;
public:
float CalculateTaxAmount(){return 0.3f*(_revenue-_expenses);}
    BusinessOwner(std::string name, std::string gst, float rev, float exp):
    _name{name},
    _company_gst_number{gst},
    _revenue{rev},
     _expenses{exp} {}
    ~BusinessOwner()=default;

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    float revenue() const { return _revenue; }
    void setRevenue(float revenue) { _revenue = revenue; }
};



class Empoyee
{
private:
    std::string _name;
    float _salary;

public:
    Empoyee(std::string name, float sal):
     _name{name},
     _salary{sal} {}
    ~Empoyee()=default;

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }
};

/*
  I want to use std::array as a container of varaints
  where each variant is either of type Employee Pointer or BusinessOwner pointer.
*/

// use after class making.
using VType = std::variant<Empoyee*, BusinessOwner*>;
using Container = std::array<VType,2>;

// syntax for accessing common functionalities. visitor design pattern

//for each variant 
// visit the variant
// open it and whatever you find and 
// using the val pointer and start accessing 
//auto&& ----> template parameter for lambda.
void CommonAction(Container &arr){
     for(VType v :arr){
         std::visit(
            [](auto&& val){std::cout<<val->name()<<"\n";},
            v
         );
     }
}


///////////////////////////////////////////

void CommonAction(Container &arr){
        for(VType v :arr){
    std::visit(
    [](auto&& val){std::cout<<val->name();},
        v
    );
}
 }

///////////////////////////

/*
 Description: of CommonAction function
 1. for each variant , visit each variant (v).
 2. Open the variant , whatever you find.
 3. Using val pointer , start accessing common functionality on that varaint (v)

*/


/* -----------------------Scenario 2 unCommonFunction------------------------------*/


/*
  1. for each variant type Vtype  called 'v'
  2. open variant and check if v holds an alternative of type BusinessOwner*
  3. if yes, get data from slot 1 of the variant (because slot 1 is for BusinessOwner*)
    Now save this to a variable and access revenue.

  
  */
void unCommonFunction(Container &arr){
    for(VType v: arr){ 
        if(std::holds_alternative<BusinessOwner*>(v)){
           BusinessOwner *ow = std::get<1>(v);
           std::cout<<ow->revenue();
        
    }

    }
}




int main(){
    Empoyee *emp = new Empoyee("Sonu",67000.0f);
    BusinessOwner *bown = new BusinessOwner("KPIT","124zct",100,50);
    //type safed union. 
    // either you find empoyee pointer or businessowner pointer.
    //this is functional polymorphism.
   Container arr{emp, bown};
   CommonAction(arr);
}




/*
   To access data in variant is difficult.

[
         index 0                                   index 1
   Employee  BusinessOwner                    Employee  BusinessOwner
   [ 0x100H  |   ------  ]                   [  ------- |   0x123H ]
]<-----------------------------arr--------------------------------->

   1. Figure out which data is active.
   
   scenario 1: I want to execute a function that is present in all types of the variant.
               e.g: getter for name.
               open the variant and call getter.
  scenario  2: you want to call a function that only exists in some but not all types of variant.
              
            for each variant ,  open the variant , if the variant has business owner , if yes, print revenue else go to next one

*/

