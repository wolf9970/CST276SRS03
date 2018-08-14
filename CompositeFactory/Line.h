//
// Created by wolf on 8/13/18.
//

#ifndef CST276SRS03_LINE_H
#define CST276SRS03_LINE_H

#include "Shape.h"

class Line : public Shape
{
private:
    int x1_, y1_, x2_, y2_;

public:

    void SetParams(int x1, int y1, int x2, int y2)
    {
        x1_ = x1;
        y1_ = y1;
        x2_ = x2;
        y2_ = y2;
    }
};


#endif //CST276SRS03_LINE_H
