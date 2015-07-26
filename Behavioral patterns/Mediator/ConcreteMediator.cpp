#include "stdafx.h"
#include "ConcreteMediator.h"

ConcreteMediator::~ConcreteMediator()
{

}

void ConcreteMediator::SetCollegueB(std::shared_ptr<ConcreteColleagueB> collegueB)
{
    collegueB_ = collegueB;
}

std::shared_ptr<ConcreteColleagueB> ConcreteMediator::GetCollegueB() const
{
    return collegueB_;
}

void ConcreteMediator::SetCollegueA(std::shared_ptr<ConcreteColleagueA> collegueA)
{
    collegueA_ = collegueA;
}

std::shared_ptr<ConcreteColleagueA> ConcreteMediator::GetCollegueA() const
{
    return collegueA_;
}

void ConcreteMediator::Send(const Message message, std::shared_ptr<Colleague> colleague)
{
    if (colleague == collegueA_)
    {
        collegueB_->Notify(message);
    }
    else if (colleague == collegueB_)
    {
        collegueA_->Notify(message);
    }
}
