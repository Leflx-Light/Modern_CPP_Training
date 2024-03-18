#include "Workshop.h"
int Workshop:: _auto_token = 1;
std::ostream &operator<<(std::ostream &os, const Workshop &rhs) {
    std::string val = "";
    if(rhs._type == WorkShopType::SERVICE){
        val = "SERVICE";
    }else if(rhs._type == WorkShopType::REPAIRS){
        val = "REPAIRS";
    }else {
        val = "BOTH";
    }

    os << "_centre_id: ";
     std::visit([&](auto&& val){os<<val;},rhs._centre_id);
       os<< " _service_point_count: " << rhs._service_point_count
       << " _type: " <<val
       << " _token_number: " << rhs._token_number
       << " _attendant_count: " << rhs._attendant_count
       << " _evaluation_value: " << rhs._evaluation_value
       << " _current_charge: " << rhs._current_charge;
    return os;
}

Workshop::Workshop(std::variant<int, std::string> centre_id, int service_point_count, WorkShopType type, int token_number, int auto_token, int attendant_count, float evaluation_value, int current_charges):
_centre_id{centre_id},
_service_point_count{service_point_count},
_type{type},
_token_number{auto_token++},
_attendant_count{attendant_count},
_evaluation_value{evaluation_value},
_current_charge{current_charges}
{
}