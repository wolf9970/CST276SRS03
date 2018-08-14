//
// Created by wolf on 8/13/18.
//

#ifndef CST276SRS03_RECTANGLEFACTORY_H
#define CST276SRS03_RECTANGLEFACTORY_H


#include "ShapeFactory.h"

class RectangleFactory : public ShapeFactory
{

public:
    Shape* ShapeFactoryMethod() override
    {
        return new Rectangle;
    }
};


#endif //CST276SRS03_RECTANGLEFACTORY_H
