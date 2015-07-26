#ifndef TEMPLATE_METHOD_CONCRETE_CLASS_A_H_
#define TEMPLATE_METHOD_CONCRETE_CLASS_A_H_

#include "AbstractClass.h"

class ConcreteClassA : public AbstractClass
{
public:
    virtual ~ConcreteClassA();

protected:
    virtual void FirstPrimitiveOperation() override;

    virtual void SecondPrimitiveOperation() override;
};


#endif