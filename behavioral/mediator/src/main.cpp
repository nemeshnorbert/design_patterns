#include "concrete_mediator.h"

int main(int argc, char** argv)
{
    auto concreteMediator = std::make_shared<ConcreteMediator>();

    auto colleagueA = std::make_shared<ConcreteColleagueA>(concreteMediator);
    auto colleagueB = std::make_shared<ConcreteColleagueB>(concreteMediator);

    concreteMediator->SetCollegueA(colleagueA);
    concreteMediator->SetCollegueB(colleagueB);

    colleagueA->Send(Message("Hi this is colleague A"));
    colleagueB->Send(Message("Hi this is colleague B"));

    return 0;
}

