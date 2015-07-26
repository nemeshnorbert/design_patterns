// Mediator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ConcreteMediator.h"

int _tmain(int argc, _TCHAR* argv[])
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

