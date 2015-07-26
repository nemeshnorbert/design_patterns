#include "stdafx.h"
#include "ConcreteSubject.h"

ConcreteSubject::~ConcreteSubject()
{

}

const State& ConcreteSubject::GetState() const
{
    return state_;
}
