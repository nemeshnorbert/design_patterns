#ifndef PROTOTYPE_PROTOTYPE_Y1_H_
#define PROTOTYPE_PROTOTYPE_Y1_H_

#include <memory>

#include "abstract_prototype_y.h"

class PrototypeY1 : public AbstractPrototypeY
{
public:
    virtual std::shared_ptr<AbstractPrototypeY> Clone() override;

    virtual void Configure(int param1, int param2) override;

    virtual void Action() override;

    virtual ~PrototypeY1();
};


#endif
