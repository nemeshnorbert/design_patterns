#ifndef PROTOTYPE_PROTOTYPE_Y2_H_
#define PROTOTYPE_PROTOTYPE_Y2_H_

#include <memory>
#include "abstract_prototype_y.h"

class PrototypeY2 : public AbstractPrototypeY
{
public:
    virtual std::shared_ptr<AbstractPrototypeY> Clone() override;

    virtual void Configure(int param1, int param2) override;

    virtual void Action() override;

    virtual ~PrototypeY2();
};


#endif
