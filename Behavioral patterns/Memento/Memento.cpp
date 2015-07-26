#include "stdafx.h"
#include "Memento.h"

std::shared_ptr<State> Memento::GetState()
{
    return state_;
}

Memento::Memento(std::shared_ptr<State> state) : state_(state)
{

}
