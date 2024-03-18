#ifndef PRODUCT_H
#define PRODUCT_H
#include "ProductOriginType.h"
#include "ProductType.h"
#include<iostream>


class Product
{
private:
     std::string _product_id;
     ProductType _product_type;
     float _product_price;
     std::string _product_brand;
     ProductOriginType _product_origin_type;
     float _product_tax_ammount;

public:
    Product()=delete;
    Product(const Product&)=delete;
    Product(Product&&)=delete;
    Product& operator=(const Product&)=delete;
    Product&& operator=(Product &&)=delete;
    ~Product()=default;

    //parameterized constructor:
    Product(std::string product_id, ProductType product_type, float product_price, std::string product_brand, ProductOriginType product_origin_type);


    //getters and setters: 
    std::string productId() const { return _product_id; }
    void setProductId(const std::string &product_id) { _product_id = product_id; }

    ProductType productType() const { return _product_type; }
    void setProductType(const ProductType &product_type) { _product_type = product_type; }

    float productPrice() const { return _product_price; }
    void setProductPrice(float product_price) { _product_price = product_price; }

    std::string productBrand() const { return _product_brand; }
    void setProductBrand(const std::string &product_brand) { _product_brand = product_brand; }

    ProductOriginType productOriginType() const { return _product_origin_type; }
    void setProductOriginType(const ProductOriginType &product_origin_type) { _product_origin_type = product_origin_type; }

friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
    float productTaxAmmount() const { return _product_tax_ammount; }
    void setProductTaxAmmount(float product_tax_ammount) { _product_tax_ammount = product_tax_ammount; }


   
    
};

#endif // PRODUCT_H
