#ifndef DECORATOR_CONCRETE_COMPONENT_H_
#define DECORATOR_CONCRETE_COMPONENT_H_

#include "component.h"

class ConcreteComponent : public Component
{
public:
    virtual void Operation() override;
};


#endif
