#ifndef PROTOTYPE_PROTOTYPE_X2_H_
#define PROTOTYPE_PROTOTYPE_X2_H_

#include <memory>
#include "AbstractPrototypeX.h"

class PrototypeX2 : public AbstractPrototypeX
{
public:
    virtual std::shared_ptr<AbstractPrototypeX> Clone() override;

    virtual void Configure(int param1) override;

    virtual void Operation() override;

    virtual ~PrototypeX2();
};


#endif