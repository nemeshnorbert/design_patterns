#include <iostream>

#include "concrete_observer.h"

ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::Update(const State& state)
{
    std::cout << "Observer notified\n";
    observerState_ = state;
}

ConcreteObserver::ConcreteObserver(const std::string& name,
    std::shared_ptr<ConcreteSubject> subject)
    : Observer(name)
    , subject_(subject)
{

}
