#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include "ProductType.h"
class Product
{
private:
    std::string _id;
    std::string _name;
    float _rating;
    float _price;
    ProductType _type;
public:
    Product()=delete;
    Product(const Product&) = delete;
    Product(Product&&)=delete;
    const Product& operator=(Product&)=delete;
    Product&& operator=(Product&&)=delete;
    ~Product()=default;

    //parameterized constructor:
    Product(std::string id, std::string name, float rating, float price, ProductType type);

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    float rating() const { return _rating; }
    void setRating(float rating) { _rating = rating; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }

    ProductType type() const { return _type; }
    void setType(const ProductType &type) { _type = type; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);

    
};

#endif // PRODUCT_H
