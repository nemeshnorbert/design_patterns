#include <iostream>

#include "refined_abstraction_b.h"

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
