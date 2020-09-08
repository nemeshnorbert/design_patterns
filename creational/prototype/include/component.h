#ifndef PROTOTYPE_COMPONENT_H_
#define PROTOTYPE_COMPONENT_H_

#include "abstract_prototype_factory.h"

class Component
{
public:
    Component(std::shared_ptr<AbstractPrototypeFactory> customFactory);

    void ProcessPrototypes(int paramX1, int paramY1, int paramY2);

private:
    std::shared_ptr<AbstractPrototypeFactory> factory_;
};


#endif
