#include "stdafx.h"
#include "Context.h"
#include "AbstractState.h"

void AbstractState::ChangeState(Context* context, AbstractState* newState)
{
    context->state_ = newState;
}

AbstractState::~AbstractState()
{}
