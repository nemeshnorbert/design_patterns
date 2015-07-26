#ifndef ADAPTER_CLASS_ADAPTER_H_
#define ADAPTER_CLASS_ADAPTER_H_

#include "Adaptee.h"
#include "TargetInterface.h"

class Adapter : public TargetInterface, private Adaptee
{
public:
    virtual void Action(int param1) override;
};


#endif