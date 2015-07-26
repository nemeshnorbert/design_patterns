#include "stdafx.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

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
