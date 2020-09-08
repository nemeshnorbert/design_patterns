#include "context.h"
#include "abstract_state.h"

void AbstractState::ChangeState(Context* context, AbstractState* newState)
{
    context->state_ = newState;
}

AbstractState::~AbstractState()
{}
