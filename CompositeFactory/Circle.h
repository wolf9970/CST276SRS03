//
// Created by wolf on 8/12/18.
//

#ifndef CST276SRS03_CIRCLE_H
#define CST276SRS03_CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
private:
    int centerX_;
    int centerY_;
    int radius_;

    void SetParams(int centerX, int centerY, int radius)
    {
        centerX_ = centerX;
        centerY_ = centerY;
        radius_ = radius;
    }

};


#endif //CST276SRS03_CIRCLE_H
