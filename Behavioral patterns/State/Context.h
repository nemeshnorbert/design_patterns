#ifndef STATE_CONTEXT_H_
#define STATE_CONTEXT_H_

class AbstractState;

class Context
{
public:
    Context();

    void Request();

private:
    friend class AbstractState;
    AbstractState* state_;
};

#endif



