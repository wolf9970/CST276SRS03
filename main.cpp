#include "GoFComposite/Composite.h"
#include "GoFComposite/Leaf.h"
#include "GoFFactoryMethod/ConcreteProduct.h"
#include "GoFFactoryMethod/ConcreteCreator.h"

int main()
{
    auto* c1{new Composite};
    auto* c2{new Composite};

    auto* newLeaf{new Leaf};
    auto* newLeaf2{new Leaf};
    auto* newLeaf3{new Leaf};

    c1->Add(newLeaf);
    c1->Add(newLeaf2);
    c1->Add(newLeaf3);

    c2->Add(newLeaf);
    c2->Add(newLeaf2);
    c2->Add(newLeaf3);

    c1->Operation();

    c1->Remove(newLeaf2);

    std::cout << std::endl;
    c1->Operation();
    std::cout << std::endl;
    c1->Add(c2);
    c1->Operation();
    std::cout << std::endl;

    ConcreteCreator creator;
    creator.AnOperation();

    return 0;
}