#include <iostream>

#include "state.h"
#include "concrete_flyweight_a.h"

ConcreteFlyweightA::~ConcreteFlyweightA()
{

}

void ConcreteFlyweightA::Operation(const State& state)
{
    std::cout << "ConcreteFlyweightA::Operation(" << state.GetData() << ")\n";
    intrinsicState_ = state;
}
