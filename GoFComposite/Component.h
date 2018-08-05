//
// Created by wolf on 7/30/18.
//

#ifndef CST276SRS03_COMPONENT_H
#define CST276SRS03_COMPONENT_H

#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>

class Component
{

public:
    virtual ~Component() = 0;
    virtual void Operation() = 0;
    virtual void Add(Component* component) = 0;
    virtual void Remove(Component* component) = 0;
    virtual void GetChild(int child) const = 0;
};

inline Component::~Component() = default;

#endif //CST276SRS03_COMPONENT_H
