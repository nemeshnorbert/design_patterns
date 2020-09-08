#include "decorator.h"

Decorator::~Decorator()
{

}

void Decorator::Operation()
{
    if (component_ != nullptr)
    {
        component_->Operation();
    }
}

Decorator::Decorator(std::shared_ptr<Component> component) : component_(component)
{

}
