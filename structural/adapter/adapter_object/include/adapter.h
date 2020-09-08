#ifndef ADAPTER_OBJECT_ADAPTER_H_
#define ADAPTER_OBJECT_ADAPTER_H_

#include "adaptee.h"
#include "target_interface.h"

class Adapter : public TargetInterface
{
public:
    virtual void Action(int param1) override;

private:
    Adaptee instance;
};


#endif
