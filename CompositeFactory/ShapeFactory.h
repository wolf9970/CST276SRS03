//
// Created by wolf on 8/12/18.
//

#ifndef CST276SRS03_SHAPEFACTORY_H
#define CST276SRS03_SHAPEFACTORY_H


#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"
#include "Line.h"

class ShapeFactory
{
public:
    virtual Shape* ShapeFactoryMethod() = 0;

    Shape* CreateShape()
    {
        Shape* shape_;
        shape_ = ShapeFactoryMethod();
        return shape_;
    }

    virtual ~ShapeFactory() = 0;
};

inline ShapeFactory::~ShapeFactory() = default;


#endif //CST276SRS03_SHAPEFACTORY_H
