#include "refined_abstraction_a.h"
#include "refined_abstraction_b.h"


int main(int argc, char** argv)
{
    auto implementationA = std::make_shared<ImplementationA>();
    auto implementationB = std::make_shared<ImplementationB>();

    auto abstractionA = std::make_shared<RefinedAbstractionA>(implementationA);
    abstractionA->Operation();

    auto abstractionB = std::make_shared<RefinedAbstractionB>(implementationB);
    abstractionB->Operation();

	return 0;
}

