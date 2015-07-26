#include "stdafx.h"
#include "Colleague.h"

Colleague::~Colleague()
{

}

Colleague::Colleague(std::shared_ptr<Mediator> mediator) : mediator_(mediator)
{

}
