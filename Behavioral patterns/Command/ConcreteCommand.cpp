#include "stdafx.h"

#include <iostream>

#include "ConcreteCommand.h"

ConcreteCommand::~ConcreteCommand()
{

}

void ConcreteCommand::Execute()
{
    std::cout << "ConcreteCommand::Execute() calls ";
    reciever_->Action();
}

ConcreteCommand::ConcreteCommand(std::shared_ptr<Reciever> reciever) : Command(reciever)
{

}
