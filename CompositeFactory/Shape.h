//
// Created by wolf on 8/12/18.
//

#ifndef CST276SRS03_SHAPE_H
#define CST276SRS03_SHAPE_H

#include "iostream"

class Shape
{

public:
    virtual ~Shape() = 0;
};

inline Shape::~Shape() = default;


#endif //CST276SRS03_SHAPE_H
