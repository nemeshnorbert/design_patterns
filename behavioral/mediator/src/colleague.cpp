#include "colleague.h"

Colleague::~Colleague()
{

}

Colleague::Colleague(std::shared_ptr<Mediator> mediator) : mediator_(mediator)
{

}
