#include <memory>

#include "implementation_a.h"
#include "implementation_b.h"
#include "refined_abstraction_a.h"
#include "refined_abstraction_b.h"
#include "client.h"


int main(int argc, char** argv)
{
    auto clientA = Client(
        std::make_shared<RefinedAbstractionA>(
            std::make_shared<ImplementationA>()));
    clientA.Action();

    auto clientB = Client(
        std::make_shared<RefinedAbstractionA>(
            std::make_shared<ImplementationA>()));
    clientB.Action();

    return 0;
}

