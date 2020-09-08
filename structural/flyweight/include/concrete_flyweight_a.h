#ifndef FLYWEIGHT_CONCRETE_FLYWEIGHT_A_H_
#define FLYWEIGHT_CONCRETE_FLYWEIGHT_A_H_

#include "flyweight.h"

class ConcreteFlyweightA : public Flyweight
{
public:
    virtual void Operation(const State& state) override;

    virtual ~ConcreteFlyweightA();

private:
    State intrinsicState_;
};


#endif
