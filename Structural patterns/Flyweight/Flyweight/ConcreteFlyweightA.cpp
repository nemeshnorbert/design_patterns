#include "stdafx.h"

#include <iostream>

#include "State.h"
#include "ConcreteFlyweightA.h"

ConcreteFlyweightA::~ConcreteFlyweightA()
{

}

void ConcreteFlyweightA::Operation(const State& state)
{
    std::cout << "ConcreteFlyweightA::Operation(" << state.GetData() << ")\n";
    intrinsicState_ = state;
}
