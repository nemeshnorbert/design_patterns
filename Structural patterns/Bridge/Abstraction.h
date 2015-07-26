#ifndef BRIDGE_ABSTRACTION_H_
#define BRIDGE_ABSTRACTION_H_

#include <memory>

#include "Implementation.h"

class Abstraction
{
public:
    Abstraction(std::shared_ptr<Implementation> implementation);

    virtual void Operation();

    virtual ~Abstraction();

protected:
    std::shared_ptr<Implementation> implementation_;
};


#endif