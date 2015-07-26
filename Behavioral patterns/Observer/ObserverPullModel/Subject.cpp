#include "stdafx.h"

#include <iostream>

#include "Subject.h"

Subject::~Subject()
{

}

void Subject::Notify()
{
    std::cout << "Subject notify observers\n";
    for (auto& nameObserverPair : observers_)
    {
        nameObserverPair.second->Update();
    }
}

void Subject::Detach(std::shared_ptr<Observer> observer)
{
    auto iobserver = observers_.find(observer->Name());
    if (iobserver != observers_.end())
    {
        observers_.erase(iobserver);
    }
}

void Subject::Attach(std::shared_ptr<Observer> observer)
{
    observers_[observer->Name()] = observer;
}
