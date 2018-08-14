//
// Created by wolf on 8/4/18.
//
// GoF Factory Pattern

#ifndef CST276SRS03_CREATOR_H
#define CST276SRS03_CREATOR_H

#include "ConcreteProduct.h"

class Creator
{

public:
    virtual Product* FactoryMethod() = 0;

    Product* AnOperation()
    {
        Product* product_;
        product_ = FactoryMethod();
        return product_;
    }

    virtual ~Creator() = 0;
};

inline Creator::~Creator() = default;

#endif //CST276SRS03_CREATOR_H
