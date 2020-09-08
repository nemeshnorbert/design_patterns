#include "abstract_state.h"
#include "context.h"
#include "concrete_state_b.h"


Context::Context()
    : state_(ConcreteStateB::Instance())
{}

void Context::Request()
{
    state_->Handle(this);
}
