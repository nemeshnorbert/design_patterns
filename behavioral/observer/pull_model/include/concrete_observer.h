#ifndef OBSERVER_PULL_MODEL_CONCRETE_OBSERVER_H_
#define OBSERVER_PULL_MODEL_CONCRETE_OBSERVER_H_

#include <string>

#include "concrete_subject.h"
#include "observer.h"

class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(const std::string& name, std::shared_ptr<ConcreteSubject> subject);

    virtual void Update() override;

    virtual ~ConcreteObserver();

private:
    std::weak_ptr<ConcreteSubject> subject_;
    State observerState_;
};

#endif
