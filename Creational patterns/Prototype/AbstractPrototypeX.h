#ifndef PROTOTYPE_ABSTRACT_PROTOTYPE_X_H_
#define PROTOTYPE_ABSTRACT_PROTOTYPE_X_H_

#include <memory>

class AbstractPrototypeX
{
public:
    virtual std::shared_ptr<AbstractPrototypeX> Clone() = 0;

    virtual void Configure(int param1) = 0;

    virtual void Operation() = 0;

    virtual ~AbstractPrototypeX();
};


#endif


