#ifndef OBSERVER_PULL_MODEL_CONCRETE_SUBJECT_H_
#define OBSERVER_PULL_MODEL_CONCRETE_SUBJECT_H_

#include "state.h"
#include "subject.h"

class ConcreteSubject : public Subject
{
public:
    virtual const State& GetState() const override;

    virtual ~ConcreteSubject();

private:
    State state_;
};

#endif
