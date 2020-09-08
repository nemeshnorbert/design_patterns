#ifndef ADAPTER_CLASS_ADAPTER_H_
#define ADAPTER_CLASS_ADAPTER_H_

#include "adaptee.h"
#include "target_interface.h"

class Adapter : public TargetInterface, private Adaptee
{
public:
    virtual void Action(int param1) override;
};


#endif
