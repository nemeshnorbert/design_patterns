#ifndef FLYWEIGHT_CONCRETE_FLYWEIGHT_B_H_
#define FLYWEIGHT_CONCRETE_FLYWEIGHT_B_H_

#include "State.h"
#include "Flyweight.h"

class ConcreteFlyweightB : public Flyweight
{
public:
    virtual void Operation(const State& state) override;


    virtual ~ConcreteFlyweightB();

private:
    State intrinsicState_;
};


#endif