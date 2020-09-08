#ifndef PROTOTYPE_PROTOTYPE_X1_H_
#define PROTOTYPE_PROTOTYPE_X1_H_

#include <memory>
#include "abstract_prototype_x.h"

class PrototypeX1 : public AbstractPrototypeX
{
public:
    virtual std::shared_ptr<AbstractPrototypeX> Clone() override;

    virtual void Configure(int param1) override;

    virtual void Operation() override;

    virtual ~PrototypeX1();
};


#endif
