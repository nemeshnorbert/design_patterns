#ifndef DECORETOR_DECORATOR_H_
#define DECORETOR_DECORATOR_H_

#include <memory>
    
#include "Component.h"

class Decorator : public Component
{
public:
    Decorator(std::shared_ptr<Component> component);

    virtual void Operation() override;

    virtual ~Decorator();

private:
    std::shared_ptr<Component> component_;
};


#endif


