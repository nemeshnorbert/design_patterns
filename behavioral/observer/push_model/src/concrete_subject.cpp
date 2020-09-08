#include "concrete_subject.h"

ConcreteSubject::~ConcreteSubject()
{

}

const State& ConcreteSubject::GetState() const
{
    return state_;
}
