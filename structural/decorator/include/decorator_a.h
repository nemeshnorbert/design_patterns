#ifndef DECORATOR_DECORATOR_A_H_
#define DECORATOR_DECORATOR_A_H_

#include <string>

#include "decorator.h"

class DecoratorA : public Decorator
{
public:
    DecoratorA(std::shared_ptr<Component> component);

    void SetMessage(const std::string message);

    virtual void Operation() override;

    virtual ~DecoratorA();

private:
    std::string message_ = "So long!\n";
};

#endif
