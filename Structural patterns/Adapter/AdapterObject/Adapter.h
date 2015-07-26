#ifndef ADAPTER_OBJECT_ADAPTER_H_
#define ADAPTER_OBJECT_ADAPTER_H_

#include "Adaptee.h"
#include "TargetInterface.h"

class Adapter : public TargetInterface
{
public:
    virtual void Action(int param1) override;

private:
    Adaptee instance;
};


#endif