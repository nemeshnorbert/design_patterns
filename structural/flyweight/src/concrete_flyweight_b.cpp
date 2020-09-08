#include <iostream>

#include "state.h"
#include "concrete_flyweight_b.h"

ConcreteFlyweightB::~ConcreteFlyweightB()
{

}

void ConcreteFlyweightB::Operation(const State& state)
{
    std::cout << "ConcreteFlyweightB::Operation(" << state.GetData() << ")\n";
    intrinsicState_ = state;
}
