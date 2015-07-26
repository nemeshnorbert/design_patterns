#ifndef PROXY_IMPLEMENTOR_H_
#define PROXY_IMPLEMENTOR_H_

#include "Interface.h"

class Implementor : public Interface
{
public:
    virtual void Operation() override;

    virtual ~Implementor();
};


#endif