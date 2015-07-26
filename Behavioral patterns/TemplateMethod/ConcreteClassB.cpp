#include "stdafx.h"

#include <iostream>

#include "ConcreteClassB.h"

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
