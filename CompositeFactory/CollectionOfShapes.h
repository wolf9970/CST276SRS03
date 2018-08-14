//
// Created by wolf on 8/13/18.
//

#ifndef CST276SRS03_COMPOSITEOFSHAPES_H
#define CST276SRS03_COMPOSITEOFSHAPES_H

#include "Drawing.h"

class CollectionOfShapes : public Drawing
{
private:
    std::vector<Drawing*> drawing_;
public:

    void Add(Drawing* drawing) override
    {
        drawing_.emplace_back(drawing);
    }

    void Remove(Drawing* drawing) override
    {
        drawing_.erase(std::remove(drawing_.begin(), drawing_.end(), drawing), drawing_.end());
    }

};


#endif //CST276SRS03_COMPOSITEOFSHAPES_H
