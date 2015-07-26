#include "stdafx.h"

#include "ConcreteStateA.h"

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::Handle(Context* context)
{
    std::cout << "State A visited\n";
    ChangeState(context, ConcreteStateA::Instance());
}

ConcreteStateA* ConcreteStateA::Instance()
{
    static ConcreteStateA stateA;
    return &stateA;
}

ConcreteStateA::ConcreteStateA()
{

}
