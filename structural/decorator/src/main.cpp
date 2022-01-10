#include "concrete_component.h"
#include "decorator.h"
#include "decorator_a.h"
#include "decorator_b.h"

int main(int argc, char* argv[])
{
    auto component = std::make_shared<ConcreteComponent>();

    auto decoratorA = std::make_shared<DecoratorA>(component);
    auto decoratorB = std::make_shared<DecoratorB>(component);

    component->Operation();
    decoratorA->Operation();
    decoratorB->Operation();

    return 0;
}

