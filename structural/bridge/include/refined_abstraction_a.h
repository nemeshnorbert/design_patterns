#ifndef BRIDGE_REFINED_ABSTRACTION_A_H_
#define BRIDGE_REFINED_ABSTRACTION_A_H_

#include "implementation_a.h"
#include "abstraction.h"

class RefinedAbstractionA : public Abstraction
{
public:
    RefinedAbstractionA(std::shared_ptr<ImplementationA> implementationA);

    virtual void Operation() override;

    virtual ~RefinedAbstractionA();
};


#endif
