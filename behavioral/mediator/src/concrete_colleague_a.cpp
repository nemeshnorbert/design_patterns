#include <iostream>

#include "concrete_colleague_a.h"

ConcreteColleagueA::~ConcreteColleagueA()
{

}

void ConcreteColleagueA::Notify(const Message& message)
{
    std::cout << "Colleague A process message: " << message.Text() << '\n';
}

void ConcreteColleagueA::Send(const Message& message)
{
    std::cout << "Colleague A sent message: " << message.Text() << '\n';
    mediator_->Send(message, shared_from_this());
}

ConcreteColleagueA::ConcreteColleagueA(std::shared_ptr<Mediator> mediator) : Colleague(mediator)
{

}
