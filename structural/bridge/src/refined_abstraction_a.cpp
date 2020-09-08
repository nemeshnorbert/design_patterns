#include <iostream>

#include "refined_abstraction_a.h"

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
