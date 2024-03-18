#include "Functionalities.h"
#include "EmptyContainerException.h"
#include "IdNotFoundException.h"
#include<algorithm>
#include<numeric>
#include<future>




void CreateObjects(Container &data)
{
    
    data.emplace( "c101", std::make_shared<Car>("c101",750000.0f, "Honda City", std::make_shared<Engine>(400,128), CarType::SEDAN));
    data.emplace( "c101", std::make_shared<Car>("c102",850000.0f, "Kia Seltos", std::make_shared<Engine>(500,128), CarType::HATCHBACK));
    data.emplace( "c101", std::make_shared<Car>("c103",950000.0f, "Honda City", std::make_shared<Engine>(100,108), CarType::SEDAN));
}



int TotalHorsepower(const Container &data)
{
       if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }


   int total = std::accumulate(
        data.begin(),
        data.end(),
        0.0f,
        [&](float answer_upto_current_point, const std::pair<std::string, CarPointer> &row){
            return answer_upto_current_point + row.second->engine()->horsepower();
        }
    );
  
  return total;
}

bool IsContainerAllCarAbove700000(const Container &data)
{
      if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }

    return std::all_of(
      data.begin(),
      data.end(),
      [](const std::pair<std::string, CarPointer>&row){ 
         return row.second->price() > 700000.0f;
      }
    );
} 

Engine *EnginePointerToMinPriceCar(const Container &data)
{

      if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }
 
   
    auto itr = std::min_element(
        data.begin(),
        data.end(),
        [](const std::pair<std::string, CarPointer>&row1, const std::pair<std::string, CarPointer>&row2){
            return row1.second->price() < row2.second->price();
        }
    );

    //smartpointers can be dereferenced by .get()

    return (*itr).second->engine().get();

    
}

float AverageEngineTorque(const Container &data)
{
     if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }

    std::size_t count{0};
    float sum = std::accumulate(
         data.begin(),
         data.end(),
         0.0f,
        [&](float answer_upto_current_point, const std::pair<std::string, CarPointer>&row){
            if(row.second->engine()){
                count++;
                return answer_upto_current_point + row.second->engine()->torque();
            }
            return answer_upto_current_point;
       
         }
    );
  

   return sum/static_cast<float>(count);
  
}

std::string FindCarModelById(const Container &data, const std::string carId)
{
     if(data.empty()){
        throw EmptyContainerException("Data is empty");
    }
    
    auto itr = std::find_if(
        data.begin(),
        data.end(),
        [&](const std::pair<std::string, CarPointer>&row){
            return row.first== carId;
        }
    );

    if(itr == data.end()){
        throw IdNotFoundException("Id not found", std::future_errc::no_state);
    }else{
        return (*itr).second->model();
    }
   

}

