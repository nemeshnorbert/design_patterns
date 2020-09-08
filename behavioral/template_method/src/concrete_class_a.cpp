#include <iostream>

#include "concrete_class_a.h"

void ConcreteClassA::SecondPrimitiveOperation()
{
    std::cout << "ConcreteClassA::FirstPrimitiveOperation()\n";
}

void ConcreteClassA::FirstPrimitiveOperation()
{
    std::cout << "ConcreteClassA::FirstPrimitiveOperation()\n";
}

ConcreteClassA::~ConcreteClassA()
{

}
