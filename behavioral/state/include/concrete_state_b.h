#ifndef STATE_CONCRETE_STATE_B_H_
#define STATE_CONCRETE_STATE_B_H_

#include "abstract_state.h"

class ConcreteStateB : public AbstractState
{
private:
    ConcreteStateB();

    ConcreteStateB(const ConcreteStateB&) = delete;

    ConcreteStateB& operator = (const ConcreteStateB&) = delete;

public:
    static ConcreteStateB* Instance();

    virtual void Handle(Context* context) override;

    virtual ~ConcreteStateB();
};


#endif



