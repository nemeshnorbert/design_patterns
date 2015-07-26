#include "stdafx.h"

#include <iostream>

#include "ConcreteClassA.h"

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
