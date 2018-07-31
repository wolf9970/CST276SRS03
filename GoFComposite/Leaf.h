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
        std::cout << "Leaf operation" << std::endl;
    }

    void Add(Component*) override
    {
        std::cout << "leaf cannot add" << std::endl;
    }
    void Remove(Component*) override
    {
        std::cout << "leaf cannot remove" << std::endl;
    }
    void GetChild(int) override
    {
        std::cout << "leaf cannot GetChild" << std::endl;
    }
};


#endif //CST276SRS03_LEAF_H
