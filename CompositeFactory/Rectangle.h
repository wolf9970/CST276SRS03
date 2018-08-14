//
// Created by wolf on 8/12/18.
//

#ifndef CST276SRS03_RECTANGLE_H
#define CST276SRS03_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{

private:
    int x1_{0};
    int x2_{0};
    int y1_{0};
    int y2_{0};

public:
    Rectangle() = default;
    Rectangle(int x1, int y1, int x2, int y2)
        : x1_(x1), y1_(y1), x2_(x2), y2_(y2)
    {

    }

};


#endif //CST276SRS03_RECTANGLE_H
