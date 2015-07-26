#include "stdafx.h"

#include <iostream>

#include "State.h"
#include "ConcreteFlyweightB.h"

ConcreteFlyweightB::~ConcreteFlyweightB()
{

}

void ConcreteFlyweightB::Operation(const State& state)
{
    std::cout << "ConcreteFlyweightB::Operation(" << state.GetData() << ")\n";
    intrinsicState_ = state;
}
