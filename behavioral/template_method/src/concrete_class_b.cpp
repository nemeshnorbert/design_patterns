#include <iostream>

#include "concrete_class_b.h"

void ConcreteClassB::SecondPrimitiveOperation()
{
    std::cout << "ConcreteClassB::FirstPrimitiveOperation()\n";
}

void ConcreteClassB::FirstPrimitiveOperation()
{
    std::cout << "ConcreteClassB::FirstPrimitiveOperation()\n";
}

ConcreteClassB::~ConcreteClassB()
{

}
