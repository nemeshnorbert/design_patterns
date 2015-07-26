#include "stdafx.h"

#include <iostream>

#include "ConcreteObserver.h"

ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::Update()
{
    std::cout << "Observer notified\n";
    auto lock = subject_.lock();
    observerState_ = lock->GetState();
}

ConcreteObserver::ConcreteObserver(const std::string& name, 
    std::shared_ptr<ConcreteSubject> subject) 
    : Observer(name)
    , subject_(subject)
{

}
