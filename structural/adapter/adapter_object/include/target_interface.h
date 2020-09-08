#ifndef ADAPTER_OBJECT_TARGET_INTERFACE_H_
#define ADAPTER_OBJECT_TARGET_INTERFACE_H_

class TargetInterface
{
public:
    virtual void Action(int param1) = 0;

    virtual ~TargetInterface();
};


#endif