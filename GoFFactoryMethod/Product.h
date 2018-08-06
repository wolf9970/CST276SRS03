//
// Created by wolf on 8/4/18.
//
// GoF Factory Pattern
#ifndef CST276SRS03_PRODUCT_H
#define CST276SRS03_PRODUCT_H

#include <iostream>

class Product
{
public:
    virtual ~Product() = 0;
};

inline Product::~Product() = default;


#endif //CST276SRS03_PRODUCT_H