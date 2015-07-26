#include "stdafx.h"

#include <iostream>

#include "ConcreteColleagueB.h"

ConcreteColleagueB::~ConcreteColleagueB()
{

}

void ConcreteColleagueB::Notify(const Message& message)
{
    std::cout << "Colleague B process message: " << message.Text() << '\n';
}

void ConcreteColleagueB::Send(const Message& message)
{
    std::cout << "Colleague B sent message: " << message.Text() << '\n';
    mediator_->Send(message, shared_from_this());
}

ConcreteColleagueB::ConcreteColleagueB(std::shared_ptr<Mediator> mediator) : Colleague(mediator)
{

}
