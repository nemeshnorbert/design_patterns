#include "stdafx.h"

#include <iostream>

#include "DecoratorB.h"

DecoratorB::~DecoratorB()
{

}

void DecoratorB::Operation()
{
    Decorator::Operation();
    AdditionalAction();
}

void DecoratorB::AdditionalAction()
{
    std::cout << "from DcoratorB\n";
}

DecoratorB::DecoratorB(std::shared_ptr<Component> component) : Decorator(component)
{

}
