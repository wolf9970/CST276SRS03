//
// Created by wolf on 7/30/18.
//

#ifndef CST276SRS03_LEAF_H
#define CST276SRS03_LEAF_H

#include "Component.h"

class Leaf : public Component
{

public:

    void Operation() override
    {

    }

    void Add(Component* component) override {}
    void Remove(Component* component) override {}
    void GetChild(int child) const override {}

};

#endif //CST276SRS03_LEAF_H
