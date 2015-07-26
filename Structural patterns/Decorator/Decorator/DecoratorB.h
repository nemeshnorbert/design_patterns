#ifndef DECORATOR_DECORATOR_B_H_
#define DECORATOR_DECORATOR_B_H_

#include "Decorator.h"

class DecoratorB : public Decorator
{
public:
    DecoratorB(std::shared_ptr<Component> component);

    void AdditionalAction();

    virtual void Operation() override;

    virtual ~DecoratorB();
};


#endif