#include "Functionalities1.h"


void CreateObjects(Container &data)
{
    data.emplace("c101",std::make_shared<Car>("c101",800000,"Nexon",std::make_shared<Engine>(400,120),CarType::SEDAN));
    data.emplace("c102",std::make_shared<Car>("c102",900000,"Dezire",std::make_shared<Engine>(500,100),CarType::HATCHBACK));
    data.emplace("c103",std::make_shared<Car>("c103",1000000,"Astore",std::make_shared<Engine>(300,150),CarType::SUV));
    data.emplace("c104",std::make_shared<Car>("c104",600000,"Hector",std::make_shared<Engine>(120,320),CarType::HATCHBACK));
    data.emplace("c105",std::make_shared<Car>("c105",800000,"Honda City",std::make_shared<Engine>(600,220),CarType::SEDAN));
    std::cout<<"Objects Create Successfully!!"<<std::endl;
}

float TotalHorsePower(Container &data)
{
    float sum  = std::accumulate(
        data.begin(),
        data.end(),
        0,
        [&](float answer_upto_current_point, const std::pair<std::string, CarPointer> &row ){
            return answer_upto_current_point + row.second->engine()->horsepower();
        }
    );
    return sum;
}

bool IsAllContainerPriceAbove700000(Container &data)
{
   bool ans = std::all_of(
        data.begin(),
        data.end(),
        [&](const std::pair<std::string, CarPointer> &row){
            return row.second->price() > 700000;
        }
   );
   return ans;
}

std::shared_ptr<Engine> ReturnEngineToMinPriceCar(Container &data)
{
    auto itr = std::min_element(
        data.begin(),
        data.end(),
        [&](const std::pair<std::string, CarPointer> &row1, const std::pair<std::string, CarPointer> &row2){
            return row1.second->price() < row2.second->price();
        }
    );

    return (*itr).second->engine();
}

float FindAverageTorque(Container &data)
{
    float sum = std::accumulate(
        data.begin(),
        data.end(),
        0.0f,
        [](float answer_upto_current_point, const std::pair<std::string, CarPointer> &row){
             return answer_upto_current_point + row.second->engine()->torque();
        }
    );

    return sum/data.size();
}

std::string FindCarModelById(Container &data, std::string carid)
{
    auto itr = std::find_if(
           data.begin(),
           data.end(),
           []

    );
}
