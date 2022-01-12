#include <iostream>

#include "concrete_subject.h"
#include "concrete_observer.h"

int main(int argc, char** argv)
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

