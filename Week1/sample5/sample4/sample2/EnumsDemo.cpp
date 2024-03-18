#include<iostream>

enum class EngineType{
     DIESEL,
     PETROL
};



class EngineDummy
{
private:
     int _horsepower;
     EngineType _type;
    /* data */
public:
    EngineDummy(int hp, EngineType type):_horsepower{hp}, _type{type} {}
    ~EngineDummy() {}

    friend std::ostream &operator<<(std::ostream &os, const EngineDummy &rhs) {
        std::string val{""};
        if(rhs._type == EngineType::DIESEL){
            val = "DIESEL";
        }else{
            val = "PETROL";
        }
        os << "_horsepower: " << rhs._horsepower
           << " _type: " << val;
        return os;
    }

    
};


int main(){
    EngineDummy e1{700, EngineType::PETROL};
}