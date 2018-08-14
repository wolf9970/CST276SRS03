//
// Created by wolf on 8/13/18.
//

#ifndef CST276SRS03_CIRCLEFACTORY_H
#define CST276SRS03_CIRCLEFACTORY_H

#include "ShapeFactory.h"

class CircleFactory : public ShapeFactory
{
public:
    Shape* ShapeFactoryMethod() override
    {
        return new Circle;
    }
};

#endif //CST276SRS03_CIRCLEFACTORY_H
