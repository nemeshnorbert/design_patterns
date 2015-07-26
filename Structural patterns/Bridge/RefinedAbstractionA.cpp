#include "stdafx.h"

#include <iostream>

#include "RefinedAbstractionA.h"

RefinedAbstractionA::~RefinedAbstractionA()
{

}

void RefinedAbstractionA::Operation()
{
    std::cout << "Refined call: ";
    Abstraction::Operation();
}

RefinedAbstractionA::RefinedAbstractionA(std::shared_ptr<ImplementationA> implementationA) : Abstraction(implementationA)
{

}
