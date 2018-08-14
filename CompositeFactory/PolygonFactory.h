//
// Created by wolf on 8/13/18.
//

#ifndef CST276SRS03_POLYGONFACTORY_H
#define CST276SRS03_POLYGONFACTORY_H


#include "ShapeFactory.h"

class PolygonFactory : public ShapeFactory
{
public:
    Shape* ShapeFactoryMethod() override
    {
        return new Polygon;
    }
};


#endif //CST276SRS03_POLYGONFACTORY_H
