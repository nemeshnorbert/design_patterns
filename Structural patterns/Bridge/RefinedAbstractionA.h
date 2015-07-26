#ifndef BRIDGE_REFINED_ABSTRACTION_A_H_
#define BRIDGE_REFINED_ABSTRACTION_A_H_

#include "ImplementationA.h"
#include "Abstraction.h"

class RefinedAbstractionA : public Abstraction
{
public:
    RefinedAbstractionA(std::shared_ptr<ImplementationA> implementationA);

    virtual void Operation() override;

    virtual ~RefinedAbstractionA();
};


#endif