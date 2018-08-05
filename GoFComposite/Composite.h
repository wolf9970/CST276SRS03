//
// Created by wolf on 7/30/18.
//

#ifndef CST276SRS03_COMPOSITE_H
#define CST276SRS03_COMPOSITE_H

#include "Component.h"

class Composite : public Component
{

private:

    std::vector<Component*> children_;

public:

    void Operation() override
    {
        for (auto g : children_)
        {
            g->Operation();
        }
    }

    void Add(Component* component) override
    {
        children_.emplace_back(component);
    }

    void Remove(Component* component) override
    {
            children_.erase(std::remove(children_.begin(), children_.end(), component), children_.end());
    }

    void GetChild(int child) const override
    {
        return children_.at(child)->Operation();
    }

};

#endif //CST276SRS03_COMPOSITE_H
