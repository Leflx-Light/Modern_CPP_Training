#include<iostream>
#include<array>
#include<unordered_map>





int main(){
    std::array<int,2>data{101,90000};
    std::unordered_map<int,std::string> map{
        std::make_pair<int, std::string>(101, "Sonu"),
        std::make_pair<int, std::string>(102, "Vishal")
    };

    for(auto& [k,v]: map){
        std::cout<<"Key is  : "<<k<<" Value is : "<<v<<std::endl;
    }

    // int empId = data[0];
    // int empSalary = data[1];
   
   // structured will work on which are sequential and fixed size, it works on array, pair but not work on vector
    auto [empId, empSalary]= data;
    std::cout<<empId<<" "<<empSalary<<std::endl;
}