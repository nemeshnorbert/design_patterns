#ifndef TEMPLATE_METHOD_CONCRETE_CLASS_B_H_
#define TEMPLATE_METHOD_CONCRETE_CLASS_B_H_

#include "AbstractClass.h"

class ConcreteClassB : public AbstractClass
{
public:
    virtual ~ConcreteClassB();

protected:
    virtual void FirstPrimitiveOperation() override;

    virtual void SecondPrimitiveOperation() override;
};



#endif