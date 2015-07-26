// Decorator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ConcreteComponent.h"
#include "Decorator.h"
#include "DecoratorA.h"
#include "DecoratorB.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto component = std::make_shared<ConcreteComponent>();

    auto decoratorA = std::make_shared<DecoratorA>(component);
    auto decoratorB = std::make_shared<DecoratorB>(component);

    component->Operation();
    decoratorA->Operation();
    decoratorB->Operation();

	return 0;
}

