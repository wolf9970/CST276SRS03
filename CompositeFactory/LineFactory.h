//
// Created by wolf on 8/13/18.
//

#ifndef CST276SRS03_LINEFACTORY_H
#define CST276SRS03_LINEFACTORY_H


#include "ShapeFactory.h"

class LineFactory : public ShapeFactory
{
public:
    Shape* ShapeFactoryMethod() override
    {
        return new Line;
    }
};


#endif //CST276SRS03_LINEFACTORY_H
