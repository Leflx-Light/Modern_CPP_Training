#include "Product.h"


std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_product_id: " << rhs._product_id
       << " _product_price: " << rhs._product_price
       << " _product_brand: " << rhs._product_brand
       << " _product_tax_ammount: " << rhs._product_tax_ammount;
    return os;
}

Product::Product(std::string product_id, ProductType product_type, float product_price, std::string product_brand, ProductOriginType product_origin_type):
_product_id{product_id},
_product_type{product_type},
_product_price{product_price},
_product_brand{product_brand},
_product_origin_type{product_origin_type}
{
    _product_tax_ammount = 0.05f * _product_price;
}
