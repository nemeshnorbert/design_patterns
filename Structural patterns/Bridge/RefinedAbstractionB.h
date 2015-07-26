#ifndef BRIDGE_REFINED_ABSTRACTION_B_H_
#define BRIDGE_REFINED_ABSTRACTION_B_H_

#include "ImplementationB.h"
#include "Abstraction.h"

class RefinedAbstractionB : public Abstraction
{
public:
    RefinedAbstractionB(std::shared_ptr<ImplementationB> implementationB);

    virtual void Operation() override;

    virtual ~RefinedAbstractionB();
};


#endif