#include "stdafx.h"

#include <iostream>

#include "RefinedAbstractionB.h"

RefinedAbstractionB::~RefinedAbstractionB()
{

}

void RefinedAbstractionB::Operation()
{
    std::cout << "Refined call: ";
    Abstraction::Operation();
}

RefinedAbstractionB::RefinedAbstractionB(std::shared_ptr<ImplementationB> implementationB) : Abstraction(implementationB)
{

}
