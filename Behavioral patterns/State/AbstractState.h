#ifndef STATE_ABSTRACT_STATE_H_
#define STATE_ABSTRACT_STATE_H_

class Context;

class AbstractState
{
public:
    virtual void Handle(Context* context) = 0;

    virtual ~AbstractState();

protected:
    void ChangeState(Context* context, AbstractState* newState);
};

#endif






