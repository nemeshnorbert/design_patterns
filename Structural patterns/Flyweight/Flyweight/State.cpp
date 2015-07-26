#include "stdafx.h"
#include "State.h"

State::State()
: State(0)
{
}

State::State(int data)
    : data_(data)
{}

int State::GetData() const
{
    return data_;
}
