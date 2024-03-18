#include "Product.h"
std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    std::string val = " ";
    if(rhs._type == ProductType::FMCG){
        val = "FMCG";
    }else  if(rhs._type == ProductType::ELECTRONIC){
        val = "ELECTRONIC";
    }else{
        val = "FURNITURE";
    }
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _rating: " << rhs._rating
       << " _price: " << rhs._price
       << " _type: " << val;
    return os;
}

Product::Product(std::string id, std::string name, float rating, float price, ProductType type):
_id{id},_name{name},_rating{rating}, _price{price}, _type{type}
{
    if(_rating < 1 || _rating > 5 ){
        throw std::runtime_error("INVALID RATING");
    }
}