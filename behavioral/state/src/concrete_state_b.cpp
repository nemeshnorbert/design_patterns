#include <iostream>
#include "concrete_state_a.h"
#include "concrete_state_b.h"

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::Handle(Context* context)
{
    std::cout << "State B visited\n";
    ChangeState(context, ConcreteStateA::Instance());
}

ConcreteStateB* ConcreteStateB::Instance()
{
    static ConcreteStateB stateB;
    return &stateB;
}

ConcreteStateB::ConcreteStateB()
{

}
