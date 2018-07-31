//
// Created by wolf on 7/30/18.
//

#ifndef CST276SRS03_COMPONENT_H
#define CST276SRS03_COMPONENT_H

#include <vector>
#include <algorithm>
#include <iostream>

class Component
{
public:
    virtual void Operation() = 0;
    virtual void Add(Component* component) = 0;
    virtual void Remove(Component* component) = 0;
    virtual void GetChild(int child) = 0;
};


#endif //CST276SRS03_COMPONENT_H
