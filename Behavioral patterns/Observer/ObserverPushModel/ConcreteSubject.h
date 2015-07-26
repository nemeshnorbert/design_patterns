#ifndef OBSERVER_PUSH_MODEL_CONCRETE_SUBJECT_H_
#define OBSERVER_PUSH_MODEL_CONCRETE_SUBJECT_H_

#include "State.h"
#include "Subject.h"

class ConcreteSubject : public Subject
{
public:
    virtual const State& GetState() const override;

    virtual ~ConcreteSubject();

private:
    State state_;
};

#endif