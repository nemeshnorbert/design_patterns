#include <iostream>

#include "concrete_command.h"

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
