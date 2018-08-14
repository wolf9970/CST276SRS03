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

    void AnOperation()
    {
        Product* product_;
        product_ = FactoryMethod();
    }

    virtual ~Creator() = 0;
};

inline Creator::~Creator() = default;

#endif //CST276SRS03_CREATOR_H
