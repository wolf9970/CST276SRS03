//
// Created by wolf on 8/4/18.
//

#ifndef CST276SRS03_CONCRETECREATOR_H
#define CST276SRS03_CONCRETECREATOR_H

#include "Creator.h"

class ConcreteCreator : public Creator
{
    Product* FactoryMethod() override
    {
        return new ConcreteProduct;
    }
};


#endif //CST276SRS03_CONCRETECREATOR_H
