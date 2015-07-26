#include "stdafx.h"

#include "AbstractState.h"
#include "Context.h"
#include "ConcreteStateB.h"


Context::Context()
    : state_(ConcreteStateB::Instance())
{}

void Context::Request()
{
    state_->Handle(this);
}
