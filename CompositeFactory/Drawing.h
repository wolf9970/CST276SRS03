//
// Created by wolf on 8/13/18.
//

#ifndef CST276SRS03_DRAWING_H
#define CST276SRS03_DRAWING_H

#include <vector>
#include <algorithm>

class Drawing
{
public:
    virtual ~Drawing() = 0;
    virtual void Add(Drawing* drawing) = 0;
    virtual void Remove(Drawing* drawing) = 0;
};

inline Drawing::~Drawing() = default;

#endif //CST276SRS03_DRAWING_H
