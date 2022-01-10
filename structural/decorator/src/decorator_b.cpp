#include <iostream>

#include "decorator_b.h"

DecoratorB::~DecoratorB()
{

}

void DecoratorB::Operation()
{
    std::cout << "DecoratorB::Operation()\n\t";
    Decorator::Operation();
    AdditionalAction();
}

void DecoratorB::AdditionalAction()
{
    std::cout << "So long!\n";
}

DecoratorB::DecoratorB(std::shared_ptr<Component> component) : Decorator(component)
{

}
