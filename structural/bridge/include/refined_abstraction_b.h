#ifndef BRIDGE_REFINED_ABSTRACTION_B_H_
#define BRIDGE_REFINED_ABSTRACTION_B_H_

#include "implementation_b.h"
#include "abstraction.h"

class RefinedAbstractionB : public Abstraction
{
public:
    RefinedAbstractionB(std::shared_ptr<ImplementationB> implementationB);

    virtual void Operation() override;

    virtual ~RefinedAbstractionB();
};


#endif
