// ObserverPushModel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

int _tmain(int argc, _TCHAR* argv[])
{
    std::cout << "Push model:\n";
    auto subject = std::make_shared<ConcreteSubject>();

    auto observerA = std::make_shared<ConcreteObserver>("A", subject);
    auto observerB = std::make_shared<ConcreteObserver>("B", subject);

    subject->Attach(observerA);
    subject->Attach(observerB);

    subject->Notify();

	return 0;
}

